#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	cin.ignore();
	
	int cnt = 0;
	for(int i=0; i<=n; i++){
		string st;
		getline(cin, st);
// 		cin >> st;
		
		
		if(st == "Tetrahedron") cnt += 4;
		else if(st == "Cube") cnt += 6;
		else if(st == "Octahedron") cnt += 8;
		else if(st == "Dodecahedron") cnt += 12;
		else if(st == "Icosahedron") cnt += 20;
	}
	
	cout << cnt << endl;
	
	return 0;
}