#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        stack<string> stack;
        int size = s.size();
        string str;
        str.clear();
        int i = 0;
        while (i < size)
        {
            if (s[i] != ' ')
            {
                str += s[i];
            }
            else
            {
                if (!str.empty())
                {
                    stack.push(str);
                }
                str.clear();
            }
            i++;
        }
        if(!str.empty())stack.push(str);
        int length = stack.size();
        return stack.top().size();
    }
};