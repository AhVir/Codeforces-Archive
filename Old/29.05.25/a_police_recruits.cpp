#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int ans = 0;
    int police = 0;
    
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        if(temp == -1){
            // cout << "trigger" << endl;
            if(police == 0) ans++;
            else police--;
        }
        else police += temp;
    }
    
    cout << ans << endl;
    
    return 0;
}