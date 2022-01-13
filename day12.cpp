class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i <= j){
            char a = tolower(s[i]);
            char b = tolower(s[j]);
            
            if (isalnum(a) and isalnum(b))
            {
                if (a != b)
                    return 0;
                i++;
                j--;
            }
            else if (!isalnum(a) and isalnum(b))
                i++;
            else if (isalnum(a) and !isalnum(b))
                j--;
            else
            {
                i++;
                j--;
            }
                
        }
        return 1;
    }
};
