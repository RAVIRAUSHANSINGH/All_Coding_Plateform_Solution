class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // vector<int> ans;
        // int a=0;
        // int count=0;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]!=i+1 and count==0){
        //         ans.push_back(i+1);
        //         count++;
        //     }
        //     if(nums[i]==nums[i+1]){
        //         ans.push_back(nums[i]);
        //         a=nums[i]+1;
        //     }
        // }
        // if(a>0){
        //     ans.push_back(a);
        // }
        // return ans;
        vector<int> ans(2, -1); 
        for(int i=0; i<nums.size(); ++i){
            while(nums[i] != i+1){
                if(nums[i] == nums[nums[i]-1]){
                    ans[0] = nums[i];
                    ans[1] = i+1; 
                    break; 
                }else      
                    swap(nums[i], nums[nums[i]-1]); 
            }
        }
        return ans;
        
    }
};
