#include<iostream>
using namespace std;
int main()
{
int n;
float sum=0;
cout<<"Enter any num: ";
cin>>n;
for(float i=1;i<=n;i++)
{
sum=sum+(1/i); //jis data type me division karengay ussi data type me value aayengi..
//printf("%f",1/i);
}
cout<<"Sum of this series is "<<sum;
return 0;
}
