#include "Base.h"
#include "Derived.h"
#include <string>
#include <iostream>

void foo(Base b) { }
void foo(Derived d) { }
void foo(Base* b) { }
void foo(Derived* d) { }

int main(void) {
         std::cout<<"line1--------"<<std::endl;
   Base* bP = new Base( ); // LINE 1
         std::cout<<"line2--------"<<std::endl;
   Derived* dP = new Derived( ); // LINE 2
         std::cout<<"line3--------"<<std::endl;
   Base b; // LINE 3
         std::cout<<"line4--------"<<std::endl;
   Derived d; // LINE 4
        std::cout<<"line5--------"<<std::endl;

   foo(b); // LINE 5
        std::cout<<"line6--------"<<std::endl;
   foo(d); // LINE 6
    std::cout<<"line7--------"<<std::endl;

   foo((Base) d); // LINE 7
    std::cout<<"line8--------"<<std::endl;
   foo(bP); // LINE 8
    std::cout<<"line9--------"<<std::endl;
   foo(dP); // LINE 9
    std::cout<<"line10--------"<<std::endl;

} // LINE 10 (what is printed as the program completes?
