#include<bits/stdc++.h>
using namespace std;


string encode(string message,int k)
{
  
  for(int i=0;i<message.length();i++)
  {
    message[i]+=k;
    if(message[i]>'z')message[i]-=26; //if any character exceeds 'z'
  }
  cout<<"The encoded msg is: "<<message;
}

string decode(string message,int k)
{
   for(int i=0;i<message.length();i++)
  {
    message[i]-=k;
    if(message[i]<'a')message[i]+=26;//if any character subceeds 'a'
  }
  cout<<"The encoded msg is: "<<message;
}
int main()
{
  int k;
  string message,enc;
  
  cout<<"Type encode to encrypt and decode to decrypt: ";
  cin>>enc;
  cout<<"Type the message: ";
  cin>>message;
  cout<<"Enter the number of shifts: ";
  cin>>k;

  while(k>27)k-=26;// if k-th ahead character exceeds 'z'

  if(enc=="encode")encode(message,k);
  else if(enc=="decode")decode(message,k);

}
