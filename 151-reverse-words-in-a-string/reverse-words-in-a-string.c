char* reverseWords(char* s) {
    int n=strlen(s);
    char* result=malloc(n+1);
    int i=n-1,k=0;
    while (i>=0){
        while (i>=0 && s[i]==' '){
            i--;
        }
        if(i<0){
            break;
        }
        int end=i;
        while (i>=0 && s[i]!=' '){
            i--;
        }
        if(k>0){
            result[k++] = ' ';
        }
        for(int j=i+1;j<=end;j++){
            result[k++] = s[j];
        }
    }
    result[k] = '\0';
    return result;
}