
#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int flag=0,n;
    cout<<"Enter prime number";
    cin>>n;
    //corner case
    if(n<=1)
    {
        return false; //will not return anything...
    }
    
    //check for prime method
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"it is not a prime number";
    }
    else
    {
        cout<<"it is prime number";
    }
    
}

//Optimum Solution
