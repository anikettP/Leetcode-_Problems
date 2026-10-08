char* removeOuterParentheses(char* s){
    int n=strlen(s);
    char* ans=(char*)malloc(n+1);
    int idx=0;
    int open=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            if(open>0){
                ans[idx++]= '(';
            }
            open++;
        }
        else{
            open--;
            if(open>0){
                ans[idx++]=')';
            }
        }
    }
    ans[idx]='\0';
    return ans;
}