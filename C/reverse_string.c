void reverseString(char* s, int sSize){
    int mid = sSize / 2;
    int end = sSize - 1;
        
    for(int i = 0; i < mid; i++) {
        char tmp;
        tmp = s[i];
        s[i] = s[end];
        s[end--] = tmp;
    }
}
