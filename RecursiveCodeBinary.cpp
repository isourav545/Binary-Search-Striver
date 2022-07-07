#include<bits/stdc++.h>
using namespace std;
#define int long long
#define setbits(n)__builtin_popcountll(n)

int findEle(int low,int high,int arr[],int x){
	if(high<low) return -1;
	int mid = (low+high)/2;
	if(arr[mid]==x) return mid;
	if(arr[mid]<x) return findEle(mid+1,high,arr,x);
	return findEle(low,mid-1,arr,x);

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
	cout<<findEle(0,n-1,arr,x);
	
	
}
