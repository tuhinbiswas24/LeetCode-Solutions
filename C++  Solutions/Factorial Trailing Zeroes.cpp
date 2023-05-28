class Solution {
public:
    int trailingZeroes(int n) {
        int count=0,i=1;
        while(n/pow(5,i)){
            count+=n/pow(5,i);
            i++;
        }
        return count;
    }
};
