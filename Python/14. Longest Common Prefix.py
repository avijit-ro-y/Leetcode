class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        empty = ""
        for i in range(0, len(strs[0])):
            for j in range(1, len(strs)):
                if i >= len(strs[j]) or strs[0][i] != strs[j][i]:
                    return empty
            empty = empty + strs[0][i]
        return empty
        longestCommonPrefix(self, strs)
    