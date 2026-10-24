class Solution {
public:
    int maxArea(vector<int>& h) {
        int max_area=0,area=0,len=0,bre=0;
        int st=0,end=h.size()-1;
        while(st<=end){
            len=end-st;
            bre=min(h[st],h[end]);
            area=len*bre;
            max_area=max(area,max_area);
            h[st]>=h[end]?end--:st++;
        }
        return max_area;
    }
};
