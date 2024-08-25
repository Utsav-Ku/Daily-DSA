void removezeros(string &temp){
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='0'){
                temp.erase(i,1);
                i--;
            }
            else{
                break;
            }
        }
    }
    bool isValid(int x,int y){
        if(x==y) return true;
        string x1 = to_string(x);
        string x2 = to_string(y);

        string temp = x1;

        for(int i=0;i<x1.size();i++){
            for(int j=i+1;j<x1.size();j++){
                swap(temp[i],temp[j]);
                removezeros(temp);
                if(temp==x2){
                    return true;
                }
                else{
                    temp = x1;
                }
            }
        }

        temp = x2;

        for(int i=0;i<x2.size();i++){
            for(int j=i+1;j<x2.size();j++){
                swap(temp[i],temp[j]);
                removezeros(temp);
                if(temp==x1){
                    return true;
                }
                else{
                    temp = x2;
                }
            }
        }
        return false;
    }
    int countPairs(vector<int>& nums) {
        int cnt = 0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(isValid(nums[i],nums[j])){
                    cnt++;
                }
            }
        }
        return cnt;
    }