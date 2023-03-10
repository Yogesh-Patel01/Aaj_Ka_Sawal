// :::: Question 1 ::::
// Check if array is sorted

// problem statement:::
// https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?fbclid=IwAR2NL7kqIFBEGVlszT2lkiYbqJ4Liq9dCf_Av-RBrqwmiqsV0UQmV_KUpk4

// :::: Solution ::::

bool arraySortedOrNot(int arr[], int n) {
        for(int i=0;i<n-1;i++){
            if(arr[i] > arr[i+1])
                return false;
        }
        return true;
    }

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
// :::: Question 2 ::::
// Union of Two Sorted Arrays

// problem statement:::
// https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?fbclid=IwAR3RsLJtpMFVJ3qeqd2-q3M4Z7gOBIdq4tFGZPuIU4ZGuaCg4uyWvNi2B2M

// :::: Solution ::::

vector<int> findUnion(int arr1[], int arr2[], int n, int m){
        vector<int> s;
        set<int> ans;
        for(int i=0;i<n;i++){
            ans.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            ans.insert(arr2[i]);
        }
        for(auto x: ans)
            s.push_back(x);
        return s;
    }
