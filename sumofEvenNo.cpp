#include <iostream>

using namespace std;

int main()
{
    int sum,n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
       if(i%2==0)
       {
           sum+=i;
       }
        
    }
    cout<<"The sum is "<<sum;
}
