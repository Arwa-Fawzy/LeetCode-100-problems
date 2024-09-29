#include <vector>
using namespace std;

class Solution {
public:
    bool inner(int l, int r, int target, vector<vector<int>>& matrix, int row) {
        if (l > r) {
            return false;
        }
        int mid = l + (r - l) / 2;
        if (matrix[row][mid] == target) {
            return true;
        } else if (matrix[row][mid] < target) {
            return inner(mid + 1, r, target, matrix, row);
        } else {
            return inner(l, mid - 1, target, matrix, row);
        }
    }

    bool outer(int l, int r, int target, vector<vector<int>>& matrix) {
        if (l > r) {
            return false;
        }
        int mid = l + (r - l) / 2;
        int cols = matrix[0].size();  

        if (matrix[mid][0] <= target && matrix[mid][cols - 1] >= target) {
            return inner(0, cols - 1, target, matrix, mid);
        } else if (matrix[mid][0] > target) {
            return outer(l, mid - 1, target, matrix);
        } else {
            return outer(mid + 1, r, target, matrix);
        }
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) {
            return false;
        }
        int rows = matrix.size();  
        int cols = matrix[0].size();  
        if (target < matrix[0][0] || target > matrix[rows - 1][cols - 1]) {
            return false;
        }

        return outer(0, rows - 1, target, matrix);
    }
};
