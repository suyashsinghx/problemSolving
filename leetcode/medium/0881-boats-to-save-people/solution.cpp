class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int boat=0;

        int l =0 , r=people.size()-1;

        // while(l<r){

        //     // if(r >= people.size()){
        //     //     boat++;
        //     //     break;
        //     // }

        //     // if(people[l] < limit){

        //         if(people[l] + people[r] <= limit){
        //             boat++;
        //             l++;
        //             r--;
        //         }
        //         else{
        //             //agar sum bada hua toh
        //             boat++;
        //             l = r;
        //             r++;
        //         }
        //     // }
        //     else{
        //         //matlab p[l] >= limit
        //         boat++;
        //         l = r;
        //         r++;
        //     }
        // }
        
        // return boat;

        sort(people.begin(), people.end());

        while(l<=r){

            if(people[l] + people[r] <= limit){
                boat++;
                l++;
                r--;
            }
            else if(people[r] <= limit){
                boat++;
                r--;
            }

        }
        return boat;
    }
};