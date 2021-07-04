#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int flag,uperlimit,lowerlimit,i,j,sum=0;
    cout<<"Enter range";
    cin>>uperlimit;
    cin>>lowerlimit;
    
    //check for prime method
    for(i=uperlimit+1;i<lowerlimit;i++)
    {
        flag=0;
    for(j=2;j<=sqrt(i);j++)
    {
        if(i%j==0)
        {
            flag=1;
            break;
        }
    }
    //print the prime numbers
    if(flag==0)
    {
        cout<<i<<endl;
        sum+=i;
        
    }
    
}
cout<<"The sum of the prime numbers are "<<sum;
    
 return 0;   
    
}
