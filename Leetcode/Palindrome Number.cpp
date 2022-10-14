class Solution {
public:
    bool isPalindrome(int x) {
      
	    // If the number is less than 0 then it won't be a Palindrome  
        if(x < 0)
            return false;
        
		// Store the original number 'x' in another variable, as we will use it later on
        long int num = x, rev = 0, rem = 0;
        
		// Reverse the given number 'x'
        while(x != 0)
        {
            rem = x%10;
            rev = rev*10 + rem;
            x /= 10;
        }
        
		// Compare the original number 'x' stored in variable 'num' with the reversed number 'rev' 
        if(num == rev)
            return true;   // If both are equal then the number is Palindrome
        else
            return false;
    }
};
