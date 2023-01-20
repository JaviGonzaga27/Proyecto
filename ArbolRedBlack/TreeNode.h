#pragma once

enum class TreeNodeColor {
    Black,
    Red
};

template <typename T>
class TreeNode {
public:
    TreeNode() = default;
    explicit TreeNode(T value);

    T value();
    void value(T value);

    TreeNode<T>*& left();
    void left(TreeNode<T>* left);

    TreeNode<T>*& right();
    void right(TreeNode<T>* right);

    TreeNode<T>*& parent();
    void parent(TreeNode<T>* parent);

    TreeNodeColor color();
    void color(TreeNodeColor color);

private:
    T value_;
    TreeNode<T>* left_ = nullptr;
    TreeNode<T>* right_ = nullptr;
    TreeNode<T>* parent_ = nullptr;
    TreeNodeColor color_ = TreeNodeColor::Black;
};