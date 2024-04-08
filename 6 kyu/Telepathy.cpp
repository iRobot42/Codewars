int magicShow(std::string s){int n{},b{};for(auto c:s)c==89?n|=1<<b++:b+=c==78;return n;}
