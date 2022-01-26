// https://leetcode.com/problems/long-pressed-name/

class Solution {
public:
    bool isLongPressedName(string name, string typed)
    {
        int i = 0;
        int j = 0;
        char match;
        while (j < typed.length())
        {
            if (typed[j] == name[i])
            {
                match = name[i];
                i++;
            }
            else if (match != typed[j])
            {
                return false;
            }
            j++;
        }
        return (i >= name.length());
    }
};