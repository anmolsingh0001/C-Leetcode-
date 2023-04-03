class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> order;
        vector<int> result;
        int majority=nums.size()/3;
        for(int i=0; i<nums.size(); i++){
            order[nums[i]]++;
        }
        for(auto j:order){
            if(j.second>majority) result.push_back(j.first);
        }
        return result;
    }
};