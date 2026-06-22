#include<iostream>
#include<vector>
using namespace std;
int main()
{
	
	//É¸Ñ¡ÖÊÊý
	int n;
	cin>> n;
	vector<bool> is_prime(n+1,true);
	is_prime[0]=is_prime[1]=false;
	for (int p=2;p*p<=n;++p)
	{
		if (is_prime[p])
		{
			for (int m=p*p;m<=n;m+=p)
			{
				is_prime[m]=false;
			}
		}
	}
	vector<int> primes;
	for (int i=0;i<=n;++i)
	{
		if (is_prime[i])
		{
			primes.push_back(i);
		}
	}
//	for (int i:primes)
//	{
//		cout<<i<<endl;
//	}
	int count=0;
	for (int i=0;i<primes.size();++i)
	{
		cout<<primes[i]<<endl;
		count++;
	}
	cout<<count<<endl;
	
		
	return 0;
}
