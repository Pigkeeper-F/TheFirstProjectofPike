Class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++){
            int x = nums[i];
            if ( map.count(target-x)){
                return vector<int> {map.at(target-x), i};
            }
            map.insert({x, i});
        }
        throw "no solution";
    }
};