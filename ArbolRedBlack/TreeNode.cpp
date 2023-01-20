#include "TreeNode.h"

template<typename T>
TreeNode<T>::TreeNode(T value) : value_(value) {}

template<typename T>
T TreeNode<T>::value() {
    return value_;
}

template<typename T>
void TreeNode<T>::value(T value) {
    value_ = value;
}

template<typename T>
TreeNode<T>*& TreeNode<T>::left() {
    return left_;
}

template<typename T>
void TreeNode<T>::left(TreeNode<T>* left) {
    left_ = left;
}

template<typename T>
TreeNode<T>*& TreeNode<T>::right() {
    return right_;
}

template<typename T>
void TreeNode<T>::right(TreeNode<T>* right) {
    right_ = right;
}

template<typename T>
inline TreeNode<T>*& TreeNode<T>::parent() {
    return parent_;
}

template<typename T>
inline void TreeNode<T>::parent(TreeNode<T>* parent) {
    parent_ = parent;
}

template<typename T>
inline TreeNodeColor TreeNode<T>::color() {
    return color_;
}

template<typename T>
inline void TreeNode<T>::color(TreeNodeColor color) {
    color_ = color;
}