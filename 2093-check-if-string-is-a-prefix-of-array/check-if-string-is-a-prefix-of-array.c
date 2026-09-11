bool isPrefixString(char* s, char** words, int wordsSize) {
    int i=0;
    int j=0;
    while(wordsSize>j){
        for(int k=0;words[j][k]!='\0';k++){
            if(s[i]=='\0'||s[i]!=words[j][k]){
                return false;
            }
            i++;
        }
        if(s[i]=='\0'){
            return true;
        }
        j++;
    }
    return false;
}