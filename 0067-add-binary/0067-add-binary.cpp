
class Solution {
public:
    string addBinary(string a, string b) {
        int j=b.length()-1;
        int i=a.length()-1;
        string sum="";
        int carry=0;

        while(j>=0 && i>=0){
            if(a[i]=='1' && b[j]=='1' && carry==0){
                sum+='0';
                carry=1;
            }
            else if(a[i]=='1' && b[j]=='1' && carry==1){
                sum+='1';
                carry=1;
            }
            else if(a[i]=='0' && b[j]=='1' && carry==0){
                sum+='1';
                carry=0;
            }
            else if(a[i]=='0' && b[j]=='1' && carry==1){
                sum+='0';
                carry=1;
            }
            else if(a[i]=='1' && b[j]=='0' && carry==0){
                sum+='1';
                carry=0;
            }
            else if(a[i]=='1' && b[j]=='0' && carry==1){
                sum+='0';
                carry=1;
            }
            else if(a[i]=='0' && b[j]=='0' && carry==0){
                sum+='0';
                carry=0;
            }
            else if(a[i]=='0' && b[j]=='0' && carry==1){
                sum+='1';
                carry=0;
            }
            i--;
            j--;
        }

        while(j<0 && i>=0){
            if(a[i]=='1' && carry==0){
                sum+='1';
                carry=0;
            }
            else if(a[i]=='1' && carry==1){
                sum+='0';
                carry=1;
            }
            else if(a[i]=='0' && carry==0){
                sum+='0';
                carry=0;
            }
            else if(a[i]=='0' && carry==1){
                sum+='1';
                carry=0;
            }
            i--;
        }

        while(i<0 && j>=0){
            if(b[j]=='1' && carry==0){
                sum+='1';
                carry=0;
            }
            else if(b[j]=='1' && carry==1){
                sum+='0';
                carry=1;
            }
            else if(b[j]=='0' && carry==0){
                sum+='0';
                carry=0;
            }
            else if(b[j]=='0' && carry==1){
                sum+='1';
                carry=0;
            }
            j--;
        }

        if(carry==1){
            sum+='1';
        }

        reverse(sum.begin(),sum.end());

        return sum;
    }
};
