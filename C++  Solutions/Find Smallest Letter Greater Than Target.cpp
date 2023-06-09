class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters[0]-'a'>target-'a')
            return letters[0];
        int res=INT_MAX;
        for(int i=0;i<letters.size();i++){
            if(letters[i]-'a'>target-'a')
                res=min(res,i);
        }    
        if(res<letters.size())
            return letters[res];
        else
            return letters[0];    
    }
};
