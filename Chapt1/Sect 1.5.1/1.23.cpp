#include <iostream>
#include "Sales_item.h"

int main(){
    Sales_item sum;    
    if(std::cin >> sum){
        Sales_item trans;        
        int cnt=1;
        while(std::cin >> trans){
            if(sum.isbn() == trans.isbn()){
                sum += trans;                          
                ++cnt;
            }else{
                std::cout << sum << " Total of tranactions " << cnt << std::endl;
                sum = trans;
                cnt = 1;
            }            
        }
        std::cout << sum << " Total of tranactions " << cnt << std::endl;
        return 0;    
    }else{
        std::cerr << "No data!" << std::endl;
        return -1;        
    }
    return 0;
}
