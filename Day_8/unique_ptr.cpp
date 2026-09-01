/*Smart Pointers
Pointer that manages the lifetime of a dynamically allocated object.
These are template classes that provide automatic memory management and help prevent memory
leaks and dangling pointers.
In order to use smart pointers, you need to include the <memory> header.
*/


/*
unique_ptr
A smart pointer that owns and manages a dynamically allocated object.
It ensures that there is only one unique_ptr pointing to the object at any given time.*/

// unique_ptr<Type> ptr = std::make_unique<Type>(constructor_args); 

#include <iostream>
#include <memory>

class Array{
    public:
    int print(){
        std::cout<<"Unique_ptr"<<std::endl;
    }

};
int main(){

    std::unique_ptr<Array> ptr = std::make_unique<Array>();
    std::unique_ptr<Array> ptr2 = std::move(ptr); //Ownership can be transferred using std::move().
    ptr -> print();
    ptr2 -> print();
    std::cout<< "Address"<< ptr.get();
    std::cout << "p2: " << ptr2.get() << std::endl;

    return 0;

}
/*make_unique<A>() creates an object of type Array, and ptr becomes its exclusive owner.
get() returns the raw pointer without transferring ownership, and the object is automatically destroyed when ptr goes out of scope.
*/