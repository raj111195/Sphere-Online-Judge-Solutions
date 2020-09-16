#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
	// your code goes here
	
	
	int t;
	cin>>t;
	
	while(t--)
	{
		int d,z;
		long long int sum=0;
		cin>>d;
		
		vector<int> a,b;
		
		for(int i=0;i<d;i++)
		{
			cin>>z;
			a.push_back(z);
		}
		for(int i=0;i<d;i++)
		{
			cin>>z;
			b.push_back(z);
		}
		
		sort(a.begin(),a.end());
		sort(b.begin(),b.end());
		
		
		
		for(int i=0;i<a.size();i++)
		sum+=a[i]*b[i];
		
		cout<<sum<<"\n";
		
	}
	return 0;
} 
Source code | Plain text | Copy to submit

About | Tutorial | Tools | Clusters | Credits | API | Widgets

Legal: Terms of Service | Privacy Policy | GDPR Info

 RSS 
© Spoj.com. All Rights Reserved. Spoj uses Sphere Engine™ © by Sphere Research Labs.
