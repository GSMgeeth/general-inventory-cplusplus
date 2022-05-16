#include <iostream>

class ItemCategory {
private:
    int id;
    std::string name;
    long quantity;
    double unit_price;

public:
    ItemCategory();
    ItemCategory(int const ic_id, std::string const ic_name, long const ic_quantity = 0, double const ic_unit_price = 0.0);
    long addQuantity(long const adding_quantity);
    ~ItemCategory();
};
