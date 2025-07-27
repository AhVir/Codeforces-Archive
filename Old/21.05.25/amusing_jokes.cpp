#include<iostream>
using namespace std;

int main(){
	int freqInput[26] = {0};
	string guest, host, pile;
	getline(cin, guest);
	getline(cin, host);
	getline(cin, pile);
	
	for(char c:guest){
		freqInput[c-'A']++;
	}
	
	for(char c:host){
		freqInput[c-'A']++;
	}
	
	
	int freqPile[26] = {0};
	for(char c:pile){
		freqPile[c-'A']++;
	}
	
	
	for(int i=0; i<26; i++){
		if(freqInput[i] != freqPile[i]){
			cout << "NO" << endl;
			return 0;
		}
	}
	
	cout << "YES" << endl;
	
	return 0;
}