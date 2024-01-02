class Solution {
public:
    void solve(string digits, int index, vector<string>& sol, string mapping[],string output){
        //base case
        if(index>digits.length()-1){
            sol.push_back(output);
            return;
        }
        int n=digits[index]-'0';
        string value=mapping[n];
        for(int i=0;i<value.length();i++){
            output.push_back(value[i]);
            solve(digits, index+1,sol,mapping,output);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
         vector<string> sol;
        if(digits.length()==0)return sol;
       
       int index=0;
       string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
       string output="";
       solve(digits,index,sol,mapping,output);
        return sol;
    }
};