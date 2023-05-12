class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int max_vol = 0;
        int last = height[0];
        // volume of water = min(height[i],height[k])*(k-i);
        // optimization one - only consider next starting tower when it has height greater than the 
        // last considered
        // second optimization - can be done over the next tower chosen 
        for(int i = 0; i < n; i++){
            if(height[i] > last || i == 0){
                for(int k = i+1; k < n ; k++){
                    
                int vol = min(height[i],height[k])*(k-i);
                if(vol > max_vol){
                    max_vol = vol;
                }

            }

            }
            else{
                continue;
            }


          
        }
        return max_vol;
    }
};