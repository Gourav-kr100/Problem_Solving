class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int gascost=0,totalcost=0;
        for(int i=0;i<gas.size();i++)
        {
                gascost+=gas[i];
        }
        for(int i=0;i<cost.size();i++)
        {
                totalcost+=cost[i];
        }  
        if(gascost<totalcost)
            return -1;
        int start=0;
        int currcost=0;
        for(int i=0;i<gas.size();i++)
        {
            currcost=currcost+gas[i]-cost[i];
            if(currcost<0)
            {
                start=i+1;
                currcost=0;
            }
        }
        return start;
    }
};