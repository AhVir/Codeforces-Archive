#include<bits/stdc++.h>
using namespace std;

#define int long long

int howManyTimes(int num, int c){
    int temp = 0;
    while(num <= c){
        temp++;
        num = num * 2;
    }

    return temp;
}

int32_t main(){
    int test; cin >> test;
    // int test = 1;
    while(test--){
        int n, c; cin >> n >> c;
        vector<int> nums;
        int cnt = 0;
        for(int i=0; i<n; i++){
            int t; cin >> t;
            if(t > c){
                cnt++;
            }
            else{
                nums.push_back(t);
            }
        }
        int elements = nums.size();
        for(int i=0; i<elements; i++){
            nums[i] = howManyTimes(nums[i], c);
        }
        
        
        sort(nums.begin(), nums.end());
        // for(int x:nums) cout << x << " ";
        // cout << endl;
        // cout << "cnt already: " << cnt << endl;
        // cout << "elements: " << elements << endl;
        int value = 1;
        for(int i=1; i<=elements; i++){
            if(nums[i-1] < value){
                // cout << nums[i-1] << "-> " << i << endl;
                cnt++;
            }
            else value++;
        }
        
        
        cout << cnt << endl;
    }


    return 0;
}