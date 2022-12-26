class Solution(object):
    def reverseWords(self, s):
        """
        :type s: str
        :rtype: str
        """
        new =s.split()
        temp = []
        for each in new:
            temp.append(each[::-1])
        return " ".join(temp)