
/*


Given an array of N integers arr[] where each element represents the max number of steps that can be made forward from that element. Find the minimum number of jumps to reach the end of the array (starting from the first element). If an element is 0, then you cannot move through that element.
Note: Return -1 if you can't reach the end of the array.
*/

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int steps = 0, mxi = 0, prevmxi = 0; 
        for(int i = 0; i < n-1; ++i){
            if (mxi < i) return -1;
            else if (i == prevmxi){
                mxi = max(mxi, i + arr[i]);
                prevmxi = mxi;
                ++steps;
            }else{
                mxi = max(mxi, i + arr[i]);
            }
        }
        if (mxi < n-1) return -1;
        return steps;
    }
};

