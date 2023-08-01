std::tuple<int, int, int> racePodium( int blocks ) {
  const int P1{ --blocks / 3 + 2 };
  const int P2{ P1 - 1 - ( ++blocks == 7 )};
  const int P3{ blocks - P1 - P2 };
  return std::make_tuple( P2, P1, P3 );
}
