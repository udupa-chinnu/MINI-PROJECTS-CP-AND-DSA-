#include<bits/stdc++.h>
using namespace std;

int main()
{
  int k,len;
  string message,enc;
  
  cout<<"Type encode to encrypt and decode to decrypt: ";
  cin>>enc;
  cout<<"Type the message: ";
  cin>>message;
  cout<<"Enter the number of shifts: ";
  cin>>k;

  if(enc!="encode" || enc!="decode"){
    cout<<"ERROR [typo]: Was that encode or decode?:)";exit(0);
  }
  while(k>27)k-=26;// if k-th ahead character exceeds 'z'

  len=message.length();
  for(int i=0;i<len;i++)
  {
    message[i]+=k;
    while(message[i]>'z')message[i]-=26; // if any character exceeds 'z'
  }

  cout<<"The "<<enc<<"d message is: "<<message ;
}
