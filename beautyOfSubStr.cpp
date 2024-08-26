 int beautySubStr(vector<int> &freq) {
        int mf = INT_MIN;
        int lf = INT_MAX;
        
        for(int i = 0; i < 26; i++) {
            if(freq[i] > 0) {
                if(freq[i] > mf) {
                    mf = freq[i];
                }
                if(freq[i] < lf) {
                    lf = freq[i];
                }
            }
        }
        
        return (mf - lf);
    }
    int beautySum(string s) {
        int res = 0;
        for(int i=0;i<s.size();i++){
            vector<int>freq(26,0);
            for(int j=i;j<s.size();j++){
               freq[s[j]-'a']++;
               res += beautySubStr(freq);
            }
        }
        return res;
    }