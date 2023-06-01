std::string people_with_age_drink( int age ) {
  return "drink " + std::string(
    age < 14 ? "toddy" : age < 18 ? "coke" : age < 21 ? "beer" : "whisky" );
}
