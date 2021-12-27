class Solution {
public:
    int romanToInt(string s) {
        
        int n = s.length();
	    int ans=0;
	
	    map<char, int>mp;
	    mp['I'] = 1;
	    mp['V'] = 5;
	    mp['X'] = 10;
	    mp['L'] = 50;
	    mp['C'] = 100;
	    mp['D'] = 500;
	    mp['M'] = 1000;
	
    	for(int i=0;i<n;++i){
	    	char a = s[i];
		    char a1 = s[i+1];
		    switch(a){
			    case ('I'):
                    if(mp[a] < mp[a1]){
			    		ans-=1;
			    	}
			    	else{
		    			ans+=1;
		    		}
		    		break;
		    	case ('V'):
		    		if(mp[a] < mp[a1]){
		    			ans-=5;
		    		}
		    		else{
		    			ans+=5;
	    			}
	    			break;
	    		case ('X'):
	    			if(mp[a] < mp[a1]){
	    				ans-=10;
	    			}
	    			else {
	    				ans+=10;	
	    			}
	    			break;
		    	case ('L'):
	    			if(mp[a] < mp[a1]){
	    				ans-=50;
		    		}
                    else{
		    			ans+=50;
    				}
	    			break;
    			case ('C'):
	    			if(mp[a] < mp[a1]){
		    			ans-=100;
			    	}
				    else{
					    ans+=100;
    				}
	    			break;
		    	case ('D'):
			    	if(mp[a] < mp[a1]){
				    	ans-=500;
	    			}
		    		else{
			    		ans+=500;
			    	}
			    	break;
			    case ('M'):
	    			ans+=1000;
                    break;
	    	}
    	}
	    return ans;
    }
};
