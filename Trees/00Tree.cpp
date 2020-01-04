class Tree
{
    struct Node;
    typedef string Type;
    typedef list<Node*> List;
    typedef List::iterator LIt;
    List _nodes;
public:
    class Iterator;
    Tree();
    Tree(const Tree&);
    Tree(const Type&);
    Tree(const Typde&, const list<Tree*>&);
    ~Tree();
    Tree& operator=(const Tree& t);
    void clear();
    Iterator begin();
    Iterator end();
    friend class Iterator
    {
        Tree* _tree;
        LIt _lit;
    public:
        Iterator();
        Iterator(const Iterator&);
        Iterator(Tree*, Node* = 0);
        Iterator(Tree*,LIt);
        void operator=(const Iterator& it);
        bool operator==(const Iterator& it);
        bool operator!=(const Iterator& it);
        Iterator& operator++();
        Iterator& operator++(int);
        Type& operator*() const;
        bool operator!();
        friend class Tree;
    };
};


struct Tree::Node
{
    Type _;
    List _children;
    Node* _parent;
    Node(Type=Type(),Node* =0);
};



















