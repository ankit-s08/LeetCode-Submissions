class Solution {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int sum=a+b;
        int i=0;
        
        if(n==0)
            return 0;
        else if(n==1)
            return 1;
        while(n>2)
        {
            
            //cout<<sum<<" ";
            a=b;
            b=sum;
            
            sum = a+b;
            n--;
        }
        return sum;
    }
};