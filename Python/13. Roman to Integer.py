class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        dict={
        "I":1,
        "V":5,
        "X":10,
        "L":50,
        "C":100,
        "D":500,
        "M":1000
        }
        Sum=0
        for i in range (len(s)):
            if i+1 !=len(s) and dict[s[i]]<dict[s[i+1]]:
                Sum-=dict[s[i]]
            else:    
                Sum+=dict[s[i]]
        return Sum
        romanToInt(self, s)