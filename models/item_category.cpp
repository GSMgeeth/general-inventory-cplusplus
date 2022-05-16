#include "item_category.hpp"

ItemCategory::ItemCategory() {
    this->quantity = 0;
    this->unit_price = 0.0;
}

ItemCategory::ItemCategory(int const ic_id, std::string const ic_name, long const ic_quantity, double const ic_unit_price) {
    this->id = ic_id;
    this->name = ic_name;
    this->quantity = ic_quantity;
    this->unit_price = ic_unit_price;
}

long ItemCategory::addQuantity(long const adding_quantity) {
    this->quantity += adding_quantity;

    return quantity;
}

ItemCategory::~ItemCategory() {
}
