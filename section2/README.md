<iframe width="700" height="394" src="https://www.youtube.com/embed/8rwsuXHA7RA" frameborder="0" allowfullscreen></iframe>

### Introduction
We learned some basic C programming:

- How to create **variables**
- How to write **functions**
- How to add control flow to your program with **if / else**

and more...

In order to build iOS apps, we need to to learn a little about object-oriented programming. Objective-C is an object-oriented extension of the C language.

### Object-oriented programming (OOP)

OOP is a way of designing software in which programmers define not only the data type of a data structure, but also the types of operations (functions) that can be applied to the data structure.

In this way, the data structure becomes an object that includes both data and functions. Consider this example:

```c
struct Person {
  char *fullName;
  int age;
  int weight;    
  int height; /* CM */
  char *nationality;
};
```

Remember that a C struct is a way for us to group attributes together, however, if we wanted to perform some operations that modify the the structs attributes we would need to pass it into a function like so:

```c
// Passing by value
void changeNationality(struct Person person) {
    person.nationality = "Chinese";
}


// Passing by reference
void changeNationality(struct Person *person) {
    person->nationality = "Chinese";
}
```

The struct **Person** is separated from the functions and they are not a single thing. Look at this program in it's entirety:

```c
#include <stdio.h>

// Person is isolated
struct Person {
    char *fullName;
    int age;
    int weight;
    int height;
    char *nationality;
};

// Function is isolated
void changeNationality(struct Person person) {
    person.nationality = "Chinese";
}

// Program is isolated
int main(int argc, const char * argv[]) {
    struct Person newPerson;
    newPerson.nationality = "Canadian";

    changeNationality(newPerson);
    printf("Nationality: %s\n", newPerson.nationality);

    return 0;
}
```

As you can see there are area's I marked `// isolated`. I am just trying to point out the separation and show that these things are not connected.

### Object-oriented programming (OOP)

OOP Refers to a type of computer programming (software design) in which programmers define not only the data type of a data structure, but also the types of operations (functions) that can be applied to the data structure.

In this way, the data structure becomes an object that includes both data and functions.

Enjoy a talk about Object-oriented programming before we try to learn Objective-C (the Object-oriented extension of C).

<iframe width="700" height="394" src="https://www.youtube.com/embed/NUl8lcbeN2Y" frameborder="0" allowfullscreen></iframe>

------------------------------------------------------------------------------------------

##### In a 1994 interview with the Rolling Stone magazine, Steve Jobs described objects in the following way:

"Objects are like people. They're living, breathing things that have knowledge inside them about how to do things and have memory inside them so they can remember things. And rather than interacting with them at a very low level, you interact with them at a very high level of abstraction, like we're doing right here.

**Here's an example:**
If I'm your laundry object, you can give me your dirty clothes and send me a message that says, "Can you get my clothes laundered, please." I happen to know where the best laundry place in San Francisco is. And I speak English, and I have dollars in my pockets. So I go out and hail a taxicab and tell the driver to take me to this place in San Francisco. I go get your clothes laundered, I jump back in the cab, I get back here. I give you your clean clothes and say, "Here are your clean clothes."

You have no idea how I did that. You have no knowledge of the laundry place. Maybe you speak French, and you can't even hail a taxi. You can't pay for one, you don't have dollars in your pocket. Yet I knew how to do all of that. And you didn't have to know any of it. All that complexity was hidden inside of me, and we were able to interact at a very high level of abstraction. That's what objects are. They encapsulate complexity, and the interfaces to that complexity are high level."

For the complete interview, [click here](http://www.rollingstone.com/culture/news/steve-jobs-in-1994-the-rolling-stone-interview-20110117)


In the beginning we will be learning Objective-C in class, and object-oriented extension of C that allows us the flexibility to built complex apps in much less time than using a procedural language such as C.

----
