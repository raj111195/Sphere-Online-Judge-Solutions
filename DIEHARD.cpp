#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
 
 
long int t,a,b;
cin>>t;
 
while(t--)
{
	cin>>a>>b;
	
	long int c=1;
	
	a+=3; b+=2;
	
	while(1)
	{
		if(a>20 && b<=10)
		{a-=17;b+=7; c+=2;}
		else if(a>5 && b>10)
		{a-=2;b-=8; c+=2; }
		 else break;
		
	}
	//cout<<a<<b;
	cout<<c<<endl;
}
 
 
 
	return 0;
} 
