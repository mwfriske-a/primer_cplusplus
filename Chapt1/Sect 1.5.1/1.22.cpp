#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book, sumBook;
    if(std::cin >> book){
        sumBook += book;
        while(std::cin >> book){
            sumBook += book;
        }
    }    
    std::cout << sumBook << std::endl;
    
    return 0;    
}
