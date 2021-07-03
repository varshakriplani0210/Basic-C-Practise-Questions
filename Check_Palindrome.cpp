//check question so it is always either T or F
#include <iostream>

using namespace std;

int main()
{
  int n,rev,i,min,max;
  cout<<"enter an upper limit";
  cin>>min;
  cout<<"enter a lower Limit";
  cin>>max;
  for(i=min;i<=max;i/=10)
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
