//
// Created by jeremiah on 5/9/23.
//

#pragma once

#include <iostream>

class TestSuite {
public:
    static void run_all_tests() {
        std::cout << "Running stack tests.\n";

        empty_stack();
        non_empty_stack();
        push_to_empty_stack();
        push_to_stack();
        pop_from_empty_stack();
        pop_from_stack();
        top_of_empty_stack();
        top_of_stack();

        std::cout << "Successfully completed stack tests.\n";
    }

private:
    static void empty_stack();

    static void non_empty_stack();

    static void push_to_empty_stack();

    static void push_to_stack();

    static void pop_from_empty_stack();

    static void pop_from_stack();

    static void top_of_empty_stack();

    static void top_of_stack();

};
