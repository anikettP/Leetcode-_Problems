int compare(const void*a,const void*b){
    return *(int*)a-*(int*)b;
}

bool isNStraightHand(int* hand,int handSize,int groupSize){
    if(handSize%groupSize!=0)
        return false;

    qsort(hand,handSize,sizeof(int),compare);

    for(int i=0;i<handSize;i++){
        if(hand[i]==-1)
            continue;

        int first=hand[i];
        hand[i]=-1;

        for(int j=1;j<groupSize;j++){
            int found=0;

            for(int k=i+1;k<handSize;k++){
                if(hand[k]==first+j){
                    hand[k]=-1;
                    found=1;
                    break;
                }
            }

            if(!found)
                return false;
        }
    }
    return true;
}