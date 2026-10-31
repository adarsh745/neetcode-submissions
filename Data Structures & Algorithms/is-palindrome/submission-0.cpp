class Solution {
public:
    bool isPalindrome(string s) {

        string str = "";

        for(char c : s)
        {
            if(isalnum(c))
            {
                str  += tolower(c);
            }
        }

        // cout<<str;

        return str==string(str.rbegin(),str.rend());

        
    }
};
