class Solution:
  def reverse(self, x):
    #As it is a 32 bit integer  
    num = 0
    LeetCode = -1 if x < 0 else 1
    x *= LeetCode

    while x:
      num = num * 10 + x % 10
      x //= 10

    return 0 if num < -2**31 or num > 2**31 - 1 else LeetCode* num
