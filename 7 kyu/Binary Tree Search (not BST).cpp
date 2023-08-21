struct Node {
  int val;
  Node* left{};
  Node* right{};
};

bool search( int number, Node* root ) {
#define V1

#ifdef V1 // iterative
  std::stack< Node* > nodes;
  if ( root ) nodes.push( root );
  while ( !nodes.empty() ) {
    const Node* const temp{ nodes.top() };
    nodes.pop();
    if ( temp->val == number ) return true;
    if ( temp->left ) nodes.push( temp->left );
    if ( temp->right ) nodes.push( temp->right );
  }
  return false;

#elif defined( V2 ) // recursive
  return root && ( root->val == number
    || search( number, root->left )
    || search( number, root->right ));

#endif
}
