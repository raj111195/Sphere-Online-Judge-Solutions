/* package whatever; // don't place package name! */
 
import java.util.*;
import java.lang.*;
import java.io.*;
import java.math.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in = new Scanner(System.in);
		
		int i=1;
		
		while(i<11)
		{
		BigInteger a = new BigInteger(in.nextLine());
		BigInteger b = new BigInteger(in.nextLine());
		System.out.println((a.add(b)).divide(new BigInteger("2")));
		
		System.out.println((a.subtract(b)).divide(new BigInteger("2")));
		
		i++;
		}
	}
} 
