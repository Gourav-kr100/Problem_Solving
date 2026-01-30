class Solution {
public:
    int maxArea(vector<int>& height) {
         int lp=0,rp=height.size()-1;
        int ans=0;
        int w,h,area;
        while(lp<rp)
        {
            w=rp-lp;
            h=min(height[lp],height[rp]);
            area=w*h;
            ans=max(area,ans);
            height[lp]<height[rp] ? lp++: rp--;
        }
        return ans;
    }
};