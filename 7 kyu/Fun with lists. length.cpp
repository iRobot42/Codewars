template< class T >
int length( const Node< T >* head ) {
  int size{};
  while ( head ) ++size, head = head->next;
  return size;
}
