class Solution {
public:
    bool solve(vector<int>& arr,int index,int n)
    {
        if(index<0 || index>=n || arr[index]<0)
            return false;
        if(arr[index]==0)
            return true;
        arr[index]=-1*arr[index];
        bool a=solve(arr,index-arr[index],n);
        bool b=solve(arr,index+arr[index],n);
        return a||b;
    }
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        return solve(arr,start,n);
    }
};