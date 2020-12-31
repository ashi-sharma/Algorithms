int maxSubarraySum(int arr[], int n){
    int maxsofar=0,maxendinghere=0;
    for(int i=0;i<n;i++){
        maxendinghere += arr[i];
        if(maxendinghere>maxsofar)
            maxsofar = maxendinghere;
        else if(maxendinghere<0)
            maxendinghere = 0;
    }
    return maxsofar;
}
