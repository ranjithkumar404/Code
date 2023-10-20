class Solution{

    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long maxSubarraySum(int arr[], int n){
               
        long max=(long)arr[0];
        long m=(long)arr[0];
        for(int i=1;i<n;i++){
            
            max=Math.max(arr[i],max+arr[i]);
            m=Math.max(m,max);
                 }
        
        return m;
    }
    
}
