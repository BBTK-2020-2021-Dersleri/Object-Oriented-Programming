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
# Inheritance
Inheritance is an Object Oriented Programming (OOP) feature that allows the properties of an object to be used by different objects.

* A written class can be inherited by another class.
* When this process is done, all properties of the base class are transferred to the new class.
* Reusability of the written code is ensured.
* A base class is the parent class of a derived class.
* The parent class of derived class is called Base Class, and the inherited class is called the Derived Class.

In Java, three inheritance types supports:
* Single Inheritance
* Multiple Inheritance
* Hierarchical Inheritance

In C++, five inheritance types supports:
* Single Inheritance
* Multiple Inheritance
* Hierarchical Inheritance
* Multilevel Inheritance
* Hybrid Inheritance

> Multiple inheritance is not supported in Java.

Derived class syntax for Java:
```
class derivedClass extends baseClass
{  
    // body of the derivedClass.  
}
```
An example derived class syntax for Java:
```
class Dog extends Animal
{  
    // body of the Dog Class.
}
```
Derived class syntax for C++:
```
class derivedClass : visibilityMode baseClass
{  
    // body of the derivedClass.  
}
```
An example derived class syntax for C++:
```
class Dog : public Animal
{  
    // body of the Dog Class.  
}
```
### Accesible for Variables
|        Access   |     Public    |   Protected   |     Private  |
| --------------- | ------------- | ------------- | ------------ |
|    Same class   |       Yes     | Yes           |      Yes     |
| Derived classes |     Yes       |       Yes     |       No     |           
| Outside classes |     Yes       |       No      |      No      |
### Visibility Mode in C++
|                 | Derived Class | Derived Class |Derived Class |
| --------------- | ------------- | ------------- | ------------ |
|  **Base Class** |  **Private**  | **Protected** |  **Public**  |
|    **Private**  | Not Inherited | Not Inherited | Not Inherited|           
|   **Protected** |     Private   |   Protected   |   Protected  |
|     **Public**  |    Private    |   Protected   |    Public    |
## Inheritance Types
### 1- Single Inheritance
Single inheritance enables a derived class to inherit properties and behavior from a single parent class.

![single-inheritance](https://user-images.githubusercontent.com/53192718/102417796-7cf33c00-400d-11eb-9b30-bc4e88883c5f.jpg)

Look for Single Inheritance example to [Single-Inheritance.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-05_16-12-2020/Single-Inheritance.cpp)

When we look at the UML table, it is seen that the Dog class does not have the eat() method, but the Dog class has this method because it inherit from the Animal class. When this method is called in Main function, the eat() method of the inherited Animal class is called.

When we look at the table again, the Dog class has move() and speak() methods. Although these methods are in the inherited class, they have been rewritten using ‘OVERRIDE’. For this reason, when these methods are called in main, the related class’s move() or speak() class is called.

### 2- Multilevel Inheritance
Multilevel inheritance refers to a mechanism in OOP where a class can inherit from a derived class, thus making that derived class the base class for the new class.

![multilevel-inheritance](https://user-images.githubusercontent.com/53192718/102417963-de1b0f80-400d-11eb-9f04-eb915846ebfb.jpg)

Look for Multilevel Inheritance example to [Multilevel-Inheritance.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-05_16-12-2020/Multilevel-Inhertance.cpp)

### 3- Hierarchical Inheritance
When several classes are derived from same base class it is called hierarchical inheritance.

![hierarchical-inheritance](https://user-images.githubusercontent.com/53192718/102418150-394d0200-400e-11eb-9988-9094bc0b01e9.jpg)

Look for Hierarchical Inheritance example to [Hierarchical-Inheritance.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-05_16-12-2020/Hierarchical-Inhertance.cpp)

When we look at the UML table, it is seen that the Dog and Bird classes do not have the eat() method, while the Fish class does not have eat() and speak() methods. All three classes have these methods because they inherit from the Animal class.

When these methods are called in Main, the eat() and speak() methods of the inherited Animal class are called.

When we look at the table again, the Dog and Bird have move() and speak() methods, and the Fish class has the move() method. Although these methods are in the inherited class, they have been rewritten using ‘OVERRIDE’. For this reason, when these methods are called in main, the related class’s move() or speak() class is called.

### 4- Multiple Inheritance
When an object or a class can inherit characteristics and features from more than one parent class, it is called Multiple inheritance.

![multiple-inheritance](https://user-images.githubusercontent.com/53192718/102418297-8204bb00-400e-11eb-9115-8483a775edb5.jpg)

Derived class syntax for C++:

```
class derivedClass
           :  visibilityMode BaseClass1, visibilityMode BaseClass2
{  
    // body of the derivedClass. 
}
```

Look for Multiple Inheritance example to [Multiple-Inheritance.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-05_16-12-2020/Multiple-Inheritance.cpp)

When we look the main function, we created an A Class object and we call function() method that is inherited from Class C and Class B. The compiler can not know which inherited function() method have to call. For this reason, we specified that which method of class will be called.

```
a.C::function(); 
a.B::function();
```

### 5- Hybrid Inheritance
Hybric inheritance is a combination of multiple inheritance and multilevel inheritance. A class is derived from two classes as in multiple inheritance.

![hybrid-inheritance](https://user-images.githubusercontent.com/53192718/102418509-ecb5f680-400e-11eb-97b3-7a3bf59ec5b7.jpg)

Look for Hybrid Inheritance example to [Hybrid-Inheritance.cpp](https://github.com/BBTK-2020-2021-Dersleri/Object-Oriented-Programming/blob/main/Ders-05_16-12-2020/Hybrid-Inheritance.cpp)

When we look the A Class’s function() method, we use variable that is inherited class B or class C. Compiler do not know that which class’s variable have to inherit. For this reason, we use virtual keyword. We say to the compiler that only inherit one member thanks to virtual keyword.

```
class B : virtual public D,
......
class C : virtual public D
......
```
> Avoiding multiple inheritance as much as possible is necessary.
