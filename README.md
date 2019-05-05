# Epitech Computer Science School [C++ POOL]
<br/>
<p align="center">
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/2/2d/Epitech.png/1598px-Epitech.png" width="250">
</p>
<br/>

<a name="top"></a>

## Table of Contents 
- [CppPool](#CppPool): **C++ Basics**
    - Second "Piscine" of Epitech, C++ programs to learn Object-oriented programming.

<a name="CppPool"></a>

## [CppPool](./CppPool/): **C++ Basics**
<p align="right"><a href="#top">Back to top</a></p>

- [Day01](./cpp_d01_2018): **Storage Classes**
    - white_rabbit.c : function that follow Alice’s journey.
    - menger : display a fractal curve based on squares, with the size and depth given in parameters.
    - bitmap : build a .bmp file.
    - drawing.c : draw square in a bmp file.
    - pyramid.c : return the shortest path to the pyramid’s exit.

- [Day02m](./cpp_d02m_2018): **Pointers and Memory**
    - mul_div.c : calculates the sum and product of the first and second parameters with pointers.
    - mem_ptr.c : concatenates str1 and str2 in parameters. The resulting string is stored in the pointer pointed by res.
    - tab\_to_2dtab.c : takes an array of integers as its tab parameter, and uses it to create a bidimensional array of length lines and width columns.
    - func_ptr.c : build a few function pointers.
    - castmania.c : understanding and mastering casts.

- [Day02a](./cpp_d02a_2018): **C Data Structures**
    - simple_list.c : build a simple linked list, with main manipulation functions.
    - simple_btree.h : create a set of functions that will let you manipulate a binary tree.
    - generic_list.c : create a generic list.
    - stack.h : create a stack based on the previously created generic list.
    - queue.h : create a queue based on the previously created generic list.
    - map.h : create a map based on the previously created generic list.
    - tree_traversal.h : iterate over a tree in a generic way, using containers.

- [Day03](./cpp_d03_2018): **Advanced String Manipulation**
    - ex00 : create a String module, init and destructor function.
    - ex01 : sets the content of the current instance to the string parameters.
    - ex02 : appends a parameter to the content of the current instance and the opposite function.
    - ex03 : returns the char at the pos position of the current instance, or -1 if the position is invalid.
    - ex04 : empties the content of the current instance.
    - ex05 : returns the size of the string, or -1 if the string pointer is NULL.
    - ex06 : compares the content of the current instance to that of str. Results are the same as the strcmp function.
    - ex07 : copies n characters from the current instance’s content, starting from the pos position, into s. Returns the number of characters copied.
    - ex08 : returns the buffer contained in the current instance..
    - ex09 : returns 1 if the string is empty, -1 otherwise.
    - ex10 : searches for the first occurence of str’s content in the current instance, starting from the pos position.
    - ex11 : insert : copies str into the current instance, at the pos position.
    - ex12 : returns the content of the current instance converted into an int. Behaves like the atoi(3) function.
    - ex13 : returns an array of strings filled with the content of the current instance split using the separator delimiter.
    - ex14 : displays the content of the current instance to the standard output.

- [Day06](./cpp_d06_2018): **IOStream, String and Objects**
    - my_cat.cpp : write a simplified cat(1) command.
    - my\_convert_temp.cpp : convert temperatures from the Celsius scale to the Fahrenheit scale, and vice-versa.
    - sickkoala.cpp : simulation of your dear Koalas’ health, with the creation of a koala class.
    - koalanurse.cpp : create the koalanurse class.
    - koaladoctor.cpp : create a doctor class to give instructions to the nurses.
    - ex05 : create lists for the classes created before.

- [Day07m](./cpp_d07m_2018): **Creation of Starfleet, Polymorphism, Namespaces**
    - Federation.cpp : create a Federation namespace, which will contain all the elements that allow the Federation to exist.
    - Borg.cpp : create a Borg namespace containing a Ship class.
    - Destination.hh : Destination is an enumeration defined in the Destination.hh file.

- [Day07a](./cpp_d07a_2018): **Skat, new, delete and Smart Pointers**
    - skat.cpp : inplement the skat class.

- [Day08](./cpp_d08_2018): **Droids, Coplien form and Default delete**
    - droid.cpp : creation of the droid class.
    - droidmemory.cpp : add experienceacquired, and FingerPrint,theDroidMemory’sid,storedasasize_t.

- [Day09](./cpp_d09_2018): **Inheritance**
    - character.c : create a simple Character class, getLvl(), getPv(), getPower().
    - warrior.cpp : create a warrior class.
    - ex02 : create Mage, Priest class.
    - ex03 : add Paladin class.
    - ex04 : add Hunter class.

- [Day10](./cpp_d10_2018): **Override and final**
    - ex00 : Sorcerer, Peon, Victim classes.
    - ex01 : Weapons classes.
    - ex03 : omplete the definition of the following AMateria class, and implement the necessary member functions.

- [Day13](./cpp_d13_2018): **Encapsulation, Canonical form, Operators and Nested Classes**
    - ex00 : Picture and Toy class.
    - ex01 : re-use the two classes from the previous exercise and make them comply with the canonical form.
    - ex02 : add two values to the ToyType enumeration: BUZZ and WOODY, and create two new Buzz and Woody classes.
    - ex03 : add a speak method to the Toy class, taking the statement to say as a parameter.
    - ex04 : add operators to classes.
    - ex05 : add a speak_es method to the Toy class, with the same signature as speak.

- [Day14m](./cpp_d14m_2018): **Casting Spells**
    - ex00 : implement the Fruit, Lemon and Banana classes.
    - ex01 : Sorting the FruitBoxes will be done by hand. It will be done by a LittleHand. Implement the LittleHand class.

- [Day14a](./cpp_d14a_2018): **Errors, Units Tests**
    - ex00 : implement the error reporting system.
    - ex01 : unit tests.
    - ex02 : implement a CommunicationDevice :  use the CommunicationAPI and handle all its errors.
    - ex03 : design a generic class to ensure the release of dynamically allocated compo- nents of the rover.
    - ex04 : Our ScopedPtr is nice, but we can’t copy it. Let’s implement a RefPtr that can be stored, copied, and still takes care of deleting the object!

- [Day15](./cpp_d15_2018): **Templates**
    - ex00 : create templates that should generate functions that can be called with any type of parameter, as long as they have the same type and support all comparison operators.
    - ex01 : write the compare function template. It takes two parameters of the same type, and returns an int.
    - ex02 : several function that returns min.
    - ex03 : implement the foreach function template. It will let you walk over an array and call a function for each element in it.
    - ex04 : write the equal function template that takes as parameters two constant references to a given type. It must
return true if the two parameters are equal, and false otherwise.
    - ex05 : write an array class template that contains elements of type T.

- [Day16](./cpp_d16_2018): **The StandarT Library**
    - ex00 : create a Parser class.
    - ex01 : create a DomesticKoala class which will represent a Koala that can learn to do things. Everything a Koala can
do will be a KoalaAction member function.
    - ex02 : create an event handler using an std::list. This event handler will let you schedule actions at a T time, know the action scheduled at a given time, add T time units to the current time, and many other things.

- [Day17](./cpp_d17_2018): **Algorithms**
    - ex00 : create a do_find function template taking 2 parameters: reference to a templated type and an integer.
    - ex01 : fill in the blanks using the appropriate STL algorithms in MyAlgorithms.hpp.
    - ex02 : create a Cesar class implementing the IEncryptionMethod interface.
    - ex03 : re-use all the files from the previous exercise and write the Encryption class.
