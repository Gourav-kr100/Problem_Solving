class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        if(arr.size()==1)
            return true;
            sort(arr.begin(),arr.end());
            int d=arr[0]-arr[1];
        for(int i=1;i<arr.size();i++)
        {
            if(abs(arr[i-1]-arr[i])!=abs(d))
                return false;
        }   
        return true;
    }
};