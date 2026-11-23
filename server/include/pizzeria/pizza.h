#pragma once
#include <string>

class Pizza {
public:
    Pizza(std::string id, std::string name, int sizeCm, double price, int available);

    const std::string& id()   const noexcept { return id_; }
    const std::string& name() const noexcept { return name_; }
    int sizeCm()              const noexcept { return sizeCm_; }
    double price()            const noexcept { return price_; }
    int available()           const noexcept { return available_; }

    bool orderOne();
    void restock(int count);
    std::string describe() const;

private:
    void validate() const;

    std::string id_;
    std::string name_;
    int sizeCm_ = 0;
    double price_ = 0.0;
    int available_ = 0;
};
