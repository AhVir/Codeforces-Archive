#include<iostream>
using namespace std;

int main(){
		string st;
		getline(cin, st);
		int freq[26] = {0};
		int len = st.length();
// 		cout << st << endl;
		
		for(int i=0; i<len; i++){
			char ch = st[i];
			if(ch >= 'a' && ch <= 'z'){
				freq[ch-'a']++;
			}
		}
		
		int cnt = 0;
		
		
		for(int i:freq){
		  //  printf("%d ", i);
			if(i != 0) cnt++;
		}
		
		cout << cnt << endl;

		return 0;
}