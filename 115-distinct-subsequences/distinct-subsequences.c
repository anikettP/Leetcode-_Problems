int numDistinct(char* s, char* t) {
    int n=strlen(s),m=strlen(t);
    long long dp[m+1];
    memset(dp,0,sizeof(dp));
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=m;j>=1;j--){
            if(s[i-1]==t[j-1]){
                if(dp[j-1]>2147483647-dp[j])
                    dp[j]=2147483647;
                else
                    dp[j]+=dp[j-1];
            }
        }
    }
    return (int)dp[m];
}