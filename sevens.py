#!/usr/bin/python2
def sevens(num):
        a = []
        for i in range(num):
                a.append(7)
        return a 
        
# http://stackoverflow.com/a/18627023/4237781
def concatNum(nums):
        result = 0
        mult = 1
        for i in nums:
                num = nums[i-1]
                while num != 0:
                        result += mult * (num % 10)
                        num /= 10
                        mult *= 10
        
        return result

inp = input("Number of sevens: ") 
print concatNum(sevens(inp))
