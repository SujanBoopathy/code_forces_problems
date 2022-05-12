class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        int m=INT_MAX;
        set<string> v;
        vector<string> vect;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i]==list2[j]){
                    if(i+j<m){
                        m=i+j;
                        v.clear();
                        v.insert(list1[i]);
                    }
                    else if(i+j==m){
                        v.insert(list1[i]);
                    }
                }
                
            }
        }
        for(auto& a:v){
            vect.push_back(a);
        }
        return vect;
    }
};