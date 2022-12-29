bool isMaxHeap(int arr[], int n) {
    // Write your code here
    for (int i=0; i<n; i++){
        int parentIndex = i;
        int leftChildIndex = 2*parentIndex + 1;
        int rightChildIndex = 2*parentIndex + 2;
        
        if(leftChildIndex < n && rightChildIndex < n){
            if(arr[leftChildIndex] > arr[parentIndex] || arr[rightChildIndex] > arr[parentIndex]){
                return false;
            }
        }
        else if(leftChildIndex < n){
            if(arr[leftChildIndex] > arr[parentIndex]){
                return false;
            }
        }
        else if(rightChildIndex<n){
            if(arr[rightChildIndex] > arr[parentIndex]){
                return false;
            }
        }
    }
    return true;
}