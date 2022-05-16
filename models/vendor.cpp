#include "vendor.hpp"

Vendor::Vendor(const int v_id, const std::string v_name) : id(v_id), name(v_name) {
}

void Vendor::setId(int const &id) {
    if (id > 0) {
        this->id = id;
    }
}

int Vendor::getId() {
    return this->id;
}

void Vendor::setName(std::string &name) {
    if (name != null && name != "") {
        this->name = name;
    }
}

std::string Vendor::getName() {
    return this->name;
}

Vendor::~Vendor() {
}
