#ifndef RBTREE
#define RBTREE
#include "global.h"
#include <vector>
class node
{
    class vap
    {
    public:
        node *_lptr;
        ElementType _value;
    };

public:
    std::vector<vap> _vaps;
    node *_rptr;
};

using Node = node;
class RBTree
{
public:
    RBTree();
    ~RBTree();

private:
    Node *_nodes;
};
#endif /* RBTREE */
