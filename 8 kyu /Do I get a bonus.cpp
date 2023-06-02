std::string bonus_time( int salary, bool bonus ) {
  return "$" + std::to_string( salary * ( bonus ? 10 : 1 ) );
}
