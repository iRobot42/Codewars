std::string howManyDalmatians( int dogs ) {
  return dogs <= 10 ? "Hardly any"
       : dogs <= 50 ? "More than a handful!"
       : dogs == 101 ? "101 DALMATIONS!!!"
       : "Woah that's a lot of dogs!";
}
