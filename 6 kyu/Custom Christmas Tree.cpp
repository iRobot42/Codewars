std::string customChristmasTree( const std::string& chars, int n ) {
  std::string tree, trunk{ std::string( n - 1, ' ' ) + "|\n" };
  for ( int row{ 1 }, i{}; row <= n; ++row ) {
    tree += std::string( n - row, ' ' );
    for ( int leaf{ 1 }; leaf <= row; ++leaf )
      tree += chars[ i++ % chars.size() ], tree += ' ';
    tree.back() = '\n';
  }
  n /= 3; while ( n-- ) tree += trunk;
  return tree.pop_back(), tree;
}
