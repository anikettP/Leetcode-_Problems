char* removeDigit(char* number, char digit) {
    int n=strlen(number);
    int pos=-1;
    for(int i=0;i<n;i++){
        if(number[i]==digit){
            pos=i;
            if(i+1<n&&number[i+1]>digit)
                break;
        }
    }
    for(int i=pos;i<n;i++){
        number[i]=number[i+1];
    }
    return number;
}