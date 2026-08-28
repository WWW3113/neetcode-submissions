class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())
            return false;
        int A[26] = {0};
        for(int i = 0; i < s.length(); i++){
            A[s[i] - 'a']++;
            A[t[i] - 'a']--;
        }
        for(int i = 0; i <= 25; i++){
            if(A[i] != 0)
                return false;
        }
        return true;
    }
};
