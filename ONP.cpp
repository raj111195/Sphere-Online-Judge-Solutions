#include <iostream>
#include <string>
#include<algorithm>
#include<stack>
 
using namespace std;
 
int prec(char a)
{
	
switch(a)
{
case '+': return 1;
case '-': return 2;
case '*': return 3;
case '/': return 4;
case '^': return 5;
 
}
 
}
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	char w;
	
	string s;
	while(t--)
	{
			
	stack<char> v;
 
		cin>>s;
		
		for(int i=0;i<s.length();i++)
		{
			if(s[i]>='a' && s[i]<='z')
			cout<<s[i];
			else if(s[i]=='(')
			v.push('(');
			else if(s[i]==')')
			{
				while(v.top()!='(')
				{w=v.top();
				cout<<w;
				v.pop();}
				
				v.pop();
			}
			else 
			{
				while(prec(v.top())<prec(s[i]))
				{w=v.top();
				cout<<w;
				v.pop();}
				
				v.push(s[i]);
				
				
				
			}
			
			
			
		}
		
		cout<<"\n";
	}
	
	
	
	return 0;
}
 
Source code | Plain text | Copy to submit

About | Tutorial | Tools | Clusters | Credits | API | Widgets

Legal: Terms of Service | Privacy Policy | GDPR Info

 RSS 
© Spoj.com. All Rights Reserved. Spoj uses Sphere Engine™ © by Sphere Research Labs.
