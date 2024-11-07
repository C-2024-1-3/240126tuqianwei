#include<iostream>
using namespace std;
int gcd(int a,int b)
{
if(b==0) return a;
 else return gcd(b,a%b);
}
int main()
{
 int a,b,g;
 cin>>a>>b;
 g=gcd(a,b);
 cout<<"gcd(a,b)="<<g<<endl;
 cout<<"lcm(a,b)="<<a*b/g;
}