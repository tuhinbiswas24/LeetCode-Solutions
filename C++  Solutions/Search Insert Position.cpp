class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,h=nums.size()-1,index;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]<target){
                index=mid+1;
                l=mid+1;
            }    
            else{
                index=mid;
                h=mid-1;
            }
        }
        return index;
    }
};
