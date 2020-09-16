import java.util.*;
import java.lang.*;
 
class Main
{
		
	public static int gcd(int a,int b)
	{
		if(b==0)return a;
		else return gcd(b,a%b);
		
	}
	
	public static void main (String[] args) throws java.lang.Exception
	{
		
		
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		in.nextLine();
		
			ArrayList<Integer> tree = new ArrayList<Integer>();
	
		
		while(t-- > 0)
		{	int d = in.nextInt();
			tree.add(d);
			
			
			
		}
		
		Collections.sort(tree);
		
		int diff=tree.get(1)-tree.get(0);
		
		for(int i=2;i<tree.size();i++)
		{
		
		int pd=tree.get(i)-tree.get(i-1);
		diff=gcd(pd,diff);
		}
		
		
		int ans=0;
		
		for(int i=1;i<tree.size();i++)
		{
		
		int pd=tree.get(i)-tree.get(i-1);
		
		ans= ans + (pd/diff)-1;
		
		
		}
		
		System.out.println(ans);
		
		
	
		
		
		
		
		
		
	}
} 
