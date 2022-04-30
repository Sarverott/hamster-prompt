#include <iostream>
#include <fstream>
//#include <time.h>

using namespace std;

//small project for better

int main(int argc, char *argv[]) {
    char historyBuffer=NULL;
    if(argc<2) return 1;
    ofstream hamsterStore;
    hamsterStore.open(argv[1], ofstream::out | ofstream::app);
    while(cin.good()&&cout.good()){
        cin.get(historyBuffer);
        hamsterStore<<historyBuffer;
        cout.put(historyBuffer);
    }
    hamsterStore.close();
    return 0;
}
