class Solution {
public:
    int clumsy(int n) {
         if(n == 1) return 1;
        if(n == 2) return 2;
        if(n == 3) return 6;
        queue<char> st;
        st.push('*');
        st.push('/');
        st.push('+');
         st.push('-');
         int sum=0;
         int temp=n;
         while(n>1){
            n--;
            if(st.front()=='*'){
                temp = temp * n;
            }
            else if(st.front()=='/'){
                temp = temp / n;
            }
             else if(st.front()=='+'){
                   sum += temp;
                  temp = n;
             }
             else if(st.front()=='-'){
                sum += temp;
                temp = -n;
             }
            st.push(st.front());
            st.pop();
         }
         return sum+temp;
    }
};