#include "rbtree.h"

RBTree::RBTree()
{
    _nodes = new Node();
}

RBTree::~RBTree()
{
    delete _nodes;
}