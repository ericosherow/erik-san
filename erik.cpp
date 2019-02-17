#include <iostream>
struct Erik {
    Erik(int i) {
        eriksan = i ? new Erik(i-1) : nullptr;
    }
    ~Erik() { delete eriksan; }    
    
    Erik *eriksan;

};

std::ostream &operator<<(std::ostream &is, const Erik &erik) {
    is << "Erik";
    if (erik.eriksan)
        is << " -> " << *erik.eriksan;
    return is;
}

int main() {
    Erik eric(23091);
    std::cout << eric << std::endl;
}
