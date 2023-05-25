class Solution {
public:
    int minLength(string s) {
        stack<char> stack;
        for (char c : s) {
            if (!stack.empty() && ((c == 'B' && stack.top() == 'A') || (c == 'D' && stack.top() == 'C'))) {
                stack.pop();
            } 
            else {
                stack.push(c);
            }
        }
        return stack.size();
    }
};
