#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char ** argv) {
    using std::cerr;
    using std::cout;
    using std::endl;
    using std::ifstream;

    if (argc != 2) {
        cerr << "Usage: " << argv[0] << " filename.ds\n";
        return 1;
    } else {
        ifstream file;
        file.open(argv[1]);

        if (!file) {
            cerr << "Unable to open file: " << argv[1] << endl;
            return 1;
        }

        char fileChar;
        int stack = 0;
        while (file >> fileChar) {
            switch (fileChar) {
                case '_':
                    stack = 0;
                    break;

                case '+':
                    stack++;
                    break;

                case '-':
                    stack--;
                    break;

                case 'S':
                    cout << char (stack);
                    break;
            }
        }

        file.close();
        return 0;
    }
}
