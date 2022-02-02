class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
         unordered_map<int,int>mpp;
     for(auto i:nums1){
         mpp[i]++;
     }
     for(auto i:nums2){
         if(mpp[i]>0){
             v.push_back(i);
             mpp[i]--;
         }
     }
    }
};