class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count =0;
        while(n!=0)
        { 
            if(n&1) // using of AND operator if it is equal to 1 then
            { count++;
    }
 n=n>>1; //shifting right
    }
     return count;
    }    
    
};