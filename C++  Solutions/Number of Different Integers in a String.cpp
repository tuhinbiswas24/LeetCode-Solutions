class Solution {
public:
    int numDifferentIntegers(string word) {
       unordered_set<int> s;
        for(int i=0;i<word.length();i++){
            long long int ans=0;
            bool exists=false;
            while(word[i]>=48 && word[i]<=57){
                ans=ans*10+(word[i]-48);
                ans%=10000000;
                i++;
                exists=true;
            }
            if(exists)
                s.insert(ans);      
        }
        return s.size();
    }
};
