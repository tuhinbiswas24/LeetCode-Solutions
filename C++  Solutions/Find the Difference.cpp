class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        for(int i=0;i<t.length();i++){
            if(i==t.length()-1)
                return t[i];
            if(t[i]!=s[i]) 
                return t[i];   
        }
        return 0; 
    }
};
