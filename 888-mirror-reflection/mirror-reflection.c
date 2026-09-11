int gcd(int a,int b){
    while(b){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int mirrorReflection(int p,int q){
    int g=gcd(p,q);
    p/=g;
    q/=g;
    if(p%2==0){
        return 2;
    }
    if(q%2==0){
        return 0;
    }
    return 1;
}