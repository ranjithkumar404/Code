class Solution
{
    //Function to merge the arrays.
    public static void merge(long arr1[], long arr2[], int n, int m) 
    {
        // code here 
        int a=m+n;
        long arr[]=new long[a];
        for(int i=0;i<n;i++){
            arr[i]=arr1[i];
        }
        for(int i=0;i<m;i++){
            arr[i+n]=arr2[i];
        }
        Arrays.sort(arr);
        for(int i=0;i<n;i++){
            arr1[i]=arr[i];
        }
        for(int i=0;i<m;i++){
            arr2[i]=arr[i+n];
        }
    }
}
