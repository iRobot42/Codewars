std::string compare( unsigned short a, unsigned short b ) {
  const auto a1{ a/10 }, a2{ a%10 }, b1{ b/10 }, b2{ b%10 };
  return a == b || ( a1 == b2 && a2 == b1 ) ? "100%" :
    a1 != b1 && a1 != b2 && a2 != b1 && a2 != b2 ? "0%" : "50%";
}
