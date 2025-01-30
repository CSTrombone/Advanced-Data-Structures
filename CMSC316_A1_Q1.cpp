#include <iostream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

struct Personal_record {
    string first_name;
    string last_name;
    string ID;
}; 

void traverse(vector<Personal_record> &record) {
    for (vector<Personal_record> :: iterator it = record.begin(); it != record.end(); it++) { 
        cout << left << "-------------------------------------------------------------" << endl; //formatting
        cout << left << setw(15) << "Last Name: " << it -> last_name << endl  //use of 'iterator ->' to access item in record
             << left << setw(15) << "First Name: " << it -> first_name << endl 
             << left << setw(15) << "ID: " << it -> ID << endl;
    }
}

int main(){
    ifstream file;
    vector<Personal_record> record_list; 

    file.open("data.txt"); //open file to reand into vector

    if(file.fail()){ //Exepction handling in case file can't be opened for some reason
        cout << "Could not open file!\n";
        return 1;
    }

    string line; //full line to read into struct vector

    vector<string> sortV; //vector to help with alphebetical sorting

    while(!file.eof()){ //read file into sort vector
        getline(file, line); //separates a line of text
        sortV.push_back(line); //pushes line of test into the sorting vector
    }

    sort(sortV.begin(), sortV.end()); //this function sorts ascending acalphabetically  

    file.close(); //file nolonger needed

    vector<string> temp; //temporary vector for populating 'record_list'

    for(string s : sortV){
        string del = ",";
        if (!s.empty()) {
            int begin = 0;
            do {
                int index = s.find(del, begin); //Find the delimiter
                if (index == string::npos) { //Leaves loop if there is no position
                    break;
                }
                int length = index - begin; //determines length of the word found
                temp.push_back(s.substr(begin, length)); //pushes word into the temporary vector
                begin += (length + del.size()); //sets new start point for the next word
            } while (true);
            temp.push_back(s.substr(begin)); //pushes substring into temporary vector
        }
    }

    int i = 0;
    while(i < temp.size()){
        record_list.push_back({temp[i], temp[++i], temp[++i]}); //push the strings listed in the temporary vector into the designated items of record_list
        i++;
    }


    traverse(record_list); //the traverse function used for printing the list of names and IDs

    return 0;
}