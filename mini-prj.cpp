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

  while(k>27)k-=26;

  len=message.length();
  for(int i=0;i<len;i++)
  {
    message[i]+=k;
    while(message[i]>'z')message[i]-=26;
  }

  cout<<"The "<<enc<<"d message is: "<<message ;
}