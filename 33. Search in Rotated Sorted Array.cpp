#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
     int search(vector<int>& nums, int target) {
        //sort(nums.begin(),nums.end());
        
        int left=0,right=nums.size()-1;
        
        while(left<=right){
            int mid =(left+right)/2;
            if (nums[mid]==target){
                return mid;

            }else if (nums[left]<=nums[mid]){
                if (nums[left]<=target && target <nums[mid])
                right=mid-1;
                else left=mid+1;
            }
            else {
                if (nums[mid]<target && target <=nums[right])
                left=mid+1;
                else right=mid-1;
            }

        }
        return -1;
    }
};

int  main(){
    vector<int>a={4,5,6,7,0,1,2};

    Solution s;
    cout<<s.search(a,0);
    
}