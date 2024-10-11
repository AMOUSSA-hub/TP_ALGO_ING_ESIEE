#include <stdio.h>


void increase_and_decrease(int a,int go_up){

   
if(a <= 10 ){
    printf("%d ",a);
     if(a ==1){
        go_up= 0;
        printf("%d ",a);
    }
    if(go_up ==0){
        a = a+1;
      
        increase_and_decrease(a,go_up);
    }
    else{
        a = a-1;
        increase_and_decrease(a,go_up);
    }
}else{printf("\n");}



    

}


int main(int argc, char* argv[]) {

    increase_and_decrease(10,1);

return 0;
}



