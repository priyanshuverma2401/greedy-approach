//indian coin change problem : greedy approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

signed main()
{
	int n,value;
	cout<<"enter total number of domination: ";
	cin>>n;
	
	vector<int> coins(n);
	for(int i=0;i<n;i++)
	{
		cin>>coins[i];
	}
	cout<<"enter value: ";
	cin>>value;
	
	sort(coins.begin(),coins.end(),greater<int>());
	int ans=0;
	for(int i=0;i<n;i++){
		ans +=value/coins[i];
		value -= (value/coins[i])*coins[i];
	}
	cout<<ans;
	return 0;
}