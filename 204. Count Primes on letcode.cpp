class Solution {
public:

    int countPrimes(int n){
        int count=0;
        vector<bool> number(n+1,true);
        number[0]=number[1]=false;

        for(int i=2; i<n; i++){
            if(number[i]){
                count++;
                for(int j=2*i; j<n; j=j+i){
                number[j]=0;
                 }

            }

        }
        return count;
    }
};