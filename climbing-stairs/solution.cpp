/*
* When using small data points like 1, 2, 3, 4 .... steps,
* it becomes clear that a pattern is establish.
*
* steps = posibilities
* 1 = 1
* 2 = 2
* 3 = 3
* 4 = 5
* 5 = 8
* 6 = 13
* 
* The pattern clearly appears to be the Fibonacci sequence.
*/

class Solution {
public:
    int climbStairs(int n) {
        int fibA = 0;
        int fibB = 1;       
        bool fibonacci = true;
       
        for (int i = 1; i < n; i++)
        {
            if (fibonacci)
                fibA = fibA + fibB;
            else 
                fibB = fibB + fibA;
            
            fibonacci = fibonacci ? false : true;
        }
        
        return fibA + fibB;    
    }
};