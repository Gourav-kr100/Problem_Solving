class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       
        for(int i=0;i<flowerbed.size();i++)
        {
             bool ls=true;
        bool rs=true;
            if(i>0 && flowerbed[i-1]!=0)
                ls=false;
             if(i<flowerbed.size()-1 && flowerbed[i+1]!=0)
                rs=false;
                if(ls==true && rs==true && flowerbed[i]==0)
                {
                    flowerbed[i]=1;
                    n--;
                }
                if(n<=0)
                    return true;
        }
        return n<=0;
    }
};