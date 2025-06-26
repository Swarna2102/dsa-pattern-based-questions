class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.size()-1;
        while(left<right){
            while(left<right && !isalnum(s[left]))left++; //isalnum is used to check for alpha numeric ,if space or any other thing is found it will move forward ignoring it 
            while(left<right && !isalnum(s[right]))right--;
            if(tolower(s[left])!=tolower(s[right])){  //tolower use isliye kiya hai kyuki capital letter ko bhi hum small krde
                return false;
            }
            left++;
            right--;
        }
        return true;
        
    }
};
