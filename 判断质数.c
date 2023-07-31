//
//  判断质数.c
//  test
//
//2023/7/31.
//

#include <stdio.h>
int main (void){
    int i,t;
    for (i=100;i<201;i++){
        int flag = 0;
        for(t=2;t<i;t++)
            if(i%t==0)
                flag=1;
        if(flag ==0)
            printf("%d\n",i);}
        
            
    return 0;
}


