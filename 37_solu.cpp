class Solution {
    public:
    vector<int>productxceptSelf(vector<int>&nums){
        int n = nums.size();
        vector<int> ans(n, 1);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i !=j){
                    ans[i] *= nums[j]
                }
            }

            
        }
        return ans;
            
    
    }
}