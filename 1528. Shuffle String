class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> order;
        for(int i=0; i<s.length(); i++){
            order[indices[i]]=s[i];
        }
        string test;
        for(auto j:order){
            test+=j.second;
        }
        return test;
    }
};