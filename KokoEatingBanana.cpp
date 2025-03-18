// Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.
// Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.
// Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.
// Return the minimum integer k such that she can eat all the bananas within h hours.
// Example 1:
// Input: piles = [3,6,7,11], h = 8
// Output: 4

class Solution {

private:
    int maxi(vector<int> piles){
        int ans = INT_MIN;
        for(int i=0; i<piles.size(); i++){
            ans = max(ans,piles[i]);
        }
        return ans;
    }
    long long solve(vector<int>& piles,int mid){
        long long int total = 0;
        for(int i=0; i<piles.size(); i++){
            int y = ceil(piles[i]/(double)mid);
            total += y;
        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int n = piles.size();
        int low = 1;
        int high = maxi(piles);

        int ans = -1;

        while(low <= high){
            int mid = (low+high)/2;
            long long int hours = solve(piles,mid);
            if(hours <= h){
                ans = mid;
                high = mid-1;

            }
            else low = mid+1;
        }
        return low;
    }
};
