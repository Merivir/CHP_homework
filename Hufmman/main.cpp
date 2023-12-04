#include <iostream>
#include <string>
#include "HuffmanTree.hpp"

int main() {
    HuffmanTree myTree;
    std::string text{"This is my first code"};
    myTree.buildTree(text);
    myTree.printTree();

    return 0;
}
