std::string greet( const std::string& name, const std::string& owner ) {
  return name == owner ? "Hello boss" : "Hello guest";
}
