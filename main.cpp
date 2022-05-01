// Hamster Prompt
// Sett Sarverott @ 2022
#include <iostream>
#include <fstream>
#include <time.h>
#include <sstream>

using namespace std;

//small project for better preserve shell history in linux terminals

void printHelp(char *execpath){
    cout<<R"MANUAL()
    HAMSTER-PROMPT v1.0 small project for better preserve shell history in linux terminals
    Copyright (C) 2022  Sett Sarverott (sett@sarverott.com)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    ### REPO URL ###
    https://github.com/Sarverott/hamster-prompt

    ### USAGE ###"
    hamster-prompt <storeFile:path> [<storeFileHeadComment:string> [<errorLogPath:path> [<loggingRecordFile:path>]]]

    ### ARGUMENTS ###
    storeFile => path where to store history

    )MANUAL"<<endl;
}
struct streamsRootCord{
    ofstream orderStory;
    ofstream debug;
    ofstream logger;
    ostringstream out;
    istringstream in;
    istringstream error;
    istringstream logdata;


    streambuf *promptPointer;
}

streamsRootCord squeekNet;

void setup(){//initRodentsForum
    cin.clear();
    cin.tie(&squeekNet.out);//prompt-load_human-cout
    cout.clear();
    squeekNet.in.tie(&cout);//shell-print_human-cin
    squeekNet.error.tie(&cerr);
    squeekNet.logdata.tie(&clog);
    squeekNet.tie(&squeekNet.in);
}

int main(int argc, char *argv[]){
    //ofstream filestr;
    //cin
    return 0;
}
/*
int main(int argc, char *argv[]) {
    char historyBuffer=0,
    failsData=0,
    logsData=0;
    if(argc<2||(argv[1][0]=='-'&&argv[1][1]=='h')){
        printHelp(argv[0]);
    }
    ofstream hamsterStore, errorLog, infoLog;
    hamsterStore.open(argv[1], ofstream::app);
    if(argc>3)errorLog.open(argv[3], ofstream::app);
    if(argc>4)infoLog.open(argv[4], ofstream::app);
    if(argc>2)hamsterStore<<"#"<<argv[2]<<endl;
    while(!cin.eof()&&cout.good()){
        if(cin.get(historyBuffer)){
            hamsterStore<<historyBuffer;
            cout.put(historyBuffer);
        }
        //if(cerr.get(historyBuffer)&&argc>3){
        //    errorLog<<
        //}
        //if(){
        //
        //}
    }
    hamsterStore.close();
    errorLog.close();
    infoLog.close();
    return 0;
}
*/
