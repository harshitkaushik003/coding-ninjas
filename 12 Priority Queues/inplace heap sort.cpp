void heapSort(int arr[], int n) {
    // Write your code
    for(int i=1; i<n;i++){
        int childIndex = i;
        while(childIndex > 0){
            int parentIndex = (childIndex-1)/2;
            if(arr[childIndex] < arr[parentIndex]){
                int temp = arr[childIndex];
                arr[childIndex] = arr[parentIndex];
                arr[parentIndex] = temp;
            }else{
                break;
            }
            childIndex = parentIndex;
        }
    }
    int i=0;
    while(n>0){
        int parentIndex = 0;
        int temp = arr[parentIndex];
        arr[parentIndex] = arr[n-1];
        arr[n-1] = temp;
        
        int leftChildIndex = 2*parentIndex+1;
        int rightChildIndex = 2*parentIndex+2;
        while(leftChildIndex < n-1){
            int minIndex = parentIndex;
            if(arr[leftChildIndex] < arr[minIndex]){
                minIndex = leftChildIndex;
            }
            
            if(rightChildIndex < n-1 && arr[rightChildIndex] < arr[minIndex]){
                minIndex = rightChildIndex;
            }
            
            if(minIndex == parentIndex){
                break;
            }
            int temp = arr[parentIndex];
            arr[parentIndex] = arr[minIndex];
            arr[minIndex] = temp;
            
            parentIndex = minIndex;
            leftChildIndex = 2*parentIndex+1;
        	rightChildIndex = 2*parentIndex+2;
        }
        n--;
    }
}