/* Задача 6. Напишете макрос с променлив брой параметри, който
извиква printf със префикс “TRACE: ” */
#include<stdio.h>

    #define PRINT_DATE(...) printf("TRACE:"__VA_ARGS__)

int main(void){
  
    PRINT_DATE("mY favorite numbers are:%d %d %d",7,7,7);
   
    return 0;
}