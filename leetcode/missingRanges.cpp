#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<string> findMissingRanges(vector<int>& nums, int lower, int upper) {
        
        vector<string> result;
        int n = nums.size();
        string s;
        
	//checking for empty input vector cases
        if(n == 0){
            if(lower != upper)
                result.push_back(to_string(lower) + "->" + to_string(upper));
            else
                result.push_back(to_string(lower));
            return result;
        }
        
	//checking for first element of non-empty input vector lower->nums[0]
        if(nums[0] - lower > 0){
               s = (to_string(lower));
               if(nums[0] - lower > 1)
                   s += ("->" + to_string(nums[0]-1));
               result.push_back(s);
        }
        
	//checking for all ements of nums vector
        for(int i = 1; i < n; i++){
           if(nums[i] - nums[i-1] > 1){
               s = (to_string(nums[i-1] + 1));
               if(nums[i] - nums[i-1] > 2)
                   s += ("->" + to_string(nums[i]-1));
               result.push_back(s);
           }
        }
        
	//checking for last element of vector and upper
        if(upper - nums[n-1] > 0){
               s = (to_string(nums[n-1] + 1));
               if(upper - nums[n-1] > 1)
                   s += ("->" + to_string(upper));
            result.push_back(s);
        }
        
    return result;
    }



int main(){
	vector<int> input = {1, 2, 4, 5, 77};
	int lower = 0, upper = 99;
	vector<string> v = findMissingRanges(input, lower, upper);

	for(int i = 0; i < v.size(); i++){
	cout<<v[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
