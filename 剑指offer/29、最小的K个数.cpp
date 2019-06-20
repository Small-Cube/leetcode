class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> res;
        if(input.empty()||k>input.size()) return res;
        sort(input.begin(),input.end());
        for(int i=0;i<k;++i){
            res.push_back(input[i]);
        }
        return res;
    }
};
 
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        vector<int> result;
        int length = input.size();
        if(length <= 0 || k <= 0 || k > length){
            return result;
        }
        
        for(int i = 0; i < input.size(); i++){
            if(result.size() < k){
                result.push_back(input[i]);
            }
            else{
                for(int j = k / 2; j >= 0; j--){
                    HeadAdjust(result, j, k);
                }
                for(int j = k - 1; j > 0; j--){
                    swap(result[0], result[j]);
                    HeadAdjust(result, 0, j);
                }
                if(result[k-1] > input[i]){
                    result[k-1] = input[i];
                }
            }
        }
        return result;
    }
private:
    void HeadAdjust(vector<int> &input, int parent, int length){
        int temp = input[parent];
        int child = 2 * parent + 1;
        while(child < length){
            if(child + 1 < length && input[child] < input[child+1]){
                child++;
            }
            if(temp >= input[child]){
                break;
            }
            input[parent] = input[child];
            
            parent = child;
            child = 2 * parent + 1;
        }
        input[parent] = temp;
    }
};