/***********************using seive of eratosthenes***********************/
/*
approach: 
1. let all the numbers are prime numbers
2. traverse all numbers and when we get a prime number
    mark all the multiples of then non-prime
*/ 

class Solution {
public:
    int countPrimes(int n) {
        
        //storing 1 for prime number and 0 for non-prime for respective number
        vector<bool> v(n+1 , true);
        
        //0 and 1 are non-prime numbers
        v[0] = v[1] = false;
        
        int count = 0;
        for(int i = 2; i<n; i++)
        {
            //when number is prime
            if(v[i])
            {
                count++;
                
                //mark all the multiples non-prime                
                for(int j = i*2; j<=n; j = j+i)
                {
                    v[j] = false;
                }
            }
        }
        
        return count;
    }
};

/*
time complexity :
n(1/2 + 1/3 + 1/5 + 1/7 + .....)

O(log(logn))

space complexity : O(n)

*/