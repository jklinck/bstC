struct tree{
    int data;
    struct tree* left;
    struct tree* right;
};

void insert(struct tree** head, int nodeData);