std::string greet() {
  char 👋[]{ 104,101,108,108,111,32,119,111,114,108,100,33 };
  auto 🌍{ 👋 + sizeof( 👋 ) };
  return { 👋, 🌍 };
}
