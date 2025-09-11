


class Solution {
public:
    int lengthOfLastWord(string s) {
        int lenght = 0 ;
        bool count = false ; 
        for(int i = s.size() - 1  ; i>= 0 ; i--)
        {
            cout << s[i];
            if (s[i] != ' ' )
            {
                lenght++; 
                count = true ; 
            }else if (count)
                break ; 
 
        }

        return lenght ; 
    }
};
