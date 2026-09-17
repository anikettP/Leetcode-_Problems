int maxDistance(int* colors, int colorsSize) {
    int max=0;
    for (int i=0;i<colorsSize;i++) {
        for (int j=colorsSize-1;j>i;j--){
            if (colors[i]!=colors[j]){
                int distance=j-i;
                if (distance>max)
                    max=distance;
                break;
            }
        }
    }
    return max;
}