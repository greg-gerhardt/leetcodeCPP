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