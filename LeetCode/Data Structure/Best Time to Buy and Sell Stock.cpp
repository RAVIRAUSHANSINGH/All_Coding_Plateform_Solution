// USING EXTRA SPACE

//   SOLUTION 1

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int arr[n];
        int ans=0;
        int maxi=prices[n-1];
        cout<<maxi<<endl;
        for(int i=n-1;i>=0;i--){
            arr[i]=max(maxi,prices[i]);
            maxi=arr[i];
            
        }
        for(int i=0;i<n;i++){
            int diff=arr[i]-prices[i];
            ans=max(ans,diff);
        }
        return ans;
        
    }
};