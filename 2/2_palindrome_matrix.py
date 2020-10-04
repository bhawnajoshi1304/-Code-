"""
Problem Description
We have to find minimum number of operations required to make all rows and columns of a matrix palindrome.
The operation supported are decrease any number by 1 or increase a number by 1.

Solution Approach
To make all rows and columns palindrome values equidistant from corners must be equal.
Minimum operations can be obtained if all such positions must be equated to a value at one of the position.
Time Complexity:O(n*m)
Space Complexity:O(n*m)
"""
import math
for a0 in range(int(input())):
    n,m=[int(x) for x in input().split()]
    l=[]
    ans=0
    for i in range(n):
        l.append([int(x) for x in input().split()])
    for i in range((n+1)//2):
        for j in range((m+1)//2):
            x=[l[i][j],l[i][m-j-1],l[n-1-i][m-j-1],l[n-i-1][j]]
            tp1=math.floor(sum(x)/4)
            an=[0]*5
            if l[i][j]!=tp1:
                an[-1]+=abs(l[i][j]-tp1)
                l[i][j]=tp1
            if l[i][m-j-1]!=tp1:
                an[-1]+=abs(l[i][m-j-1]-tp1)
                l[i][m-j-1]=tp1
            if l[n-i-1][j]!=tp1:
                an[-1]+=abs(l[n-i-1][j]-tp1)
                l[n-i-1][j]=tp1
            if l[n-i-1][m-j-1]!=tp1:
                an[-1]+=abs(l[n-i-1][m-j-1]-tp1)
                l[n-1-i][m-1-j]=tp1
            l[i][j],l[i][m-j-1],l[n-1-i][m-j-1],l[n-i-1][j]=x
            tp1=x[0]
            if l[i][j]!=tp1:
                an[0]+=abs(l[i][j]-tp1)
                l[i][j]=tp1
            if l[i][m-j-1]!=tp1:
                an[0]+=abs(l[i][m-j-1]-tp1)
                l[i][m-j-1]=tp1
            if l[n-i-1][j]!=tp1:
                an[0]+=abs(l[n-i-1][j]-tp1)
                l[n-i-1][j]=tp1
            if l[n-i-1][m-j-1]!=tp1:
                an[0]+=abs(l[n-i-1][m-j-1]-tp1)
                l[n-1-i][m-1-j]=tp1
            l[i][j],l[i][m-j-1],l[n-1-i][m-j-1],l[n-i-1][j]=x
            tp1=x[1]
            if l[i][j]!=tp1:
                an[1]+=abs(l[i][j]-tp1)
                l[i][j]=tp1
            if l[i][m-j-1]!=tp1:
                an[1]+=abs(l[i][m-j-1]-tp1)
                l[i][m-j-1]=tp1
            if l[n-i-1][j]!=tp1:
                an[1]+=abs(l[n-i-1][j]-tp1)
                l[n-i-1][j]=tp1
            if l[n-i-1][m-j-1]!=tp1:
                an[1]+=abs(l[n-i-1][m-j-1]-tp1)
                l[n-1-i][m-1-j]=tp1
            l[i][j],l[i][m-j-1],l[n-1-i][m-j-1],l[n-i-1][j]=x
            tp1=x[2]
            if l[i][j]!=tp1:
                an[2]+=abs(l[i][j]-tp1)
                l[i][j]=tp1
            if l[i][m-j-1]!=tp1:
                an[2]+=abs(l[i][m-j-1]-tp1)
                l[i][m-j-1]=tp1
            if l[n-i-1][j]!=tp1:
                an[2]+=abs(l[n-i-1][j]-tp1)
                l[n-i-1][j]=tp1
            if l[n-i-1][m-j-1]!=tp1:
                an[2]+=abs(l[n-i-1][m-j-1]-tp1)
                l[n-1-i][m-1-j]=tp1
            l[i][j],l[i][m-j-1],l[n-1-i][m-j-1],l[n-i-1][j]=x
            tp1=x[3]
            if l[i][j]!=tp1:
                an[3]+=abs(l[i][j]-tp1)
                l[i][j]=tp1
            if l[i][m-j-1]!=tp1:
                an[3]+=abs(l[i][m-j-1]-tp1)
                l[i][m-j-1]=tp1
            if l[n-i-1][j]!=tp1:
                an[3]+=abs(l[n-i-1][j]-tp1)
                l[n-i-1][j]=tp1
            if l[n-i-1][m-j-1]!=tp1:
                an[3]+=abs(l[n-i-1][m-j-1]-tp1)
                l[n-1-i][m-1-j]=tp1
            l[i][j],l[i][m-j-1],l[n-1-i][m-j-1],l[n-i-1][j]=x
            ans+=min(an)
    print(ans)