#ifndef RECORDSTORE_H
#define RECORDSTORE_H
#include <string>

class AbstractRecordStore{
    virtual int get_excesssales();
}

class RecordStore{
protected:
    std::string name;
    std::string address;
    signed int sales;
    
public:

    void set_name(string n) {
        name=n;
    }
    
    string get_name(){
        return name;
    }
    
    void set_address(string a) {
        address=a;
    }
    
    string get_address(){
        return address;
    }
    
    void set_sales(signed int s) {
        sales=s;
    }
    
    signed int get_sales(){
        return sales;
    }
    
    
    RecordStore(string n, string a, signed int s){
        name=n;
        address=a;
        sales=s;
    }
    
    int get_excesssales(int e){
        return e;
    }
    
    
};
#endif // RECORDSTORE_H
