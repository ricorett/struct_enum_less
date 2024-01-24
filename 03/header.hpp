#include <iostream>
#include <string>


struct address{
    std::string city;
    std::string street;
    int houseNumber;
    int apartNumber;
    int index;
};

void input_first(address& first){
    first.city = "Moscow";
    first.street ="Sedova";
    first.houseNumber= 3;
    first.apartNumber= 1;
    first.index=110110;
}

void input_second(address& second){
    second.city = "Zharkovo";
    second.street ="Zhasminovaya";
    second.houseNumber= 17;
    second.apartNumber= 1;
    second.index=142100;
}

void output(address adr){
    std::cout << "City: " << adr.city << std::endl;
    std::cout << "Street: " << adr.street << std::endl;
    std::cout << "House number: " << adr.houseNumber << std::endl;
    std::cout << "Apartment number: " << adr.apartNumber << std::endl;
    std::cout << "Index: " << adr.index << std::endl;
}