#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
 
using namespace std;
 
int main()
{
    int t,a,b,c,d,e,f,g;
    
    while(cin>>t>>a>>b>>c>>d>>e>>f>>g)
    {
        
 
if(t!=-1 && a!=-1 && b!=-1 && c!=-1 && d!=-1 && e!=-1 && f!=-1 && g!=-1)
{
    
int m=ceil((float)t/(float)d);
int n=ceil((float)a/(float)e);
int o=ceil((float)b/(float)f);
int p=ceil((float)c/(float)g);
 
int z=max(m,max(n,max(o,p)));
 
cout<<(z*d-t)<<" "<<(z*e-a)<<" "<<(z*f-b)<<" "<<(z*g-c)<<"\n";
  
}
else
    break;
    }
return 0;
}
 
