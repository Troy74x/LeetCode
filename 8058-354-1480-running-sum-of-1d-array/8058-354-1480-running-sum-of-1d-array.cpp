class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {

        int n = nums.size();
        vector<int> pref(n, 0);

        pref[0] = nums[0];
        for (int i = 1; i < pref.size(); i++) {
            pref[i] = pref[i - 1] + nums[i];
        }

        return pref;
    }
};