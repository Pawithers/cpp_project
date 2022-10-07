    #include "functions.h"

    std::vector<int> Solution::twoSum(std::vector<int>& nums, int target) 
    {
        size_t size = nums.size();
        int index1 = -1;
        int index2 = -1;
        for (size_t i = 0; i < size; i++)
        {
            int first = nums[i];
            index1++;
            index2 = index1;
            auto iter = nums.begin();
            for(auto ii = iter + i + 1; ii != nums.end(); ii++)
            {
                index2++;
                if (*ii + nums[i] == target)
                {
                    int one(i);
                    int two(*ii);
                    std::vector<int> v{index1, index2};
                    return std::vector<int>{index1, index2};
                }
            }
        }
    }