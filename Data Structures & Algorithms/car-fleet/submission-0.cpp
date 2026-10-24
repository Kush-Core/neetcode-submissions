class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int ans = 0;
        unordered_map<int,int>turns;
        stack<int>ind;
        for(int i =0;i<position.size();i++){
            int dist = position[i];
            while(dist<target){
                dist += speed[i];
                ind.push(dist);
            }
            turns[ind.size()]++;
            while(!ind.empty()){
                ind.pop();
            }
        }
        ans = turns.size();
        return ans;
    }
};
