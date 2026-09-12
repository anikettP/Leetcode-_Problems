char* removeKdigits(char* num,int k){
    int n=strlen(num),top=0;
    char* stack=malloc(n+1);
    for(int i=0;i<n;i++){
        while(top>0&&k>0&&stack[top-1]>num[i]){
            top--;
            k--;
        }
        stack[top++]=num[i];
    }
    while(k>0){
        top--;
        k--;
    }
    int start=0;
    while(start<top&&stack[start]=='0')
        start++;
    if(start==top){
        free(stack);
        return strdup("0");
    }
    int len=top-start;
    char* ans=malloc(len+1);
    memcpy(ans,stack+start,len);
    ans[len]='\0';
    free(stack);
    return ans;
}