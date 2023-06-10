bool is_isogram( std::string str ) {
  for ( size_t i{}; i < str.size(); ++i )
    for ( size_t j{ i + 1 }; j < str.size(); ++j )
      if ( tolower( str[ i ] ) == tolower( str[ j ] ) )
        return false;
  return true;
}
