// :::: Question 1 ::::
// Find the smallest and second smallest element in an array

// problem statement:::
// https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1?fbclid=IwAR3XK0z_cW37hq77RyznlmQ4Fmf0J-zSogkZgqPoX-Unn51OLR_gPRvZWuk

// :::: Solution ::::

vector<int> minAnd2ndMin(int a[], int n) {
    sort(a , a + n);
    vector<int>v;
    v.push_back(a[0]);
    for(int i = 1; i < n; i++)
    {
        if(a[i] != v[0])
        {
            v.push_back(a[i]);
            return v;
        }
    }
    return {-1};
}
