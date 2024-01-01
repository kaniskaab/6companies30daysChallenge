class Solution {
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
//         vector<long long int> values;
//         for(int i=0; i<nums.size();i++) values.push_back(stoll(nums[i]));//changing all string values to integer
//         vector<int> sol;
//         for(int i=0;i<queries.size();i++){
//             vector<long long int> temp;
//             int divisor=queries[i][1];
//             long long int div=1;
//             while(divisor>0){
//                 div*=10;
//                 divisor--;
//             }
//             //converting each value according to the trim and storing in temp
//             for(int j=0;j<values.size();j++)temp.push_back(values[j]%div);
//             for(int j=0;j<values.size();j++) cout<<temp[j]<<"\n";
//             cout<<"\n";
//             int index;
//             //will find the nth small element
//             for(int j=0;j<queries[i][0];j++){
//                 int minElement=min_element(temp.begin(), temp.end())-temp.begin();
//                 temp[minElement]= div*100;
//                 index=minElement;
//             }
//             // cout<<index;
//             sol.push_back(index);
//         }
// return sol;
vector<int> res;
int n = nums.size();
for(auto &q: queries){
    vector<pair<string,int>> pq;
    for(int i=0;i<n;i++){
        pq.push_back({(nums[i].substr(nums[i].size()-q[1])),i});
    }
    sort(pq.begin(), pq.end());
    res.push_back(pq[q[0]-1].second);
}
return res;
    }
};