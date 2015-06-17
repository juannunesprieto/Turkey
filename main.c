//
//  main.c
//  Turkey
//
//  Created by Juan Prieto on 6/15/15.
//  Copyright © 2015 Juan Prieto. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
// Declare the variable alled 'weight' of type float
    float weight;
    
    // Store a number in that variable
    weight=14.2;
    
    // Log in to the user
    printf("The turkey weights %f.\n", weight);
    
    // Declare another variable of type float
           float cookingTime;
           
    // Calculate the cooking time and it in the variable
    // In this case, '*' means 'miltiplied by'
           cookingTime = 15.0 + 15.0 * weight;
           
    // Log that to the user
           printf("cook it for %f minutes.\n", cookingTime);
           
    // End this function and indicate sucess
    
           return 0;
}