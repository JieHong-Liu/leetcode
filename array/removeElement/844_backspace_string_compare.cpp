class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int slowIndexS = 0;
        int slowIndexT = 0;
        for(int fastIndex = 0 ;fastIndex <s.size(); fastIndex++)
        {
            if(s[fastIndex] != '#')
            {
                s[slowIndexS] = s[fastIndex];
                slowIndexS++;
            }
            else if (slowIndexS == 0 )
            {
                slowIndexS = 0;
            }
            else 
            {
                slowIndexS--;
            }
        }
        for(int fastIndex = 0 ;fastIndex <t.size(); fastIndex++)
        {
            if(t[fastIndex] != '#')
            {
                t[slowIndexT] = t[fastIndex];
                slowIndexT++;
            }           
            else if (slowIndexT == 0 )
            {
                slowIndexT = 0;
            }
            else
            {
                slowIndexT--;
            }
        }
        if(slowIndexS != slowIndexT)
        {
            return false;
        }
        else
        {
            for(int i = 0 ; i < slowIndexS; i++)
            {
                if(s[i] != t[i])
                {
                    return false;
                }
            }
            cout <<slowIndexS<<"\t"<< s << endl;
            cout <<slowIndexT<<"\t"<< t << endl;
            return true;
        }

    }
};