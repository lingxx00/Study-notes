#include <iostream>
using namespace std;

int main()
{
  int x = 99;
  cout << "The value of x is: ";
  cout << x << endl;
  cout << "The memory address of x is: ";
  cout << &x << endl; 
  /* & is address operator, place & in front of a variable name, 
    it returns the memory address of this variable
    the address of the variable is displayed in hexadecimal
  */
  cout << "The size of x is: " << sizeof(x)<< endl;
  return 0;
}
----------------------------------------------------------------------------------------------------
// int *ptr;  * the asterisk infront of the variable name indicates that ptr is a pointer variable
// the int data type indicates that ptr can be used to hold the address of an integer variable
// can be read "ptr is a pointer to an int"
// it' a good idea to initialize pointer variables with special value nullptr
// int *ptr = nullptr;  (it represents the address 0)
// assign nullptr to a pointer variable makes the variable point to the address 0, it poonts to nothing
// in the older C++ (not C++ 11), we should assign pointer variables to 0 or NULL
---------------------------------------------------------------------------------------------------------
 #include<iostream> 
using namespace std;

int main()
{
  int x = 29;
  int *ptrtox = nullptr; // pointer variable, can point to an int
  ptrtox = &x; // store the address of x in ptr
  cout << "The value of x is: " << x << endl;
  cout << "The address of x is: " << &x << " " << ptrtox << endl;
  cout << "use pointer to check the value of x is: " << *ptrtox;
  // * is the indirection operator
  // when indirection operator is placed in front of a pointer // variable name, it dereferences the pointer.
  // when you are working with a dereferenced pointer, you are // actually working with the value the pointer is pointing to.
  /*
    Assign 111 to the location pointed by ptrtox,
    will actually assign 111 to x
  */
  *ptrtox = 111; 
  cout << "\nNow, the value of x is: " << x <<endl;
  return 0;
}
/* pointers only hold one kind of value: an memory address
   pointers allow you to indirectly access and modify the variable being ponited to
*/
-----------------------------------------------------------------------------------------------------
/* An array name, without brackedts and a subscripts, actually represents the starting address of the array, that means an array name is a pointer.
   Array names can be used as constant pointers, and pointers can be used as array names.
   Since array elements are stored together in memotry, when you add a value to a pointer, you are actually adding 
   that value times the size of the data type being referenced by the pointer.
   e.g.  if you add one to numbers, you are actually adding 1*sizeof(datatype)
*/
#include<iostream>
using namespace std;

int main()
{
  const int SIZE = 5;
  int numbers[SIZE]={1, 56, 7, 10, 8};
  cout <<"The first element of this array is: " <<*numbers;
  // size of int is 4 bytes
  cout << "\n" << sizeof(*numbers) << endl;
  // *(numbers+1) is actually *(numbers+1*4)   pointer notation
  // *(numbers+2) is actually *(numbers+2*4)   pointer notation
  // array[index] == *(array+index)
  // The * operator has precedence over the + operator, so the //expression *numbers+1 is not equivalent to *(numbers+1)
  cout << "We can use the pointer notation to get the value of array" << endl;
  for(int count=0; count<SIZE; count++)
  {
    cout << *(numbers+count)<< " ";
  }
  return 0;
}
------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

int main()
{
  const int SIZE = 3;
  double nums[SIZE] = {1.9, 7.88, 2.5};
  double *ptr = nullptr;
  ptr = nums; 
  // the name of an array is the starting memory address of it
  // so we don't need the address operator &
  cout << "we are using the pointer notation to display the contents of the array: ";
  cout << endl;
  for(int count=0; count<SIZE; count++)
  {
    cout << *(nums + count) << " ";
  }
  cout << endl;
  //However, we can still use the address operator & to get the address of each // //element
  for(int count=0; count<SIZE; count++)
  {
    ptr = &nums[count];
    cout << *ptr << " ";
  }

  return 0;
}
-----------------------------------------------------------------------------------------------------------------------
// if one address comes before another address in memory, the first address is considered "less than" the second
