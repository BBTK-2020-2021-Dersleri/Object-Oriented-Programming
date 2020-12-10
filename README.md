# What is Object Oriented Programming?
OOP, is short way for Object Oriented Programming, is an approach that emerged in the late 1960s to remove the complexity of the written code and removing the code repetition. First OOP language is [Simula](https://en.wikipedia.org/wiki/Simula). We can assume, Popular OOP languages are C++, C#, Java, PHP, Python and JavaScript.

## Advantages of OOP:
* It enables the written code to be reused (Code-Reusability). In this way, the cost is reduced.
* Extensibility is provided by adding new features and methods to a written class.
* The program becomes compatible with teamwork, thus increasing performance.
* Since the program is divided into parts, the errors that occur are found and resolved faster.
* Facilitates complex project production and maintenance.

OOP is based on the concept of objects. OOP is associated with concepts such as class, object, Inheritance, Encapsulation, Abstraction, Polymorphism etc.

![concepts-of-oop](https://user-images.githubusercontent.com/53192718/101817320-44e28980-3b33-11eb-9438-7556c1a636fe.png)

## What is Methods and Attributes(Properties)?
Methods are actions that can be performed on the object.
Properties hold data and help identify the object.

## What is Class?
Class is basically a block of code that variables and methods.

![class-object](https://user-images.githubusercontent.com/53192718/101817498-8115ea00-3b33-11eb-9985-824d8bf9f382.png)

### Let’s convert the code block to a class.
> Look for example [Q1.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-01_11-11-2020/01.cpp) and [Q2.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-01_11-11-2020/02.cpp)


Classes have constructors and destructors.
## What is Constructor?
Constructor method runs automatically when an object is created.
* Constructor method’s name has to be same with class name.
* Constructor has no return type.
* Constructor methods can be overload.
* We can call our Constructor method with ‘this’ key word.

### What is Overloading?
Overloading is creating methods with same name but different signatures.
### What is Signature?
Signature is the number, type and order of parameters a method contains.
## What is Destructor?
Destructor is a member function that deletes an objects.
* Destructor method’s name has to be same with class name and should begin with tilde sign(~).
* Destructor has no return type.
* Destructor methods can not be overload.
> Look for example [constructor-destructor.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-01_11-11-2020/constructor-destructor.cpp)

## What is Encapsulation?
This feature keeps unnecessary application details from object user. In order for the user to perform their operations more easily within a class created, some operations are combined and shown as a single operation.

### What are Access Modifiers?

Access Modifiers are keywords that used to determine the access levels of items in the created class or class. Methods and variables can be limited by access modifiers.

* **Public (+):** It provides access to all classes in the system.
* **Private (-):** Allows a property or method to be accessed only from the class in which it is defined. If the structures to be created are not specified to be “public”, they are automatically “private”.
* **Protected (#):** Accessible only within the class in which it is defined and within classes derived from that class.
* **Internal (~):** Access is provided from all classes in the same compiler.

We use public methods called getter and setter to access private members. Thus, the user cannot directly access the data of the class.
> Only Reading, Just Writing and Writing-Reading operations are provided.

## Let’s do an example.
UML of Car Class

![car-class-uml](https://user-images.githubusercontent.com/53192718/101818280-af47f980-3b34-11eb-9f0e-3aace16860a7.png)


Here is the [link](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/tree/main/Ders-01_11-11-2020/araba-sinif-ornek) for Car Class's codes.


# Operator Overloading in C++

Overloading is basically creating methods with same name but with different number, type and order of parameters. In C++,
* Methods
* Constructors
* Indexed Properties

can be overloaded.

##There are two types of overloading:
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
