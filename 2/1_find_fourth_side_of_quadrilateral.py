""""
Problem Description
3 sides of quadrilateral are given and we have to find any possible value for the fourth side.

Solution Approach
the 4 sides of a quadrilateral are such that no side must be equal to sum of the other three else straight line will be formed.
So the fourth side can be of any value smaller than sum of the other three sides. 
So make use of a+b+c-1 as the answer.
Time Complexity:O(1)
Space Complexity:O(1)
"""
for a0 in range(int(input())):
    l=[int(x) for x in input().split()]
    print(sum(l)-1)