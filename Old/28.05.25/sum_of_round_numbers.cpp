#include<bits/stdc++.h>
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = 0;
		vector<int> ans;

		int placeHolder = 1;
		while(n > 0){
			int val = n%10;
			n = n/10;
			// ans.push_back(val);
			// if(val != 0) cnt++;
			if(val != 0){
				cnt++;
				int temp = val * placeHolder;
				ans.push_back(temp);
			}
			placeHolder *= 10;
		}

		cout << cnt << endl;
		for(int x:ans) cout << x << " ";
		cout << endl;
	}

	return 0;
}
