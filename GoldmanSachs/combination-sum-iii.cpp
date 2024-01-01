class Solution
{
public:
    void solve(vector<vector<int>> &output, vector<int> &sol, int i, int k, int n)
    {
        // base case;
        if (sol.size() == k && n == 0)
        {
            output.push_back(sol);
            return;
        }
        if (sol.size() == k && n != 0)
        {
            return;
        }
        for (int x = i; x <= 9; x++)
        {
            sol.push_back(x);
            solve(output, sol, x + 1, k, n - x);
            // backtracking;
            sol.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vector<vector<int>> output;
        vector<int> sol;
        int i = 1;
        solve(output, sol, i, k, n);
        return output;
    }
};