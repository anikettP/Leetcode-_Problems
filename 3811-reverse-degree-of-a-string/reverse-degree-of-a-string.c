int reverseDegree(char* s) {
    int answer=0;
    for (int i=0;s[i]!='\0';i++) {
        int reversePosition='z'- s[i]+1;
        answer+=reversePosition*(i+1);
    }
    return answer;
}