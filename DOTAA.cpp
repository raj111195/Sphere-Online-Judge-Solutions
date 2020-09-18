#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	
	int a,b,c,n;
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		long long int e=0;
		
	scanf("%d%d%d",&a,&b,&c);
		
	while(a--)
	{
		
	scanf("%d",&n);
		
	while(n>c)
	{
		n-=c;
		e++;
	}
		
		
	}
	
	if(e>=b)
	cout<<"YES\n";
	else cout<<"NO\n";
		
		
	}
	
	return 0;
} 
