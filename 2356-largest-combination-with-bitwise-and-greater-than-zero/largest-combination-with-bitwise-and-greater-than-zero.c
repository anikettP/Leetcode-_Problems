int largestCombination(int* candidates, int candidatesSize) {
    int max=0;
    for(int bit=0;bit<24;bit++){
        int count=0;
        for (int i=0;i<candidatesSize;i++){
            if(candidates[i] & (1<<bit)){
                count++;
            }
        }
        if (count>max){
            max=count;
        }
    }
    return max;
}