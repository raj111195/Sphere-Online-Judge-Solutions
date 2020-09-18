#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	
	long long int t,i,j;
	cin>>t;
	
	while(t--)
	{
		cin>>i;
			long long int count=0;
 
		
		for(j=5;i/j>0;j*=5)
		{
			count+=i/j;
			
		}
		
		cout<<count<<"\n";
		
	}
	return 0;
} 
