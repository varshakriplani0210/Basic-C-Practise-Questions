#include <iostream>

using namespace std;

int main()
{
 int n,i,first,last;
 cout<<"enter a number";
 cin>>n;
 last=n%10;
 for(first=n;first>=10;first/=10);
 cout<<"last digit of the number "<<n<<" "<<last<<endl;
 cout<<"first digit of the number is "<<n<<" "<<first;
}
