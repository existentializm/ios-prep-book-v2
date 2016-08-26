//
//  main.c
//  Array
//
//  Created by Adam Dahan on 2016-07-17.
//  Copyright © 2016 Adam Dahan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n[ 10 ]; /* n is an array of 10 integers */
    int i,j;
    
    /* initialize elements of array n to 0 */
    for ( i = 0; i < 10; i++ ) {
        n[ i ] = i + 100; /* set element at location i to i + 100 */
    }
    
    /* output each array element's value */
    for (j = 0; j < 10; j++ ) {
        printf("Element[%d] = %d\n", j, n[j] );
    }
    
    return 0;
}
