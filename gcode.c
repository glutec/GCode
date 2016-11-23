#include <stdio.h>
#include <stdlib.h>
int main(){
    printf("*********************G-CODE********************");
    printf("\n**G-Code is a program that installs the basic\ntools to program in c / c ++.**\n\n***************\n**Basic Tools**\n***************\n");
    printf("\n1) GCC Compiler\n2) G++ Compiler\n3) CodeBlocks\n\n*********************************\n**Initializing GCC Installation**\n*********************************\n");
    system("sudo apt-get install gcc");
    printf("\n***********************************************\n***Initializing Build-Essential Installation***\n***********************************************\n");
    system("sudo apt-get install build-essential");
    printf("\n******************************************\n***Initializing CodeBlocks Installation***\n******************************************\n");
    system("sudo apt-get install codeblocks");
    return 0;
}
