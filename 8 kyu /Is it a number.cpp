bool is_digit( std::string s ) {
  std::istringstream ss( s );
  double number;
  ss >> number;
  return ss && ss.eof();
}
