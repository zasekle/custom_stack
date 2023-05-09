//
// Created by jeremiah on 5/9/23.
//

#include <cassert>
#include "stack_tests.h"
#include "custom_stack.h"

void TestSuite::empty_stack() {
    CustomStack<int> s;

    assert(s.empty());
}

void TestSuite::non_empty_stack() {
    CustomStack<int> s;
    s.push(55);

    assert(!s.empty());
}

void TestSuite::push_to_empty_stack() {
    CustomStack<int> s;
    s.push(55);

    assert(s.size() == 1);

    auto rev_val = s.top();
    assert(rev_val.get());
    assert(*rev_val == 55);
}

void TestSuite::push_to_stack() {
    CustomStack<int> s;
    s.push(55);

    assert(s.size() == 1);

    s.push(45);

    assert(s.size() == 2);

    auto rev_val = s.top();
    assert(rev_val.get());
    assert(*rev_val == 45);
}

void TestSuite::pop_from_empty_stack() {
    CustomStack<int> s;

    auto rev_val = s.pop();
    assert(!rev_val.get());
}

void TestSuite::pop_from_stack() {
    CustomStack<int> s;
    s.push(55);
    s.push(45);

    assert(s.size() == 2);

    auto rev_val = s.pop();
    assert(rev_val.get());
    assert(s.size() == 1);
    assert(*rev_val == 45);
}

void TestSuite::top_of_empty_stack() {
    CustomStack<int> s;

    auto rev_val = s.top();
    assert(!rev_val.get());
}

void TestSuite::top_of_stack() {
    CustomStack<int> s;
    s.push(55);
    s.push(45);

    assert(s.size() == 2);

    auto rev_val = s.top();
    assert(rev_val.get());
    assert(s.size() == 2);
    assert(*rev_val == 45);
}
