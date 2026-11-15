/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
/*好逻辑 */
#include <iostream>
#include <malloc.h>
#include <cstring>  
    namespace ns1 {
    int value = 10;
    void hello() {
        std::cout << "INS\n";}
    }

    namespace ns2 {
    int value = 5;
    void hello() {
        std::cout << "GNSS\n";}
    }
int main()
{
    ns1::hello() ;
    std::cout<< ns2::value ;
}