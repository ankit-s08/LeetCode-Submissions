/*
approach : 
case 1; if last element is not whitespace
        start from n-1 , increment count until we get ' '
        
case 2: if last elment is a whitespace
        decrease the i until we get a proper character
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int i = n-1;
        
        int count = 0;              //to count number of last blankspace characters
        
        if(s[n-1] == ' ')
        {
            while(s[i] == ' ')
                i--;
        }
        
        while(i>=0 && s[i]!=' ')
        {
            count++;
            i--;
        }
        
        return count;
    }
};