
#include <iostream>

using namespace std;

int main()
{
  int n,i,count=0;
  cout<<"enter digits ";
  cin>>n;
  do{
      count++;
      n/=10;
  }while(n!=0);
  cout<<count;
}
