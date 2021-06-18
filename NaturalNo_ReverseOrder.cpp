#include <iostream>

using namespace std;

int main()
{
   int start,end;
   cout<<"enter start value"<<endl;
   cin>>start;
   cout<<"enter end value"<<endl;
   cin>>end;
  
  //using for loop
   for(int i=start;i>=end;i--)
   {
       cout<<i;
   }
   
  //using while loop
   int j=start;
  while(j>=end)
  {
      
      cout<<j;
      j--;
  }
 
}
