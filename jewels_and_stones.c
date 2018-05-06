int numJewelsInStones(char * J, char * S) {
  unsigned char cs[58];
  int r = 0;
  memset(cs, 0, 58);
  for (; * J != '\0'; ++J)
    cs[ * J - 65] = 1;
  for (; * S != '\0'; ++S)
    if (cs[ * S - 65] == 1)
      r++;
  return r;
}