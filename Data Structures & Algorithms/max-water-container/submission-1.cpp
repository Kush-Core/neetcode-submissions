class Solution {
public:
    int maxArea(vector<int>& h) {
        int max_area=0,area=0;
        int st=0,end=h.size()-1;
        while(st<=end){
            int len = end-st;
            int breadth = min(h[st],h[end]);
            area=len*breadth;
            max_area=max(area,max_area);
            h[st]<=h[end]?st++:end--;
        }
        return max_area;
    }
};
