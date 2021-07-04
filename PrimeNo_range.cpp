#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int flag,uperlimit,lowerlimit,i,j;
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
    if(flag==0)
    {
        cout<<i<<endl;
    }
}
    
 return 0;   
    
}
