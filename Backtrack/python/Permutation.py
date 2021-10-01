class Solution:
    
    def helper(self, buffer, nums):
        if len(nums) == 0:
            return [buffer]
        else:
            output = []
            for i in nums:
                output += self.helper(buffer + [i], [num for num in nums if num != i])
            return output
    
    
    def permute(self, nums):
        return self.helper([], nums)


if __name__ == "__main__":
    s = Solution()
    res = s.permute([1, 2, 3])
    print(res)