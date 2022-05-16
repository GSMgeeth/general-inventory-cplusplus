#include <iostream>

#include "item_category.hpp"

class ItemUnit {
private:
    long id;
    std::string name;
    ItemCategory category;
    long quantity;
    double unit_price;
    
public:
    ItemUnit(long const new_id, std::string const new_name, ItemCategory const new_category);
    long addQuantity(long const adding_quantity);
    ~ItemUnit();
};
