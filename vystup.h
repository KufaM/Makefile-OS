float inputValue(const char side) {
    int countOfChar;
    float saveSide;
    do {
        printf("Type a length of side '%c' of a triangle: ", side);
        scanf("%f", &saveSide);
        countOfChar = 0;
        while (getchar() != '\n') {
            countOfChar++;
        }
        if (countOfChar != 0) {
            printf("You haven't typed a real number.\n");
        } else if (saveSide <= 0) {
            printf("The number has to be positive.\n");
        }
    } while (countOfChar != 0 || saveSide <= 0);
    return saveSide;
}