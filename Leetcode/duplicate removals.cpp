class Solution {
public:
    string removeDuplicates(string s) {
        stack <char> st;
        int i =0;
        while(i<s.length())
        {
            if(st.empty() || s[i]!=st.top())
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                st.pop();
                i++;
            }
        }
        
        
        if(st.empty())
        {
            return "\0";
        }
        else{
            string result="";
            while(!st.empty())
            {
                result=st.top()+result;
                st.pop();
            }
        return result;
        }
    }
};