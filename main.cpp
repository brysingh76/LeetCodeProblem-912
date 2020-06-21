//
//  main.cpp
//  SortAnArray
//
//  Created by Bryant Sahota on 6/20/20.
//  Copyright © 2020 Bryant Sahota. All rights reserved.
//

#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> sortArray(std::vector<int>& nums) {
        std::vector<int>sortVect;
        sortVect = nums;
        sort(sortVect.begin(), sortVect.end());
        return sortVect;
    }
};

int main()
{
    Solution s;
    std::vector<int> unorderVect = {3, 1, 4, 19, 6, 2, 21, 4};
    std::vector<int> orderVect = {};
    orderVect = s.sortArray(unorderVect);
    for(int i = 0; i < orderVect.size(); i++)
    {
        std::cout << orderVect[i] << std::endl;
    }
    return 0;
}


