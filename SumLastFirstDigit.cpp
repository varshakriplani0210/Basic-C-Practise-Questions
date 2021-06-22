#include <iostream>

using namespace std;

int main()
{
 int n,i,first,last,sum=0;
 cout<<"enter a number ";
 cin>>n;
 last=n%10;
 for(first=n;first>=10;first/=10);
 sum=first+last;
 cout<<"last digit of the number "<<n<<" is "<<last<<endl;
 cout<<"first digit of the number is "<<n<<" is "<<first<<endl;
 cout<<"The sum of the first and the last digit is "<<sum;
}
