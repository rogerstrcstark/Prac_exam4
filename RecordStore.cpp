#include "RecordStore.h"

void RecordStore::set_name(std::string n){
    name=n;
}

std::string RecordStore::get_name(){
    return name;
}

void RecordStore::set_address(std::string a){
    address=a;
}

std::string RecordStore::get_address(){
    return address;
}

void RecordStore::set_sales(signed int s){
    sales=s;
}

signed int RecordStore::get_sales(){
    return sales;
}
 int RecordStore::get_excesssales(int e){
     return e;
     }
