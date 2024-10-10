int f(string s){
    int n=s.size();
    stack<char>st;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            st.push('(');
        }
        else
        {
            if(st.empty()||st.top()==')')
            {
                st.push(')');
            }
            else
            {
                st.pop();
            }
        }
    }
    return st.size();

}