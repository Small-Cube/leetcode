class Solution {
public:
	bool Find(int target, vector<vector<int>> array) {
		if ((array.empty()) || (array[0].empty())) return false;
		int rows = array.size(), cols = array[0].size();
		int row = rows - 1, col = 0;
		while (row >= 0 && col<cols) {
			if (target == array[row][col]) return true;
			else if (target>array[row][col]) {
				++col;
			}
			else {
				--row;
			}
		}
		return false;
	}
};