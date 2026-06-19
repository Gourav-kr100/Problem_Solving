class Solution {
public:
    double angleClock(int hour, int minutes) {
        double mint=minutes*6;
        double hrs=(hour%12)*30+minutes*0.5;
        double dif=fabs(hrs-mint);
        return min(dif,360-dif);
    }
};