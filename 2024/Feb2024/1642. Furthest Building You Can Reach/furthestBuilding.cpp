class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {

        int n = heights.size();
        priority_queue<int> pq; // max heap


        int i = 0;
        for(; i < n-1; i++){

            if(heights[i+1] <= heights[i]){

                continue;
            }
            int diff = heights[i+1] - heights[i];

            if(bricks >= diff){

                bricks -= diff;
                pq.push(diff);
            }
            else if(ladders > 0){

                if(!pq.empty()){
                    int max_bricks_past = pq.top();
                    if(max_bricks_past  > diff){

                        bricks += max_bricks_past;
                        pq.pop();
                        bricks -= diff;
                        pq.push(diff);
                        
                    }
                   
                }
                ladders--;
            }
            else{
                break;
            }
        }
        return i;
    }
};