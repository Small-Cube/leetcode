class Solution {
public:
    void reOrderArray(vector<int> &array) {
            for(int i=0;i<array.size();++i){
                for(int j=array.size()-1;j>i;--j){
                    if(isnumber(array[j])==false&&isnumber(array[j-1])==true)
                        swap(array[j],array[j-1]);
                }
            }
        }
private:
    bool isnumber(int num){
        if((num&0x01)==0) return true;
        else return false;
        }
    
};
 
class Solution {
public:
    void reOrderArray(vector<int> &array) {
          vector<int> tempnum;
          vector<int>::iterator iter;
        for(iter=array.begin();iter!=array.end();){
            if(isnumber(*iter)==true){
                tempnum.push_back(*iter);
                iter=array.erase(iter);
            } 
            else ++iter;
        }
        for(int i=0;i<tempnum.size();++i){
            array.push_back(tempnum[i]);
        }
    }
private:
    bool isnumber(int num){
        if((num&0x01)==0) return true;
        else return false;
        }
    
};