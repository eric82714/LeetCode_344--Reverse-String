class Solution {
public:
    void reverseString(vector<char>& s) {
        int mid = s.size() / 2;
        int end = s.size() - 1;
        
        for(int i = 0; i < mid; i++) {
            char tmp;
            tmp = s[i];
            s[i] = s[end];
            s[end--] = tmp;
        }
    }
};
