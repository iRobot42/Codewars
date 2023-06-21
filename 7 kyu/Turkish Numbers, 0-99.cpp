std::string getTurkishNumber( unsigned int n ) {
  const std::vector< std::string >
    ones{ "sıfır", "bir", "iki", "üç", "dört", "beş", "altı", "yedi", "sekiz", "dokuz" },
    tens{ "", "on", "yirmi", "otuz", "kırk", "elli", "altmış", "yetmiş", "seksen", "doksan" };
  return n < 10 ? ones[ n ] : tens[ n / 10 ] + ( n % 10 ? " " + ones[ n % 10 ] : "" );
}
