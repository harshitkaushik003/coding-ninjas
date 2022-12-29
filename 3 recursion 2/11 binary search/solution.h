// input - input array
// size - length of input array
// element - value to be searched

int helper(int arr[], int low, int high, int key)
{
    if (low>high)
    {
        return -1;
    }
    
    int mid = (low + high)/2;
    
    if (arr[mid] == key)
    {
        return mid;
    }
    
    else{
        if (arr[mid] > key)
        {
            return helper(arr,low,mid-1,key);
        }
        else{
            return helper(arr,mid+1,high,key);
        }
    }
}


int binarySearch(int input[], int size, int element) {
    // Write your code here
    
    return helper(input,0,size-1,element);
    
    

}
