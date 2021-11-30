#include "std_lib_facilities.h"


/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Christine Hawkins
 */

/*
 Can we declare a non-reference function argument const (e.g., void f(const int);)? What might that mean? Why might
we want to do that? Why don’t people do that often? Try it; write a couple of small programs to see what works.

We can declare a non-reference function argument const, but it prevents us from changing the value of the object passed. If you want to change the value of the object passed, you must use a non-const reference. People use pass-by-const-reference to pass large objects that you don’t need to modify. People don't often declare a non-reference argument const because if it is const, they can't manipulate vectors and other large objects and can't change function objects.
*/


//non const argument
int add(int a, int b)
{
  //can change a to 4
  a=a+2;

  //can change b to 6
  b=b+3;

  //4+6
  return a+b;
}

//non const argument
int addc(const int a, const int b)
{
  //changing a to 4 gives an error since a is constant
  //a=a+2;

  //changing b to 6 gives an error since a is constant
 // b=b+3;

  //returns what's passed in main: 2+3
  return a+b;
}

int main() {


  cout<<add(2,3)<<"\n";

  cout<<addc(2,3)<<"\n";

} 