
#include<bits/stdc++.h>
using namespace std ;
	static int co;
   int res;
void generateAllStringsUtil(int K, char str[], int n)
{


	if (n == K)
	{
		
		str[n] = '\0' ;
		co++;
	//cout << str << " ";
	res=co%1000000007;
		return;
	}
	if (str[n-1] == '0')
	{
		str[n] = '1';
		generateAllStringsUtil (K , str , n+1);
	}
	if (str[n-1] == '1')
	{
		str[n] = '0';
		generateAllStringsUtil(K, str, n+1);
		str[n] = '1';
		generateAllStringsUtil(K, str, n+1) ;
	}
	
}
void generateAllStrings(int K )
{

	if (K <= 0)
		return ;
	char str[K];
	str[0] = '0' ;
	generateAllStringsUtil ( K , str , 1 ) ;

	str[0] = '1' ;
	generateAllStringsUtil ( K , str , 1 );
}


int main()
{
	int K,t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		co=0;
	cin>>K;
	generateAllStrings (K) ;
	cout << res<< " ";
}
	return 0;
}
