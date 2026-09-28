int rearrangeCharacters(char* s, char* target) {
    int freq[26]={0},need[26]={0};
    for (int i=0;s[i];i++){
        freq[s[i]-'a']++;
    }
    for(int i=0;target[i];i++){
        need[target[i]-'a']++;
    }
    int ans=100;
    for (int i=0;i<26;i++){
        if (need[i]>0){
            int count=freq[i]/need[i];
            if (count<ans)
                ans=count;
        }
    }
    return ans;
}