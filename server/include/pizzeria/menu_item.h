#pragma once
#include <string>

class MenuItem {
public:
    MenuItem(std::string id, std::string name, double price, int available);
    virtual ~MenuItem() = default;

    const std::string& id()   const noexcept { return id_; }
    const std::string& name() const noexcept { return name_; }
    double price()            const noexcept { return price_; }
    int available()           const noexcept { return available_; }

    bool orderOne();
    void restock(int count);

    virtual std::string kind() const = 0;
    virtual std::string describe() const;

private:
    std::string id_;
    std::string name_;
    double price_ = 0.0;
    int available_ = 0;
};
