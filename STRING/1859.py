class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        temp = s.split()
        new = []
    #    reverse the each element in temp and sort as per the firrst character of each element
        for each in temp:
            new.append(each[::-1])
        new.sort()
        temp = []
    #    reverse the each element in new and remove the last character of each element

        for each in new:
            temp.append(each[::-1][:-1])
        return " ".join(temp)