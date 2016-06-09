#include <bits/stdc++.h>
using namespace std;
int n;
double f1(int n)
{
	int d[n],sum=0,temp=0;
	for(int i=0;i<n;i++)
	{
		cin>>d[i];
		sum+=d[i];
	}
	for(int i=0;i<n;i++)
		temp+=(d[i]-(double)(sum/n));
	return sqrt(temp/n);
}
double f2(int n)
{
	int sx2,m;cin>>sx2>>m;
	return sqrt((sx2-n*m*m)/n);
}
int main() 
{
	while(cin>>n)
	{
		int m;cin>>m;
		if(m%2)
			cout<<f1(n)<<endl;
		else
			cout<<f2(n)<<endl;			
	}	
	return 0; 
}
