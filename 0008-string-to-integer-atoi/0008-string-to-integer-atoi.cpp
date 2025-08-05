class Solution {
public:
    int myAtoi(string s) {
        int res=0;
        int sign=1;
        int i=0;
        int n =s.size();
        while (i < n && s[i] == ' ') i++;

        if (i < n && (s[i] == '-' || s[i] == '+')) {
            if(s[i]=='-')sign=-1;
            else sign=1;
            i++;
        }
         while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
             if (res > 214748364 || (res == 214748364 && digit > 7)) {
                if (sign == 1) return INT_MAX;     
                else return INT_MIN;             
            }
            res = res * 10 + digit;
            i++;
        }
        return res * sign;
        
    }
};