void sort012(int a[], int n){
    int first=0, mid=0, last=n-1,temp;
    while(mid<=last){
        if(a[mid]==0){
            temp=a[mid];
            a[mid]=a[first];
            a[first]=temp;
            first++;
            mid++;
        }
        else if(a[mid]==2){
            temp=a[mid];
            a[mid]=a[last];
            a[last]=temp;
            last--;
        }
        else if(a[mid]==1)
            mid++;
    }
}
