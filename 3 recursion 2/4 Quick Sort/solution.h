void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int si, int ei){
    int count_smaller=0;
    for(int i=si+1; i<=ei; i++){
        if(arr[i] <= arr[si]){
            count_smaller++;
        }
    }
    int pi = count_smaller + si;
    swap(&arr[pi], &arr[si]);
    
    int i=si, j=ei;
    while(i < pi && j > pi){
        while(arr[i] <= arr[pi])
            i++;
        while(arr[j] > arr[pi])
            j--;
        if(i<pi && j>pi){
            swap(&arr[i++], &arr[j--]);
        }
    }
    
    return pi;
    
}

void quicksort(int input[],int si, int ei){
    if(si >= ei){
        return;
    }
    
    int c = partition(input,si, ei);
    quicksort(input,si, c-1);
    quicksort(input,c+1, ei);
}
void quickSort(int input[], int size) {
	
    quicksort(input,0, size-1);

}