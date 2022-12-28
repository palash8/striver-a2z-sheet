class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        set <string> pos(positive_feedback.begin(), positive_feedback.end());
        set <string> neg(negative_feedback.begin(), negative_feedback.end());
        
        int n = student_id.size();
        vector <array <int, 2>> store;
        
        for(int i=0; i<n; i++){
            int pts = 0;
            string s = report[i], temp = s.substr(0, 1);
            for(int i=1; i<s.size(); i++){
                if(s[i] == ' '){
                    if(pos.find(temp) != pos.end()){
                        pts += 3;
                    }
                    else if(neg.find(temp) != neg.end()){
                        pts--;
                    }
                    temp.clear();
                }
                else{
                    temp.push_back(s[i]);
                }
            }
            
            if(pos.find(temp) != pos.end()){
                pts += 3;
            }
            else if(neg.find(temp) != neg.end()){
                pts--;
            }
            
            store.push_back({pts, -student_id[i]});
        }
        
        vector <int> ans;
        sort(store.rbegin(), store.rend());
        for(int i=0; i<min(k, (int)store.size()); i++){
            ans.push_back(-store[i][1]);
        }
        
        return ans;
    }
};