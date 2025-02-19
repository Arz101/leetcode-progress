class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        
        for(int i = 0; i < nums.size(); i++){
            if(map.find(nums[i]) == map.end()){  // Sino existe lo insertamos en el mapa
                map.insert(make_pair(nums[i],i)); 
            }
            else{ // En caso de que el elemento ya exista seria igual a nums[i] == nums[j] i != j, verificamos si 
                if(abs(map[nums[i]] - i) <= k) return true;  // efectivamente los indices coinciden
                else { // En caso de que lo indices no coincidan modificamos la posicion de nums[i] en el mapa por nums[j]
                    map[nums[i]] = i;
                }
            }
        }
        return false;
    }
};
