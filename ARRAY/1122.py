class Solution(object):
    def relativeSortArray(self, arr1, arr2):
        """
        :type arr1: List[int]
        :type arr2: List[int]
        :rtype: List[int]
        """
        ans = []
        temp = []
        for i in range(len(arr2)):
            for j in range(len(arr1)):
                if arr1[j]==arr2[i]:
                    ans.append(arr1[j])
        for i in range(len(arr1)):
            if arr1[i] not in arr2:
                temp.append(arr1[i])    
        temp.sort()
        ans.extend(temp)
        return ans