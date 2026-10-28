class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;

        int lp=0; int rp= numbers.size()-1;

        while(lp<rp){

            int res = numbers[lp] + numbers[rp];

            if(res == target){
                ans.push_back(lp + 1);
                ans.push_back(rp + 1);
                break;
            }
            
            if(res < target) lp++;
            else {
                rp--;
            }
        }

        return ans;
    }
};