#include <iostream>

using namespace std;

int main()
{
  int n,rev,i,;
  cout<<"enter a number";
  cin>>n;
  for(i=n;i>0;i/=10)
  {
      rev=rev*10+i%10;
  }
  //To check
  if(n==rev)
  {
      cout<<"It is a Palindrome";
  }
  else
  {
      cout<<"it is not a palindrome";
  }
}
