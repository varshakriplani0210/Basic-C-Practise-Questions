#include <iostream>

using namespace std;

int main()
{
  int i,n,multi;
  cout<<"enter the multiplication table to be printed";
  cin>>n;
  cout<<"The table of "<<n<<" is "<<endl;
  for(i=1;i<=10;i++)
  {
     multi=n*i;
     cout<<n<<" * "<<i<<" "<<" = "<<multi<<endl;
  }

  
}
