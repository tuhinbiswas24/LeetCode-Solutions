class Solution {
public:
    string removeTrailingZeros(string num) {
        int pos=num.find_last_not_of('0');
        if(pos==string::npos)
            return num;
        else
            return num.erase(pos+1);
    }
};
