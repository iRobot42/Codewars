std::string is_sorted_and_how( std::vector< int > array ) {
  return is_sorted( array.cbegin(), array.cend() ) ? "yes, ascending" :
    is_sorted( array.crbegin(), array.crend() ) ? "yes, descending" : "no";
}
