class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        int l=0;
        int r = skill.size()-1;
        long long ans = 0;

        sort(skill.begin(), skill.end());

        while(l<r){
            int s1 = skill[l] + skill[r];
            int s2 = skill[l+1] + skill[r-1];
            if(s1 == s2){
                ans += (skill[l]*skill[r]);
                l++; r--;
            }else{
                ans = -1;
                break;
            }
        }
        return ans;
        
    }
};