int binaryGap(int n) {
    int last=-1;
    int pos=0;
    int maxGap=0;
    while(n>0){
        if(n&1){
            if(last!=-1){
                int gap=pos-last;
                if(gap>maxGap)
                    maxGap=gap;
            }
            last=pos;
        }
        n>>=1;
        pos++;
    }
    return maxGap;
}