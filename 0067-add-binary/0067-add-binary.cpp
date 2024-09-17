class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        char carr = '0';
        if(a.length() > b.length()) return addBinary(b , a);
            int diff = b.length() - a.length();
            string padd = "";
            for(int i=0; i<diff; i++) padd += '0';
            a = padd + a;
        
        cout << a << endl;
        cout << b << endl;
            
            for(int i=a.length()-1; i>=0; i--){
                if(a[i] == '0' && b[i] == '0'){
                    if(carr == '1'){
                        ans = '1' + ans;
                        carr = '0';
                    }
                    else{
                        ans = '0' + ans;
                        carr = '0';
                    }
                }
                else if(a[i] == '1' && b[i] == '1'){
                    if(carr == '1'){
                        ans = '1' + ans;
                        carr = '1';
                    }
                    else{
                        ans = '0' + ans;
                        carr = '1';
                    }
                }
                else if(a[i] != b[i]){
                    if(carr == '0'){
                        ans = '1' + ans;
                        carr = '0';
                    }
                    else{
                        ans = '0' + ans;
                        carr = '1';
                    }
                }
            }
        if(carr == '1') ans = '1' + ans;
        return ans;
    }
};