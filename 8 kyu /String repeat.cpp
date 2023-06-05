std::string repeat_str( size_t repeat, const std::string& str ) {
  std::string rs;
  while ( repeat-- )
    rs += str;
  return rs;
}
