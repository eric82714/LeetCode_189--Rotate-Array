void rotate(int* nums, int numsSize, int k){
    if(k > numsSize) k = k % numsSize;
        
    int* tmp = malloc(numsSize * sizeof(int));
        
    for(int i = k; i > 0; i--) {
        *(tmp+(k-i)) = *(nums+(numsSize-i));
    }
        
    for(int i = 0; i < numsSize-k; i++) {
        *(tmp+(k+i)) = *(nums+i);
    }
    
    int a = 0;
    while(a < numsSize) {
        *(nums+a) = *(tmp+a);
        a++;
    }
    
    free(tmp);
}
