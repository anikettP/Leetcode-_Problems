int minLengthAfterRemovals(char* s) {
    int balance=0;
    for (int i=0;s[i]!='\0';i++) {
        if (s[i]=='a'){
            balance++;
        } else {
            balance--;
        }
    }
    return abs(balance);
}