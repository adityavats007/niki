import java.util.*;

class TestClass {
    static int count=0;
     static int res;
       public static int generate(int k, char str[],int n)
    {
        if (n == k)
       //System.out.println(count);
        	if (n == k)
	{
		// terminate binary string
		//str[n] = '\0' ;
		 String st = new String(str);
		 //System.out.println(st);
		 count++;
	res=count%1000000007;
		
		return 0 ;
	}
	
        if(str[n-1]=='0')
        {
            str[n]='1';
            generate( k,  str,n+1);
            
        }
        if(str[n-1]=='1')
        {
            str[n]='1';
            generate( k,  str,n+1);
            
            str[n]='0';
            generate( k,  str,n+1);
           
            
        }
        
        return 0;
      
        
    }
    public static void main(String args[] ) throws Exception {
       
        Scanner s=new Scanner(System.in);
        int k;
        k=s.nextInt();
        char str[]=new char[k];
        if(k==0)
        ;
       
        else
        {
            
            str[0]='0';
            generate(k,str,1);
            str[0]='1';
            generate(k,str,1);
        }
        System.out.println(res);
      
        
    }
}