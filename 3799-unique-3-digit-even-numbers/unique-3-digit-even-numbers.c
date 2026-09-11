int totalNumbers(int* digits, int digitsSize) {
    int count=0;
    bool seen[1000];
    memset(seen,false,sizeof(seen));
    int freq[10]={0};
    for(int i=0;i<digitsSize;i++){
        freq[digits[i]]++;
    }
    for(int num=100;num<=999;num++){
        if(num%2!=0)continue;
        int tmp=num;
        int need[10]={0};
        for(int i=0;i<3;i++){
            need[tmp%10]++;
            tmp/=10;
        }
        bool ok=true;
        for(int d=0;d<10;d++){
            if(need[d]>freq[d]){
                ok=false;
                break;
            }
        }
        if(ok&&!seen[num]){
            seen[num]=true;
            count++;
        }
    }
    return count;
}