void merge(int a[], int start,int mid, int high)
{
    int i,j,k,temp[high-start + 1];
    
    i = start;
    k = 0;
    j = mid+1;
    
    while (i<=mid && j<=high)
    {
        if (a[i] < a[j])
        {
            temp[k] = a[i];
            k++;
            i++;
        }
        
        else{
            temp[k] = a[j];
            k++;
            j++;
        }
    }
    
    while (i<=mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }
    
    while (j<=high)
    {
        temp[k] = a[j];
        k++;
        j++;
    }
    
    
    for (i = start; i<=high;i++)
    {
        a[i] = temp[i-start];
    }
}

void mergesort(int s[], int begin, int end)
{
    if (begin>=end)
    {
        return;
    }
    
    int mid = (begin+end)/2;
    mergesort(s,begin,mid);
    mergesort(s,mid+1,end);
    merge(s,begin,mid,end);
}

void mergeSort(int input[], int size){
	
    int begin = 0;
    int end = size-1;
    
    mergesort(input,begin,end);
        
}
