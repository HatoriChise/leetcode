#include <vector>

using namespace std;

// 贪心算法，陷入局部最优
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        if (triangle.empty())
        {
            return 0;
        }

        if (triangle.size() == 1)
        {
            return triangle[0][0];
        }
        
        

    }
};


