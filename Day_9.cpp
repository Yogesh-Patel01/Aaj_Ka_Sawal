// :::: Question 1 ::::
// Power of 2

// problem statement:::
// https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1?fbclid=IwAR0TwNzfVNI-uFeiavKLFbwiPJgbLnnecWuIvOdEuDKT9kPimjAxu2kkhes

// :::: Solution ::::

bool isPowerofTwo(long long n){
        
        if(n == 0)
            return false;
        return !(n & (n - 1));
        
    }
    
// ----------------------------------------------------------------------------------------------------------------------------------------------------------------

// :::: Question 2 ::::
// Sum of primes

// problem statement:::
// https://practice.geeksforgeeks.org/.../sum-of-primes0042/1

// :::: Solution ::::

int primeSum(int n){
        int ans = 0;
        while(n){
            int temp = n % 10;
            n /= 10;
            if(temp == 2 || temp == 3 || temp == 5 || temp == 7)
                ans += temp;
        }
        return ans;
    }
