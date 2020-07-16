/* A class is a data type defined by the programmer, consisiting of variables and functions (like a structure)
   Unlike a structure, the members of a class are private by default. Private class members cannot be accessed by programming statements outside the class.
   To allow access to a class's private member variables, you create public member functions that work with the  private member variables
   A member function that assigns a value to a member variable is known as a mutator: getter and setter
   A member function that get a value from a class's member variable but does not change it is known as an accessor
*/
#include<iostream>
using namespace std;

class Retangle
{
private:     //member variables
    double width;
    double length;
public:     // member functions
    void setWidth(double);    
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};   // It's important to remember using ; after the braket
    //two colons are called the scope resolution operator ::
void Retangle::setWidth(double w)    //must use className:: to access the member function
{
    width = w;   //assign the value to the member varible width
}
void Retangle::setLength(double l)
{
    length = l;   // assign the value to the member variable length
}
double Retangle::getWidth()const
{
    return width;   // return the value in the width member
}
double Retangle::getLength()const
{
    return length;  // return the value in the length member
}
double Retangle::getArea()const
{
    return width*length;
}
int main()
{
    Retangle box;     //define a class object   (className object_name)
    Retangle *ptr_box = nullptr; //we can also create a pointer to class object
    ptr_box = &box; //ptr_box is not an object, but it holds the address of the object
    double re_width, re_length, re_area;
    cout << "The program will calculate the area of the retangle.\n";
    cout << "Can you enter the number of the width: ";
    cin  >> re_width;
    cout << "\nCan you enter the number of the length: ";
    cin  >> re_length;

    box.setWidth(re_width);
    box.setLength(re_length);

    cout << "\nHere are the retangle's data\n";
    cout << "Width: " << box.getWidth() << endl;
    cout << "Length: " << box.getLength() << endl;
    cout << "The area of this retangle is: " << box.getArea() << endl;
    cout << endl;
    // use the pointer to call the member function, use ->
    ptr_box->setWidth(re_width);
    ptr_box->setLength(re_length);
    cout << "The area is: " << ptr_box->getArea()<< " (use pointer)"<< endl;

    return 0;
}