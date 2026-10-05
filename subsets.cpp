#include <iostream>
#include <vector>
using namespace std; 

    void solve(vector<int>& arr, int i, vector<int>& ans,
               vector<vector<int>>& result) {

        // Base condition
        if (i == arr.size()) {
            result.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        solve(arr, i + 1, ans, result);
        ans.pop_back();
        solve(arr, i + 1, ans, result);
    }

    vector<vector<int>> subsets(vector<int>& arr) {

        vector<vector<int>> result;
        vector<int> ans;

        solve(arr, 0, ans, result);

        return result;
    }

int main() {

    vector<int> arr = {1, 2, 3};

    vector<vector<int>> result = subsets(arr);

    for (auto subset : result) {
        cout << "[ ";

        for (int x : subset) {
            cout << x << " ";
        }

        cout << "]" << endl;
    }

    return 0;
}