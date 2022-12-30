#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
 
void foo(int a, int b, int c) {
	
	if(a == b){
		if(c == 0){
			cout << "First\n"; return ;
		}
		cout << "Tie\n"; return ;
	}
 
	if(a>b){
		if((a) > c + b){
			cout << "Second\n"; return ;
		} cout << "Tie\n"; return ;
	}
	if(b>a) {
		if ((b) > c+a-1){
			cout << "First\n"; return;
		}cout << "Tie\n"; return;
	}
}
 
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int t; cin>>t;
 
	while(t--){
		int n;
		cin >> n;
		int arr[n+1];
		for(int i=1;i<=n;i++) cin >> arr[i];
 
		set<int> a, b, c;
		for(int i=1;i<=n;i++) {
			if(arr[i] != i && arr[i]==(n-i+1)) a.insert(i);
			if(arr[i] != (n-i+1) && arr[i] == i) b.insert(i);
			if(arr[i] != i && arr[i] != (n-i+1)) c.insert(i);
		}
		
		// set<int> c;
		// for(int i: a){
		// 	cout << i << "\n";
		// }
		// for(int i: c){
		// 	a.erase(i); b.erase(i);
		// }
 
		foo(a.size(), b.size(), c.size());
 
	}
 
	return 0;
}