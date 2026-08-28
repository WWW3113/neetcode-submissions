class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        A = {}
        for i in range(len(s)):
            A[s[i]] = A.get(s[i], 0) + 1
            A[t[i]] = A.get(t[i], 0) - 1
        for i in range(len(s)):
            if A[s[i]] != 0:
                return False
        return True
        
