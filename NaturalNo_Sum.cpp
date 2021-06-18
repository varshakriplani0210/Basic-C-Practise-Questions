#include <iostream>

using namespace std;

int main()
{
    int n,sum=0,i=1,j;
    cout<<"enter n";
    cin>>n;
    //using while loop
    if(n>0)
    {
        while(i<=n)
        {
         sum+=i;
         i++;   
        }
    }
    cout<<"The sum of "<<n<<" is "<<sum;
    
    //using for loop
    for(j=0;j<=n;j++)
    {
        sum+=j;
    }
    cout<<sum;
}
