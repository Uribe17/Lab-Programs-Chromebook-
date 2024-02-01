#include <iostream?

int main()
{
  int n = 0;          //Instantiate Variables
  cout << "Number?\n";
  // loop through
  string run_again = "yes";
  while (run_again == "yes") {
    cout << "Number?\n";
    cin >> n;
    // Calculate
    if (n % 2 == 0) {
      cout << "n is even";
    } else {
      cout << "n is odd";
    }
    // Run again check
    cout << "Run Again? (yes/no)\n";
    cin >> run_again;
  }
  return 0;
}