int spinning_wheel( std::string wheel ) {
  const auto c{ count( wheel.cbegin(), wheel.cend(), 'W' ) };
  return !!c * 100 * wheel.size() / ( 2 * wheel.size() - c );
}
