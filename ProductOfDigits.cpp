#include <iostream>


using namespace std;


int main()
{
int n,sum=1,temp;
cin>>n;//123
while(n>0)
{
    temp=n%10;
    n/=10;
    sum*=temp;
}
cout<<sum;//6
}
