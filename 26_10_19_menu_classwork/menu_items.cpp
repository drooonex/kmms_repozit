#include "menu_items.hpp"
#include "menu_functions.hpp"

const Menu::MenuItem Menu::DATABASES = {
    "1 - Базы данных", Menu::show_title, &Menu::ANOTHER_TECHNOLOGIES
};
const Menu::MenuItem Menu::MULTI_THREADED_PROGRAMMING = {
    "2 - Многопоточное программирование", Menu::show_title, &Menu::ANOTHER_TECHNOLOGIES
};
const Menu::MenuItem Menu::NETWORK_TECNOLOGIES = {
    "3 - Сетевые технологии", Menu::show_title, &Menu::ANOTHER_TECHNOLOGIES
};
const Menu::MenuItem Menu::BACK_TO_ANOTHER_TECHNOLOGIES = {
    "0 - Выйти в предыдущее меню", Menu::back, &Menu::ANOTHER_TECHNOLOGIES
};

namespace {
    const Menu::MenuItem* another_technologies_children[] = {
        &Menu::BACK_TO_ANOTHER_TECHNOLOGIES,
        &Menu::DATABASES,
        &Menu::MULTI_THREADED_PROGRAMMING,
        &Menu::NETWORK_TECNOLOGIES
    };
    const int another_techologies_children_size = 
              sizeof(another_technologies_children) / 
              sizeof(another_technologies_children[0]);
}

const Menu::MenuItem Menu::PROGRMMING_LANG = {
    "1 - Изучать языки программирования", Menu::show_title, &Menu::STUDY
};
const Menu::MenuItem Menu::ALGORITMS = {
    "2 - Алгоритмы и структуры данных", Menu::show_title, &Menu::STUDY
};
const Menu::MenuItem Menu::ANOTHER_TECHNOLOGIES = {
    "3 - Другие технологии", 
    Menu::show_menu, 
    &Menu::STUDY, 
    another_technologies_children, 
    another_techologies_children_size
};
const Menu::MenuItem Menu::BACK_TO_MAIN_MENU = {
    "0 - Выйти в главное меню", Menu::back, &Menu::STUDY
};

namespace {
    const Menu::MenuItem* study_children[] = {
        &Menu::BACK_TO_MAIN_MENU,
        &Menu::PROGRMMING_LANG,
        &Menu::ALGORITMS,
        &Menu::ANOTHER_TECHNOLOGIES
    };
    const int study_size = sizeof(study_children) / sizeof(study_children[0]);
}

const Menu::MenuItem Menu::STUDY = {
    "1 - Изучать программирование",
    Menu::show_menu, 
    &Menu::MAIN, 
    study_children, 
    study_size
};
const Menu::MenuItem Menu::EXIT = {
    "0 - Пойти играть в футбол", Menu::exit, &Menu::MAIN
};

namespace {
    const Menu::MenuItem* main_children[] = {
        &Menu::EXIT,
        &Menu::STUDY
    };
    const int main_size = sizeof(main_children) / sizeof(main_children[0]);
}

const Menu::MenuItem Menu::MAIN = {
    nullptr, Menu::show_menu, nullptr, main_children, main_size
};