class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min,max;
        min=prices[0];
        max=0;
        for(int i=0;i<n;i++){
            if(min>prices[i]){
                min=prices[i];
            }
            int profit=prices[i]-min;
            if(profit>max){
                max=profit;
            }
            
        }
        return max;
    }
};