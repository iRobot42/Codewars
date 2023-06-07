std::string abbrevName( std::string name ) {
  return { ( char )toupper( name.front() ), '.',
           ( char )toupper( name[ name.find( ' ' ) + 1 ] ) };
}
