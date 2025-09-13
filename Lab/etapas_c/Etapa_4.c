#include <stdio.h>
/*
int main(void){
    
    int i = 0;
    for(i = 0; i <=100; i ++){
        printf("%d\n", i );
    }
    return 0;
}
*/
/*
int main(void){

    int i = 0, a = 0;

    for(i = 1; i <= 10; i ++){
        for( a = 1; a <= 10; a ++ ){
            printf("->%d\n",a * i);

        }
        

    }
    return 0;
}
*/

int main(void){

    int t = 0;
    int num = 0;
    int soma = 0;
    while(t < 1){
        printf("Digite um número: ");
        scanf("%d", &num);
        if(num == 0){
           printf("a soma e:%d\n", soma); 
           break;
            
        }
        else{
            soma += num; 
            
        }

    }


    return 0;
}

