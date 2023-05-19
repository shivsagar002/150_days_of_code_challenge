class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        long long right_sum = sum;
        long long left_sum = 0;
        for(int i=0; i<n; i++){
            right_sum -= a[i];
            if(right_sum == left_sum){
                return i+1;
            }
            left_sum += a[i];
        }
        return -1;
    }

};