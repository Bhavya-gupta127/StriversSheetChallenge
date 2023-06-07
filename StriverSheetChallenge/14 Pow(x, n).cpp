class Solution {
public:
    double myPow(double x, long long n) {

        if(n==0)
            return 1;
        if(n<0)
        {
            x=1/x;
            n*=-1;
        }



        //brute force
        // double ans=1;
        // while(n>0)
        // {
        //     ans*=x;
        //     n--;
        // }
        // return ans;

        // ans=2 n=10

        // 2^10 == 4^5 == 2*4^4 == 2*16^2 == 2 * 256^1 == 4*256 = 1024
        double ans=x,extra=1;
        while(n>1)
        {
            if(n%2==1)
            {
                extra*=ans;
                n--;
            }
            else
            {
                ans*=ans;
                n=n/2;
            }
        }
        return ans*extra;

    }
};
