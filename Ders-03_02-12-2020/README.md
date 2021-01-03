# Operator Overloading in C++

Overloading is basically creating methods with same name but with different number, type and order of parameters. In C++,
* Methods
* Constructors
* Indexed Properties

can be overloaded.

## There are two types of overloading:
* Function Overloading
* Operator Overloading

## Function Overloading
A function is redefined with using different types of variables or a different number of argument. A compiler can differentiate between functions only through 
these differences.
The advantage is that it increases the legibleness of the code because we don’t need to use different names for a same action.

Let’s do an example.
> Look for example [fonksiyon-overloading.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-03_02-12-2020/fonskiyon-overloading.cpp)

Output of the example:
````
1
1
0
````

## Operator Overloading

Operator overloading is making an operator able to perform a new assignment that is defined outside of its default defined assignment.

Following is the list of operators can be overloaded:

|  |  |  |  |  |  | 
| --------- | --------- | --------- | --------- | --------- | --------- | 
|     +     |     -     |     *     |     /     |     %     |     ^     |   
|     &     |    \\|    |     ~     |     !     |     ,     |     =     |   
|     <     |     >     |     <=    |     >=    |     ++    |    --     |   
|     <<    |     >>    |     ==    |     !=    |     &&    |  \\|\\|   |   
|     +=    |     -=    |     /=    |     %=    |     ^=    |     &=    |   
|     !=    |     *=   |     <<=   |     >>=   |     []    |     ()    |   
|     ->    |     ->*   |     new   |     new[] |    delete |  delete[] |   

### Advantages of Operator Overloading
* Enables programmers to use notation closer to the target domain.
* Provides similar syntactic support of built-in types to user-defined types.
* Makes the program easier to understand.

Let’s do an example for Operator Overloading.
> Look for example [operator-overloading.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-03_02-12-2020/operator-overloading.cpp)

The Output is:
````
complexNumber1 1-2i
complexNumber2 3+4i
complexNumber3 4+2i
complexNumber1 and complexNumber2 are NOT EQUAL!
12
20
12+20i
````
