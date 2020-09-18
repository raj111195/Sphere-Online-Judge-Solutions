#include <iostream>
#include<stdio.h>
using namespace std;
 
int max(int a,int b)
{
return a>=b?a:b;	
}
 
int main() {
	// your code goes here
	
	
	int t;
	
	cin>>t;
	
	while(t--)
	{
		int v[101][101]={0};
	
		int a,b,c,ma=-1;
		
		scanf("%d%d",&a,&b);
		
		//cout<<a<<b;
		
		for(int i=0;i<a;i++)
		for(int j=0;j<b;j++)
		{scanf("%d",&c);
		
		v[i][j]=c;
		
		}
		
		for(int i=a-2;i>=0;i--)
		for(int j=0;j<b;j++)
		{
			if(j==0)
			v[i][j]+=max(v[i+1][j],v[i+1][j+1]);
			else if(j==(b-1))
			v[i][j]+=max(v[i+1][j],v[i+1][j-1]);
			else
			{
			v[i][j]+=max(max(v[i+1][j],v[i+1][j+1]),v[i+1][j-1]);
			
			}
			
			
		}/**/
 
 
		for(int i=0;i<b;i++)
		if(v[0][i]>ma)
		ma=v[0][i];
		
		cout<<ma<<"\n";
		
		}
		return 0;
}
 
