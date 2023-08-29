class Solution {
public:
    bool isPalindrome(int x) {
        

       
  // Special cases:
  // As discussed above, when x < 0, x cannot be a palindrome.
  if (x < 0) {
    return false;
  }
  // Also, when x % 10 == 0, x cannot be a palindrome.
  if (x % 10 == 0 && x != 0) {
    return false;
  }

  int revertedNumber = 0;
  while (x > revertedNumber) {
    revertedNumber = revertedNumber * 10 + x % 10;
    x /= 10;
  }

  // When the length is an odd number, the middle digit will be ignored.
  return x == revertedNumber || x == revertedNumber / 10;
}
        
    
};