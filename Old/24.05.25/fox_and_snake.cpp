#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	
	//vector<int> vals = {2, 6, 10, 14, 18, 22, 26, 30, 34, 38, 42, 46, 50};
	
	bool flag = true;
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(i%2 == 0) printf("#");
			else{
				if((flag && j == m-1)||(!flag && j == 0)) printf("#");
				//if(!flag && j == 0) printf("#");
				else printf(".");
			}
		}
		cout << endl;
		if(i%2 == 1) flag = !flag;
	}
	
	return 0;
}