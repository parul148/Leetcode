class Solution {
public:
    bool check(vector<int>& nums) {
   int count =0;
   int n = nums.size();
 //yha i = 0 isliye ni liya h kyuki 0-1 kerenge to -1 aa jayega jo possible nii h
   for(int i =1; i<n ;i++){
       if(nums[i - 1]> nums[i]){
           count++;
       }
   }
   if(nums[n-1] > nums[0])
   count++;
   return count <=1;
        }
    
};