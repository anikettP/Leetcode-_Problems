
int compare(const void *a, const void *b) {
    int *p1 = *(int **)a;
    int *p2 = *(int **)b;

    if (p1[0] < p2[0]) return -1;
    if (p1[0] > p2[0]) return 1;
    return 0;
}
int maxWidthOfVerticalArea(int** points, int pointsSize, int* pointsColSize) {
    qsort(points, pointsSize, sizeof(int *), compare);
    int maxWidth=0;
    for (int i=1;i<pointsSize;i++){
        int width=points[i][0]-points[i-1][0];
        if (width>maxWidth){
            maxWidth=width;
        }
    }
    return maxWidth;
}