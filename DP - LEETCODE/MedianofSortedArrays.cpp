double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int new_size = nums1Size + nums2Size; 
    int newArray[new_size];
    int i= 0, j=0, k = 0; 
    double res;
    while (i < nums1Size || j < nums2Size){
        if (i >= nums1Size){
            newArray[k] = nums2[j];
            j ++; 
            k ++; 
        }
        else if (j >= nums2Size){
            newArray[k] = nums1[i];
            i ++; 
            k ++; 
        }
        else{
            if (nums1[i] < nums2[j]){ //if current number in 1st array is less
                newArray[k] = nums1[i];
                k ++; 
                i ++; 
            }
            else{ //if current num in 2nd array is less
                newArray[k] = nums2[j];
                k ++; 
                j ++; 
            }
        }
    }
    if (new_size % 2 == 0)
        res = (double)(newArray[new_size/2] + newArray[new_size/2-1])/2;
    else
        res = newArray[new_size/2]; 
    return res; 
}
