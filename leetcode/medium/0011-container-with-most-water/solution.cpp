class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int lp = 0;
        int rp = height.size()-1;

        int ht = 0, dist = 0, maxAr = 0;

        while(lp < rp){

            dist = rp - lp;
            
            ht = min(height[lp], height[rp]);

            maxAr = max(maxAr, dist*ht);

            height[lp]>height[rp]?rp--:lp++;

        }

        return maxAr;

    }
};