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
