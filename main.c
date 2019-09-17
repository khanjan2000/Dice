//
//  main.c
//  Dice_1
//
//  Created by khanjan Vaidya on 17/09/19.
//  Copyright © 2019 khanjan Vaidya. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, const char * argv[]) {
    
    printf("Welcome to dice game the simplest dice roll you can do!\n");
    printf("Enter the number of dice");
    int n,i;
    scanf("%d",&n);
    printf("the no n dice are: ( ");
    for(i=0;i<n;i++)
        printf("%d ",(rand()%6));
    printf(")");
    
        
    
    return 0;
}
