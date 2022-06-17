#include <iostream>
#include <string>
#include "RecordStore.h"
using namespace std;

int main(){
    RecordStore Store1=RecordStore("R1shop","Adelaide",25);
    std::cout<<" Sales are "<<get_excesssales(Store1.sales);
}