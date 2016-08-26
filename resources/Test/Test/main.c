//
//  main.c
//  Test
//
//  Created by Adam Dahan on 2016-08-21.
//  Copyright © 2016 Adam Dahan. All rights reserved.
//

#include <stdio.h>

struct Person {
    char *fullName;
    int age;
    int weight;
    int height;
    char *nationality;
};

// Passing by value
void changeNationality(struct Person person) {
    person.nationality = "Chinese";
}

int main(int argc, const char * argv[]) {
    struct Person newPerson;
    newPerson.nationality = "Canadian";
    
    changeNationality(newPerson);
    printf("Nationality: %s\n", newPerson.nationality);
    
    return 0;
}
