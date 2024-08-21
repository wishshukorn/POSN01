#include<stdio.h>
#include<Windows.h>
int main(){
    char a;
    for(a=65;a<=72;a++){
        printf("%c\n",a);
        Sleep(50);
    }printf("%c%c\n",72,65);
    Sleep(50);
    for(a=65;a<=80;a++){
        printf("%c%c%c\n",72,65,a);
        Sleep(50);
    }for(a=65;a<=80;a++){
        printf("%c%c%c%c\n",72,65,80,a);
        Sleep(50);
    }for(a=65;a<=89;a++){
        printf("%c%c%c%c%c\n",72,65,80,80,a);
        Sleep(50);
    }for(a=65;a<=66;a++){
        printf("%c%c%c%c%c %c\n",72,65,80,80,89,a);
        Sleep(50);
    }for(a=65;a<=73;a++){
        printf("%c%c%c%c%c %c%c\n",72,65,80,80,89,66,a);
        Sleep(50);
    }for(a=65;a<=82;a++){
        printf("%c%c%c%c%c %c%c%c\n",72,65,80,80,89,66,73,a);
        Sleep(50);
    }for(a=65;a<=84;a++){
        printf("%c%c%c%c%c %c%c%c%c\n",72,65,80,80,89,66,73,82,a);
        Sleep(50);
    }for(a=65;a<=72;a++){
        printf("%c%c%c%c%c %c%c%c%c%c\n",72,65,80,80,89,66,73,82,84,a);
        Sleep(50);
    }for(a=65;a<=68;a++){
        printf("%c%c%c%c%c %c%c%c%c%c %c\n",72,65,80,80,89,66,73,82,84,72,a);
        Sleep(50);
    }printf("%c%c%c%c%c %c%c%c%c%c %c%c\n",72,65,80,80,89,66,73,82,84,72,68,65);
    Sleep(50);
    for(a=65;a<=89;a++){
        printf("%c%c%c%c%c %c%c%c%c%c %c%c%c\n",72,65,80,80,89,66,73,82,84,72,68,65,a);
        Sleep(50);
    }
}