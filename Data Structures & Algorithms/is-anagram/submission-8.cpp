class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        int A[26] = {0};
        for(int i = 0; i < s.size(); i++){
            A[s[i] - 'a']++;
            A[t[i] - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(A[i] != 0)
                return false;
        }
        return true;
    }
};
