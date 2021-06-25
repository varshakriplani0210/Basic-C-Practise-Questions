#include <iostream>
using namespace std;
int main()
{
int n,rev=0,temp;
cin>>n;//123
while(n>0)
{
   temp=n%10;
   rev=rev*10+temp;
   n/=10;
}
cout<<rev;
}
