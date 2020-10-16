#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the maxSubarray function below.
vector<int> maxSubarray(vector<int> nums) {
        vector<int> ans;
        int i,n = nums.size(); 
        int local_max= 0;
        int max_sum = INT_MIN;  //-INFINITY or integer cannot store below this limit
        for(int i=0; i<n; i++){
            local_max = max(nums[i], nums[i] + local_max);
            if( local_max > max_sum){
                max_sum = local_max;
            }
        }
        ans.push_back(max_sum);
        sort(nums.begin(), nums.end(),greater<int>());
        max_sum=0;
        i=0; 
        if(nums[i] < 0) ans.push_back(nums[i]);
        else{
        while(nums[i]>0){
            max_sum+=nums[i];
            i++;
        }
        ans.push_back(max_sum);
       }
    return ans;
}