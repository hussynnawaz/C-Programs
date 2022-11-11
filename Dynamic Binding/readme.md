Dynamic binding

The general meaning of binding is linking something to a thing. Here linking of objects is done. In a programming sense, we can describe binding as linking function definition with the function call.

So the term dynamic binding means to select a particular function to run until the runtime. Based on the type of object, the respective function will be called.

As dynamic binding provides flexibility, it avoids the problem of static binding as it happened at compile time and thus linked the function call with the function definition.

Use of dynamic binding

On that note, dynamic binding also helps us to handle different objects using a single function name. It also reduces the complexity and helps the developer to debug the code and errors.

How to implement dynamic binding?

The concept of dynamic programming is implemented with virtual functions.

Virtual functions

A function declared in the base class and overridden(redefined) in the child class is called a virtual function. When we refer derived class object using a pointer or reference to the base, we can call a virtual function for that object and execute the derived class's version of the function.

Characteristics

Run time function resolving
Used to achieve runtime polymorphism
All virtual functions are declared in the base class
Assurance of calling correct function for an object regardless of the pointer(reference) used for function call.
A virtual function cannot be declared as static
No virtual constructor exists but a virtual destructor can be made.
Virtual function definition should be the same in the base as well as the derived class.
A virtual function can be a friend of another class.
The definition is always in the base class and overrides in the derived class
Now let us see the following problem that occurs without virtual keywords.

Example

Let us take a class A with a function final_print(), and class B inherits A publicly. B also has its final_print() function.

If we make an object of A and call final_print(), it will run of base class whereas, if we make an object of B and call final_print(), it will run of base only.