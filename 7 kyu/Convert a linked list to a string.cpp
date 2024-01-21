std::string stringify( Node* list ) {
  std::string s;
  while ( list )
    s += std::to_string( list->data ) + " -> ",
    list = list->next;
  return s + "nullptr";
}
