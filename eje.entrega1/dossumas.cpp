#include<iostream>
#include<vector>
#include<unordered_map>
class Solution {
public: 
    std::vector<int> suma(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> nummap;
        for (int i = 0; i < nums.size(); i++) {
            int act= nums[i]; 
            int com = target - nums[i];
            if (nummap.find(com) != nummap.end()) {
                return {nummap[com], i};
            }
            nummap[act] = i;
        }
        return {};
    }
};


int main(){
    std::vector<int> nums = {2,7,11,15};
    int target = 9;
    Solution s;
    std::vector<int> respuesta = s.suma(nums,target);
    std::cout << "nums: ["<< nums[0]<<","<<nums[1]<<","<<nums[2]<<","<<nums[3]<<"], objetivo = "<<target<<std::endl;
    std::cout<<"["<<respuesta[0]<<","<<respuesta[1]<<"]"<<std::endl;
    return 0;

}