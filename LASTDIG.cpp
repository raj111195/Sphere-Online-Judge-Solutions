#include <iostream>
using namespace std;
 
void powe(long long int a,long long int b)
{
 
long long int res=1;
 
a=(a)%10;
while(b>0)
{
	if(b&1)
	res=(res*a)%10;
	
	b=b>>1;
	a=(a*a)%10;
}
 
cout<<res<<"\n";
//return res%10;	
}
 
 
int main() {
	// your code goes here
	
long long int a,b,p,t;
 
 
cin>>t;
 
while(t--)
{
	cin>>a>>b;
	
//	cout<<b;
	powe(a,b);//<<"\n";
}
	return 0;
} 
