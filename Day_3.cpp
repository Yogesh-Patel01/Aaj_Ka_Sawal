// :::: Question 1 ::::
// Pascal's Triangle

// problem statement:::
// https://leetcode.com/problems/pascals-triangle/?fbclid=IwAR3V2wChVU00EVRWGfPJ5yRCs-khrtpLg0cJzj8q_z_NyqixDqL4nR3XFZQ

// :::: Solution ::::

vector<vector<int>> generate(int row) {
        if(row == 1)
            return {{1}};
        vector<vector<int>> ans;
        ans.push_back({1});
        ans.push_back({1,1});
        if(row == 2)
            return ans;
        for(int i=2;i<row;i++){
            vector<int> res;
            res.push_back(1);

            for(int j=0;j<i-1;j++){
                int num = ans[i-1][j] + ans[i-1][j+1];
                res.push_back(num);
            }
            res.push_back({1});
            ans.push_back(res);
        }
        return ans;
    }
// ----------------------------------------------------------------------------------------------------------------------------------------------------------
// :::: Question 2 ::::
// Sort Colors

// problem statement:::
// https://leetcode.com/problems/sort-colors/description/?fbclid=IwAR3vbWyArLhqm_R5kP8gTL5nfp6in6VLaUkbtQNzO592Ik0NfT55nTi0qlQ

// :::: Solution ::::
void sortColors(vector<int>& nums) {
        map<int, int> temp;
        for(auto x: nums)
            temp[x]++;
        nums.clear();
        for(auto x: temp){
            while(x.second--){
                nums.push_back(x.first);
            }
        }
    }
