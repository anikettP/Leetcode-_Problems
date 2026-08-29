int count=0;

void backtrack(int freq[]){
    for(int i=0;i<26;i++){
        if(freq[i]==0) continue;
        count++;
        freq[i]--;
        backtrack(freq);
        freq[i]++;
    }
}

int numTilePossibilities(char* tiles){
    count=0;
    int freq[26]={0};
    for(int i=0;tiles[i]!='\0';i++)
        freq[tiles[i]-'A']++;
    backtrack(freq);
    return count;
}