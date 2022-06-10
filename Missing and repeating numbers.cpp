#include bitsstdc++.h 

pairint,int missingAndRepeating(vectorint &arr, int n)
{	
    int present[n+1];
    memset(present,0,sizeof(present));
    int rep,mis;
    for(int i = 0; i  n; i++){
        if(present[arr[i]] == 1){
            rep = arr[i];   
        }
        present[arr[i]] = 1;
    }
    for(int i = 1; i = n; i++){
        if(present[i] == 0){
            mis = i;
            break;
        }
        
    }
    return {mis,rep};
}
