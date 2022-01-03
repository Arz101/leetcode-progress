class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int i = 0,temp,steps=1,x,pos;
        temp = capacity;

        while(i < plants.size()-1){  
            while(capacity >= plants[i] && i < plants.size()-1){  
                capacity -= plants[i];
                i++; 
                steps++;
            }
            pos = i;
            if(capacity < plants[i]){ 
                while(i > 0){
                    i--;
                    steps++; 
                }
                if(i == 0){
                    capacity = temp; 
                    i = pos;
                    steps += pos;
                }
            }
        }
        return steps;
    }
};
