class Solution {
public:
    int reverse(int x) {
        int digit,sum=0;
        while(x!=0){
            digit = x % 10;
            if((sum < INT_MIN/10) || (sum > INT_MAX/10)){
            return 0;
        }
            sum= sum*10 + digit;
            x /= 10;
        }
        return(sum);
    }
};
