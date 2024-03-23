#include <iostream>
#include <unordered_set>

int main()

{
    int length;
    std::cin >> length;
    typedef std::unordered_set<int> IntSet;
    IntSet coll;
    int number = 0;
    for (int i = 0; i < length; i++) {
        std::cin >> number;
        coll.insert(number);

    }
    std::cout << coll.size();
}
