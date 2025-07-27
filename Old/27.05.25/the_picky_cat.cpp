#include<bits/stdc++.h>
using namespace std;

int ans(){
    int n; cin >> n;
		vector<int> nums;
		for(int i=0; i<n; i++){
			int temp; cin >> temp;
			nums.push_back(temp);
		}
		
		int needed = (n%2 == 0) ? (n/2 - 1):(n/2);
// 		cout << "needed: " << needed << endl;
		
		int greaterCnt = 0, lesserCnt = 0;
		
		for(int i=1; i<n; i++){
		    if(nums[i] > nums[0]) greaterCnt++;
		    else if(nums[i] < nums[0]) lesserCnt++;
		}
		
// 		cout << greaterCnt << endl;
// 		cout << lesserCnt << endl;
		
		// I need to make lesser cnt == needed
		if(lesserCnt == needed){
		    cout << "YES" << endl;
		    return 0;
		  //continue;
		}
		if(lesserCnt < needed){
		    for(int i=1; i<n; i++){
		        if(nums[i] > nums[0] && (nums[i]*-1) < nums[0]){
		            lesserCnt++;
		        }
		        if(lesserCnt == needed){
		            cout << "YES" << endl;
		            return 0;
		          //  continue;
		        }
		    }
		}
		else if(lesserCnt > needed){
		    for(int i=1; i<n; i++){
		        if(nums[i] < nums[0] && (nums[i]*-1) > nums[0]){
		            lesserCnt--;
		        }
		        if(lesserCnt == needed){
		            cout << "YES" << endl;
		            return 0;
		          //  continue;
		        }
		    }
		}
		
		
		// nums[0] * -1
		
		nums[0] *= -1;
// 		cout << nums[0] << endl;
		lesserCnt = 0, greaterCnt = 0;
		for(int i=1; i<n; i++){
		    if(nums[i] < nums[0]) lesserCnt++;
		    else greaterCnt++;
		}
		
// 		cout << "less: " << lesserCnt << endl;
// 		cout << "greater: " << greaterCnt << endl;
		
// 		for(int x:nums) cout << x << " ";
// 		cout << endl;
		
		if(lesserCnt == needed){
		    cout << "YES" << endl;
		    return 0;
		  //  continue;
		}
		if(lesserCnt < needed){
		    for(int i=1; i<n; i++){
		        if(nums[i] > nums[0] && (nums[i]*-1) < nums[0]){
		            // cout << "Trigger" << endl;
		            lesserCnt++;
		        }
		        if(lesserCnt == needed){
		            cout << "YES" << endl;
		            return 0;
		          //  continue;
		        }
		    }
		}
		else if(lesserCnt > needed){
		    for(int i=1; i<n; i++){
		        if(nums[i] < nums[0] && (nums[i]*-1) > nums[0]){
		            lesserCnt--;
		        }
		        if(lesserCnt == needed){
		            cout << "YES" << endl;
		            return 0;
		          //  continue;
		        }
		    }
		}
		
		
		cout << "NO" << endl;
		return 0;
}

int main(){
	int t; cin >> t;
	while(t--){
		ans();
	}
	
	return 0;
}