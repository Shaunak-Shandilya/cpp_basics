#include <iostream>
#include <string>

class Entity {
public:
    std::string GetName() { return "Entity"; } // Non-virtual
};

class Player : public Entity {
private:
    std::string m_Name;
public:
    Player(const std::string& name) : m_Name(name) {}
    std::string GetName() { return m_Name; } // No override needed (not virtual)
};

void PrintName(Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}

int main() {
    Entity* e = new Entity();
    std::cout << e->GetName() << std::endl; // Outputs "Entity"

    Player* p = new Player("Shaunak");
    std::cout << p->GetName() << std::endl; // Outputs "Shaunak"

    PrintName(e); // Outputs "Entity"
    PrintName(p); // Outputs "Entity" (because GetName is not virtual)

    delete e;
    delete p;
    std::cin.get();
    return 0;
}
