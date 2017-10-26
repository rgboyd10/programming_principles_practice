int main()
{
  int a = 200000;
  char c = a; //try to squeeze a large into a small char
  int b = c;
  if (a != b) // != means "not equal"
    cout <<  "oops!: " << a << "!=" << b << '\n';
  else
    cout << "Wow ! We have large characters\n";
}
