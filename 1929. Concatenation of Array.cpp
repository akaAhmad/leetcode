
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {

        int sz=nums.size();
        for (int i=0;i<sz;i++){
            nums.push_back(nums[i]);
        }
        return nums;
        
    }
};


int main(){

    vector<int>v={1,2,3};
    Solution s;
    vector<int>ans=s.getConcatenation(v);

    for(auto it:ans)
    cout<<it<<" ";

}