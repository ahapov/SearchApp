#include <dirent.h>
#include <iostream>

int main() {
  using namespace std;
  DIR *directory;   // creating pointer of type dirent
  struct dirent *x; // pointer represent directory stream
  cout << "Please enter file name with its extension" << std::endl;
  string s; // declaring string variable
  cin >> s;
  bool result = false;
  if ((directory = opendir("C:\\")) != NULL) { // check if directory  open
    while ((x = readdir(directory)) != NULL) {
      {
        if (s == x->d_name) {
          result = true;
          break;
        }
      }
    }
    closedir(directory);
  }
  if (result) {
    cout << "file is present" << endl;
  } else {
    cout << "file is not present" << endl;
  }
}
