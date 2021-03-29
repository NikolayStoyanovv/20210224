/* Задача 3. Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG) */
#include<stdio.h>
void debugMSG(const char*pszMSG){
    #ifdef DEBUG
    printf("Debug:%s\n",pszMSG);
    #endif
}
int main(void){
    debugMSG("Lalalalala");
    return 0;
}