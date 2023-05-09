//
// Created by jeremiah on 5/9/23.
//

#pragma once

#include <memory>

template <typename T>
class CustomStack {
public:

    [[nodiscard]] size_t size() const {
        return s_size;
    }

    [[nodiscard]] bool empty() const {
        return s_size == 0;
    }

    void push(const T& val) {
        std::unique_ptr<T> new_val = std::make_unique<T>(val);
        Node* new_node = new Node {
            std::move(new_val)
        };

        new_node->next = n;
        n = new_node;

        s_size++;
    }

    std::unique_ptr<T> pop() {
        if (!n) {
            return nullptr;
        }

        Node* current_node = n;

        std::unique_ptr<T> ret_val = std::make_unique<T>(*current_node->value);

        n = n->next;
        delete current_node;

        s_size--;
        return ret_val;
    }

    std::unique_ptr<T> top() {
        if (!n) {
            return nullptr;
        }

        std::unique_ptr<T> ret_val = std::make_unique<T>(*n->value);
        return ret_val;
    }

private:

    struct Node {
        std::unique_ptr<T> value = nullptr;
        Node* next = nullptr;

        Node() = delete;

        explicit Node(std::unique_ptr<T>&& _value) : value(std::move(_value)) {}
    };

    Node* n = nullptr;

    size_t s_size = 0;
};