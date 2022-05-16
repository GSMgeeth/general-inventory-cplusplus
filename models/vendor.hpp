#include <iostream>

class Vendor {
private:
    int id;
    std::string name;
public:
    Vendor(int const id, std::string const name);
    void setId(int const &id);
    int getId();
    void setName(std::string &name);
    std::string getName();
    ~Vendor();
};
