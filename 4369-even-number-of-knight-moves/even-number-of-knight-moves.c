bool canReach(int* start, int startSize, int* target, int targetSize) {
    int startColor=(start[0]+start[1])%2;
    int targetColor=(target[0]+target[1])%2;
    if (startColor==targetColor){
        return true;
    }

    return false;
}