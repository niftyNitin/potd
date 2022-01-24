// https://leetcode.com/problems/maximum-number-of-words-you-can-type

class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters)
    {
        int maps[26] = {0};
        int words = 0;
        for (auto i : brokenLetters)
        {
            maps[i - 'a']++;
        }
        bool flag = 0;
        int n = text.length();
        for (int i = 0; i < n; i++)
        {
            if (text[i] != ' ' and maps[text[i] - 'a'] != 0)
                flag = 1;

            if (flag == 0 and (text[i] == ' ' or i == n - 1))
                words++;

            if (flag == 1 and text[i] == ' ')
                flag = 0;
        }
        return words;
    }
};
