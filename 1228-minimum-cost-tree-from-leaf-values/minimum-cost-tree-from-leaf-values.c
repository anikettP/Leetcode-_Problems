int mctFromLeafValues(int* arr, int arrSize) {
    int stack[42];
    int top=-1;
    int cost=0;
    stack[++top]=1000000;
    for (int i=0;i<arrSize;i++){
        while (stack[top]<=arr[i]) {
            int mid=stack[top--];
            int left=stack[top];
            int right=arr[i];
            cost+=mid*(left<right?left:right);
        }
        stack[++top]=arr[i];
    }
    while(top>1){
        int mid=stack[top--];
        cost+=mid*stack[top];
    }
    return cost;
}