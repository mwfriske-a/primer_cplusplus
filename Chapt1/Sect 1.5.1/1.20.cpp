#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item book;
    if(std::cin >> book){
        std::cout << book << std::endl;
        while(std::cin >> book){
            std::cout << book << std::endl;
        }
    }    
    return 0;    
}
