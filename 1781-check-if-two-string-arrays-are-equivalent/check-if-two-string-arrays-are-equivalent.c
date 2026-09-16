bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
     int i=0,j=0,a=0,b=0;
    while (i<word1Size && j<word2Size) {
        if (word1[i][a]!=word2[j][b]){
            return false;
        }
        if(word1[i][++a]=='\0'){
            i++;
            a=0;
        }
        if(word2[j][++b]=='\0'){
            j++;
            b=0;
        }
    }
    if (i==word1Size && j==word2Size){
        return true;
    }
    else{
        return false;
    }
}