#include <iostream>
using namespace std;

int main(){
    const int SIZE = 3;
    int numbers[SIZE] = {2, 5, 6};
// display original array
    for(auto val: numbers)
    {
        cout << val << endl;
    }
// use referrence (&) to modify an array
    for(int &val: numbers)
    {
        cout << "enter any numbers to change the array: ";
        cin  >> val;
    }
//display new array 
    for(auto val: numbers)
    {
        cout << val << endl;
    }
    return 0;
}
------------------------------------------------------------------------------
#include<iostream> 
using namespace std;

int main(){
    const int SIZE = 5;
    int numbers [SIZE] = {1, 2, 3, 4, 5};
    // to sum the values in an array
    int total = 0;   // initialize accumulator
    for(int count=0; count<SIZE; count++)                
    {
        total += numbers[count];                         
    }
    cout << "The sum of the total is " << total << endl;
    
    return 0;
}
// or use range-based loop
// int total = 0;
// for(int val: numbers)
// total+= val;
--------------------------------------------------------------------------------
//find the highest and lowest number in an array
#include<iostream>
using namespace std;

int main(){
  const int SIZE = 5;
  int numbers[SIZE] = {2, 20, 3, 11, -3};
  int count, highest, lowest;
  highest = numbers[0];
  lowest  = numbers[0];
  for(count=1; count<SIZE; count++)
  {
    if(numbers[count]>highest)
      highest = numbers[count];
  }
  cout << "The highest number is " << highest << endl;
  for(count=1; count<SIZE; count++)
  {
    if(numbers[count]<lowest)
      lowest = numbers[count];
  }
  cout << "The lowest number is " << lowest << endl;
  return 0;
}
---------------------------------------------------------------------------------
//an array element is passed to a function
#include<iostream>
using namespace std;

void showValue(int);
int main(){
  const int SIZE = 5;
  int numbers[SIZE] = {2, 20, 3, 11, -3};
  for(int count=0; count<SIZE; count++)
  {
    showValue(numbers[count]); //each time the function is called, an copy of an array element is passed into the parameter variable num
  }
  return 0;
}
void showValue(int num){
  cout << num << " ";
}
----------------------------------------------------------------------------------
//To pass an array to a function
//just pass the starting address of the array and its size
#include<iostream>
using namespace std;

void showValue(int[], int);
int main()
{
  const int SIZE = 5;
  int numbers[SIZE] = {2, 98, 55, 7, -11};
  showValue(numbers, SIZE);
  return 0;
}
void showValue(int nums[], int array_size)
{
  for(int index=0; index<array_size; index++)
      cout << nums[index] << " ";
}
----------------------------------------------------------------------------------
// array parameters work like reference variables
// they give the function direct access to the original array
// any chnages made with the array parameter are actually made on
// the original array
#include<iostream>
using namespace std;
void showValue(int[], int);
void doubleValue(int[], int);
int main()
{
  const int SIZE = 5;
  int numbers[SIZE]={2, 8, 14, 7, -11};
  cout << "The original array is: ";
  showValue(numbers, SIZE);
  cout << endl;
  doubleValue(numbers, SIZE);
  cout << "\n Now , the array is: ";
  showValue(numbers, SIZE);
  return 0;
}
void showValue(int nums[], int array_size)
{
  for(int index=0; index<array_size; index++)
  {
    cout << nums[index] <<" ";
  }
}
void doubleValue(int nums[], int array_size)
{
  for(int index=0; index<array_size; index++)
  {
    nums[index]*=2;
  }
}
-----------------------------------------------------------------------------
// always use const array parameters to prevent a function from
// making chnages to an array 
#include<iostream>
using namespace std;

void showValue(const int[], int);
int main()
{
  const int SIZE = 7;
  int numbers[SIZE]={1, 7, 99, -5, 23, 56, 4};
  showValue(numbers, SIZE);
  return 0;
}
void showValue(const int nums[], int array_size)
{
  for(int index=0; index<array_size; index++)
  {
    cout<< nums[index] << " ";
  }
}