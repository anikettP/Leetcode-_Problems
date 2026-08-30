char* reversePrefix(char* s, int k) {
    int left=0,right=k-1;
    while(left<right) {
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
    return s;
}