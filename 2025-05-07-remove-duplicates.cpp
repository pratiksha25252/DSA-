class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
for (int i = 0; i < nums.size(); i++) {
    bool found = false;
    for (int j = 0; j < k; j++) {
        if (nums[i] == nums[j]) {
            found = true;
            break;
        }
    }
    if (!found) {
        nums[k] = nums[i];

        k++;
    }
}
  return k;
    }
};
