// Copyright 2021 GHA Test Team
#include <iostream>
#include <string>
#include "generateText.h"

int main() {
    TextGenerator t = TextGenerator("Text.txt", 2);
    std::string text = t.CreateText(1000);
    std::cout << text;
}
