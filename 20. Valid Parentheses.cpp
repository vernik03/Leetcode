class Solution {
public:
    bool isValid(string s) {
        stack<string> holder;
        vector<string> pairs{"{}", "[]", "()"};
        for(char c:s){
            string st;
            st.push_back(c);
            if (!holder.empty()){
                if(find(pairs.begin(), pairs.end(), holder.top()+st)==pairs.end()){
                    holder.push(st);
                }
                else{
                    holder.pop();
                }
            }
            else{
                holder.push(st);
            }
        }
        return holder.empty();
    }
};