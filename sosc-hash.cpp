#include<bits/stdc++.h>

using namespace std;
void start(unordered_map<char, string>& morseCodeMap);
void TtoM(unordered_map<char, string>& morseCodeMap);
void MtoT(unordered_map<char,string>& morseCodeMap);

void intro()
{
   cout << "\n\tMENU\n\tType 1 to convert TEXT to MORSE code\n\tType 2 to convert MORSE Code to TEXT\n\t";
   cout << "Type 3 to exit\n";
}

void start(unordered_map<char, string>& morseCodeMap)
{
   int opt;
   cout << "Enter your choice : ";
   cin >> opt;
   cin.ignore();
   switch (opt)
   {
    case 1 : TtoM(morseCodeMap);
    break;
    case 2 : MtoT(morseCodeMap);
    break;
    case 3 : exit(0);
    break;
    default : cout << "Invalid option\n";
    break;
   }
}
 
void TtoM(unordered_map<char, string>& morseCodeMap)
{
   string input;
   cout << "Enter the text you want to convert : ";
   getline(cin,input);
   cout << input << " in Morse code is : ";

   for(int i =0 ;i < input.size() ; i ++)
   {
        cout << morseCodeMap[char(toupper(input[i]))] << " ";
   }
   cout << "\n\n";
   start(morseCodeMap);
}

void MtoT(unordered_map<char,string>& morseCodeMaps)
{
    unordered_map<string,char> morseCodeMap;
    string input , TilClear = "";
    cout << "Enter Morse code with Space : ";
    getline(cin,input);
    input += " ";
    cout << input << " in Text is : ";

    for(const auto& it : morseCodeMaps)
    {
        morseCodeMap[it.second] = it.first;
    }

    for(int i = 0;i < input.size(); i ++)
    {
        if ((input[i] == ' ')) 
        {
            if (input[i] == input[i-1]) cout << " ";
            char found = morseCodeMap[TilClear];
            cout << found;
            TilClear = "";
        }
        else{
            TilClear += input[i];
        }   
    }
    cout << "\n\n";
    start(morseCodeMaps);
}

int main() {
    unordered_map<char, string> morseCodeMap;
    
    // Populate the unordered map with Morse code for the English alphabet
    morseCodeMap = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."},
        {'F', "..-."}, {'G', "--."}, {'H', "...."}, {'I', ".."}, {'J', ".---"},
        {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"}, {'Y', "-.--"},
        {'Z', "--.."}
    };
   intro();
   start(morseCodeMap);

    return 0;
}
