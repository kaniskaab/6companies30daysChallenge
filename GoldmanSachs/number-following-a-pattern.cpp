class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        int num=1;
        vector<int> stack;
        vector<int> sol;
        for(int i=0;i<S.size();i++){
            stack.push_back(num++);
            if(S[i]=='I'){
                for(int j=stack.size()-1;j>=0;j--){
                    sol.push_back(stack[j]);
                    vector<int>:: iterator it;
                    it=stack.begin();
                    it+=j;
                    stack.erase(it);
                }
            }
        }
        stack.push_back(num);
        for(int j=stack.size()-1;j>=0;j--){
            sol.push_back(stack[j]);
        }
        for(int i=0;i<S.size()+1;i++){
            cout<<sol[i];
        }
        // cout<<sol[0];
        return " ";
        
    }
};
