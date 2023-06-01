std::string howManyDalmatians( int number ) {
  return number <=  10 ? "Hardly any"
       : number <=  50 ? "More than a handful!"
       : number == 101 ? "101 DALMATIONS!!!"
                       : "Woah that's a lot of dogs!";
}
