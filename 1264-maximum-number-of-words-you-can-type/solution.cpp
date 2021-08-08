class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
      	int n = 0,cont = 0,i = 0,out = 0;
	    vector<int>it;
        for(int i=0;i<text.length();++i){
            if(text[i] == 32){
                it.push_back(i);
            }
        }
        while(n < it.size()){
		    cont = 0;
		    for(i;i<it[n];++i){ 
			    for(int j=0;j<brokenLetters.length();++j){
				    if(text[i] == brokenLetters[j]){
				    	cont++;
			    	}
		    	}
	    	}
		    i = it[n] + 1;
		    if(!cont) out++;
	    	++n;
	    }
	    cont = 0;
	    for(i;i<text.length();++i){
		    for(int j=0;j<brokenLetters.length();++j){
		    	if(text[i] == brokenLetters[j]){
		    		cont++;
		    	}
		    }
	    }
	    if(!cont) out++;
	    return out;
    }
};
