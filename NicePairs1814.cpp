class Solution {
public:
    
    int rev(int num){
        int x =  0;
        while(num){
            x  = x*10 + num%10;
            num /= 10;
        }
        return x;
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int , int> mp;
        for(int i: nums){
            mp[i - rev(i)] += 1;
        }
        
        unordered_map<int, int>::iterator it = mp.begin();
        long tot=  0;
        for(;it != mp.end(); ++it){
            // cout<<it -> first <<it -> second<<endl;
            tot += (long )(it->second)*(long)(it -> second - 1)/2;
            tot %= 1000000007;
        }
        return tot;
    }
};
