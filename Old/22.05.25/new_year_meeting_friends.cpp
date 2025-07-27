// https://codeforces.com/problemset/problem/723/A

#include<bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c; cin >> a >> b >> c;
	
	int min1 = abs(a-b) + abs(a-c);
	int min2 = abs(b-a) + abs(b-c);
	int min3 = abs(c-a) + abs(c-b);
	
	cout << min(min1, min(min2, min3)) << endl;
}