#include <iostream>

#include "menu_functions.hpp"


const Menu::MenuItem* Menu::show_menu(const MenuItem *current){
    std::cout << "Вас приветствует обучайка" << std::endl;
    for (int i = 1; i < current->children_count; ++i){
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Обучайка > ";

    int user_input;
    std::cin >> user_input;
    std::cout << std::endl;

    return current->children[user_input];
}

const Menu::MenuItem* Menu::exit(const MenuItem *current){
    std::exit(0);
}

const Menu::MenuItem* Menu::show_title(const MenuItem *current){
    std::cout << current->title << std::endl;
    return current->parent;
}

const Menu::MenuItem* Menu::back(const MenuItem *current){
    return current->parent->parent;
}