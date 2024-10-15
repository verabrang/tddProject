#include <gtest/gtest.h>
#include "generation.h"

/**
 * @brief этот тест ничего не тестирует. это стартовый тест, который был написан до написания кода свомого принтера.
 * если этот тест проходит успешно, то конструкторы этого класса реализованны и с созданием объекта всё ок.
 */
TEST(ExampleTests, Creating) {
    generation testedObject;
}

/**
 * @brief этот тест запускает gui-приложение
 */
TEST(generation, Initialization) {
    generation application;
    int argc = 0;
    application.initializeApplication(argc, NULL);
}

