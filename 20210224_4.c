/* Задача 4. Използвайте предефинирани макроси */
#include<stdio.h>
void debugMSG(const char*pszMSG){
    #ifdef DEBUG
    printf("Debug:%s\n",pszMSG);
    #endif
}
int main(void){
    printf("File:%s\n",__FILE__);
    printf("File:%s\n",__DATE__);
    printf("File:%s\n",__TIME__);
    printf("File:%s\n",__LINE__);
    printf("File:%s\n",__STDC__);
    debugMSG("Lalalalala");
    return 0;
}