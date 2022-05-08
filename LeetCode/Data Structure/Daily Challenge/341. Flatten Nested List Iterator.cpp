class NestedIterator {
public:
    vector<int> ans;
    int id, n;
    NestedIterator(vector<NestedInteger> &nestedList) {
        get(0, nestedList);
        id = 0;
        n = ans.size();
    }
    
    void get(int i, vector<NestedInteger> nestedList){
        if(i == nestedList.size()){
            return;
        }
        
        if(nestedList[i].isInteger()){
            ans.push_back(nestedList[i].getInteger());
            get(i+1, nestedList);
        }
        else{
            get(0, nestedList[i].getList());
            get(i+1, nestedList);
        }
    }
    
    int next() {
        return ans[id++];
    }
    
    bool hasNext() {
        return id < n;
    }
};
