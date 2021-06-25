#include <iostream>
#include <math.h>


using namespace std;
//swap=end*1000+n*10+first

int main()
{
   int n,divide,digit,swap,first,last;
   cin>>n;//1234
   
   digit=log10(n);//3.09-->3 because it is int
   
   divide=pow(10,digit);//10^3-->1000
   
   first=n/divide; //1234/1000-->1
   
   n=n%divide; //1234%1000-->234
   
   last=n%10; //234%10-->4
   
   n=n/10; //234/10-->23
   
   swap=last*divide+n*10+first; //4*1000+23*10+1-->4000+230+1-->4231
   
   cout<<swap;
   
}
