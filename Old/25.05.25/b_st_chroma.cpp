#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n, x; cin >> n >> x;
		
		vector<int> ans;
		
		if(n < x){
			cout << 0 << endl;
			//return 0;
		}
		else if(n == x){
			for(int i=0; i<n; i++) cout << i << " ";
			cout << endl;
			//return 0;
		}
		else{
			for(int i=0; i<n; i++){
				if(i == x) continue;
				
				ans.push_back(i);
			}
			
			ans.push_back(x);
			
			for(int x:ans) cout << x << " ";
			cout << endl;
		}
	}

    return 0;
}
