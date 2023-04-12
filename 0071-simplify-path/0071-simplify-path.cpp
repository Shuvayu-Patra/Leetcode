class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        string ans = "";
        for(int i=0 ; i<path.size() ; i++){
            string temp = "";
            if(path[i] == '/') continue;
            while(path[i] != '/' && i<path.size()){
                temp.push_back(path[i++]);
            }
            if(temp == ".") continue;
            else if(temp == ".."){
                if(!s.empty()){
                    s.pop();
                }
            }
            else s.push(temp);
        }
        while(!s.empty()){
            ans = "/"+s.top()+ans;
            s.pop();
        }
        if(ans.size() == 0) return "/";
        return ans;
    }
};