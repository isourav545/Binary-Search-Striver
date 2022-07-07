#include<bits/stdc++.h>
using namespace std;
#define int long long
#define setbits(n)__builtin_popcountll(n)



int lb(int arr[],int n, int x) {
	int ans=n;
	int low=0,high=n-1;
	while(low<=high){
		int mid = (low+high)/2;
		if(arr[mid]>=x){
			ans = mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
signed main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int x;
	cin>>x;
	cout<<lb(arr,n,x);
	
	
}
