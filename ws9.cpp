#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>  // for atoi

using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        ifstream file(_filename);
        if (!file.is_open()) {
            cerr << "Error: could not open file " << _filename << endl;
            return;
        }

        string line;
        while (getline(file, line)) {
            try {
                int value = stoi(line);
                records.push_back(value);
            } catch (...) {
                cerr << "Skipping invalid record: " << line << endl;
            }
        }
        file.close();
    }
};

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <filename>" << endl;
        return 1;
    }

    Records myRecords;
    string filename = argv[1];

    RecordsManager recordM(filename);
    recordM.read(myRecords);

    int sum = 0;
    for (int val : myRecords) {
        sum += val;
    }

    cout << "Sum of valid records = " << sum << endl;
    return 0;
}
