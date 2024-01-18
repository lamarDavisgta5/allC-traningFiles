void result ( double S1 , double S2 , double P1 , double P2) {
  std :: cout << " the area for squar one is " << S1 << '\n';
  std :: cout << " and the envoierment for squar one is " << P1 << '\n';
  std :: cout << " the area for squar two is " << S2 << '\n';
  std :: cout << " and the envoierment for squar two is " << P2 << '\n';
  std :: cout << " are the areas  Equal ? " << '\n';
  std :: cout << isEqual( S1 , S2 );
  std :: cout << " what about envoierments ? " << '\n';
  std :: cout << isEqual2( P1 , P2 ) << '\n'; 
  std :: cout << " the area for one in octal is " << std :: oct << S1 << '\n';

  std :: cout << " the area for two on octal is " << std :: oct << S2 << '\n';

  std :: cout << " the envoierment for one in octal is " << std :: oct << P1 << '\n';

  std :: cout << " the envoierment for two on octal is " << std :: oct << P2 << '\n';

  std :: cout << " the area for one in hexadsimal is " << std :: hex << S1 << '\n';

  std :: cout << " the area for two on hexadsimal is " << std :: hex << S2 << '\n';

  std :: cout << " the envoierment for one in hexadsimal is " << std :: hex << P1 << '\n';

  std :: cout << " the envoierment for two on hexadsimal is " << std :: hex << P2 << '\n';

  std :: cout << " the area for one in hexadsimal is " << std :: hex << S1 << '\n';

  std :: cout << " the area for two on hexadsimal is " << std :: hex << S2 << '\n';

  std :: cout << " the envoierment for one in hexadsimal is " << std :: hex << P1 << '\n';

  std :: cout << " the envoierment for two on hexadsimal is " << std :: hex << P2 << '\n';

  std :: cout << " the area for one in binary is " << std :: bitset<20> { S1 } << '\n';

  std :: cout << " the area for two on binary is " << std :: bitset<20> { S2 } << '\n';
  
  std :: cout << " the envoierment for one in binary is " << std :: bitset<20> { P1 } << '\n';

  std :: cout << " the envoierment for two on binary is " << std :: bitset<20> { P2 } << '\n';





}
