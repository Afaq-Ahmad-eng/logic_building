# Sum of n natural numbers for this we use a Guass Summation Formula
 imagine we add numbers from 1 to 100
 like
 1   +  2  + 3   + 4   + ..... + 97  + 98  + 99  + 100
 100 + 99  + 98  + 97  + ..... + 4   +  3  +  2  +   1
-------------------------------------------------------
101  + 101 + 101 + 101 + ..... + 101 + 101 + 101 + 101

so, we can say that 

100 * 101 = 10,100 / 2 = 5050

so, we can say that 

n(n + 1)/2

using this formula the time complexity is O(1) and space compexity is O(1).
the same problem solve using loop and recursion when we solve this problem using loop then the time complexity will be O(n) and space complexity will be O(1).
But when we using recursion then the time complexity will be O(n) and the space complexity will be O(n).