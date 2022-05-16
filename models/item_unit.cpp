#include "item_unit.hpp"

ItemUnit::ItemUnit(long const new_id, std::string const new_name, ItemCategory const new_category) {
    this->id = new_id;
    this->name = new_name;
    this->category = new_category;
    this->quantity = 0;
    this->unit_price = 0.0;
}

long ItemUnit::addQuantity(long const adding_quantity) {
    this->quantity += adding_quantity;

    return quantity;
}

ItemUnit::~ItemUnit() {
}
