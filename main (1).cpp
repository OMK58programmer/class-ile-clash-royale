/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;
class karakter{
    public:
    string adi;
    int can;
    void kosma(){
        cout<< adi <<"kosuyor" <<endl;
        
        
    }
    
    
    
};







int main()
{
karakter karakter1;
karakter1.adi = "mini pekka";
karakter1.can = 4200;

karakter karakter2;
karakter1.adi = " pekka";
karakter1.can = 8000;

cout<<"karakter1:"<<karakter1.adi<<endl;
cout<<"karakter2:"<<karakter2.adi;

karakter1.kosma();
karakter2.kosma();

























    
    return 0;
}