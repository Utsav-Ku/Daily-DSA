string largestMerge(string word1, string word2) {
        int n = word1.size(),m=word2.size();
        int i=0,j=0;
        string ans = "";
        while(i<n && j<m){
            if(word1[i]>word2[j]){
                ans += word1[i];
                i++;
            }
            else if(word1[i]<word2[j]){
                ans += word2[j];
                j++;
            }
            else{
                string t1 = word1.substr(i);
                string t2 = word2.substr(j);
                if (t1 > t2) {
                    ans += word1[i];
                    i++;
                } else {
                    ans += word2[j];
                    j++;
                }
            }
        }
        while(i<n){
            ans += word1[i];
            i++;
        }
        while(j<m){
            ans += word2[j];
            j++;
        }

        return ans;
}