class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0,first=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=first){
                k++;
                swap(nums[i],nums[k]);
                first=nums[k];
            }
        }
        return k+1;
    }
};
