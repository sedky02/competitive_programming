#include <stdlib.h>
bool isHappy(int n) {
    int n1 = n;
    //confirm doing the first iteration in number with only one digit
    if(n/10 == 0) {
        n = n*n;
    }
    char *ch ;
    int longeur = (int)(log10(n)+1);
    ch = (char*)  malloc( longeur+1);
    sprintf(ch , "%d",n);
    
    while(strlen(ch) != 1 ) {
        int s = 0,i;
        for(i=0; i <strlen(ch);i++){
            int x;
            x= ch[i] - '0';
            s += x*x;
        }
        //to exclude the numbers that enters in a cycle 
        if(s == n1 ) {
           return false;
        }
        if(s/10 == 0 ){
            return isHappy(s);
        }
        free(ch);
        longeur = (int)(log10(s))+1;
        ch = (char*)  malloc( longeur+1);
        sprintf(ch , "%d",s);
    }
    if(ch[0] == '1') return true;
    return false;
}