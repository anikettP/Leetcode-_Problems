char* kthDistinct(char** arr, int arrSize, int k) {
    int count[1000]={0};
    for(int i=0;i<arrSize;i++){
        for(int j=0;j<arrSize;j++){
            if(strcmp(arr[i],arr[j])==0)
                count[i]++;
        }
    }
    for(int i=0;i<arrSize;i++){
        if(count[i]==1){
            k--;
            if(k==0){
                return arr[i];
            }
        }
    }
    return "";
}