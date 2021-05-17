#include <iostream>
using namespace std;

int gcd(int a, int b)
{
if(a%b==0)
return b;
return gcd(b%a,a);

}

int gcdArray(int a[],int n){
int r=gcd(a[0],a[1]);
for(int i=2;i<n;i++)
r=gcd(r,a[i]);
return r;
}
int main() {
cout<<"Enter the count of numbers:\n";
int n;
cin>>n;
cout<<"Enter the numbers\n";
int a[n];
for(int j=0;j<n;j++)
cin>>a[j];
cout<<"GCD of the numbers is:"<<gcdArray(a,n);
return 0;

}