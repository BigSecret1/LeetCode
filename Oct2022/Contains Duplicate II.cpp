class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int, int>> vp;
        for(int i = 0; i < nums.size(); ++i){
            vp.push_back({nums[i], i});
        }
        sort(vp.begin(), vp.end());
        for(int i = 1; i < vp.size(); ++i) {
            if(vp[i].first == vp[i - 1].first) {
                if(abs(vp[i].second - vp[i - 1].second) <= k) return true;
            }
        }
        return false;
    }
};

