# [Reverse Integer](https://leetcode.com/problems/reverse-integer/)
Given a 32-bit signed integer, reverse digits of an integer.

Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Example:
Input: 123
Output: 321

# Solution
1. Check whether input integer is overflow or not
2. Ｇet digit pyramid by dividing power of 10
3. Subtract the pyramod to get reverse integer
4. Check output overflow
