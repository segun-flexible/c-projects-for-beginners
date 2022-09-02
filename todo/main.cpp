#include <iostream>
#include <vector>
using namespace std;

void displayOptionMessage(){
    cout <<endl <<endl<< "********* WELCOME TO C++ TODO APP ********* \n"
        << "Choose An Option \n"
        << "1. Insert New Todo \n"
        << "2. Remove Todo By Position \n"
        << "3. View All Todo \n"
        << "4. Exit Todo \n";

};

int main(){

    vector <string> todo;
    int isRunning = true;
    int optionChoose;
    string text;
    int index;

    while(isRunning){
        displayOptionMessage();
        cin >> optionChoose;

        switch (optionChoose)
        {
        case 1:
            cout << endl << "Enter Your Todo \n";
            cin.ignore();
            getline(cin,text);

            //Push It To Array
            todo.push_back(text);
            cout << endl << "New Todo Is Added: Size => " << todo.size() <<endl;
            break;
        

        case 2:
            cout << endl << "Insert The Todo To Removed By Index \n";
            for(int i = 0; i < todo.size(); i++){
                cout << i + 1 << ". " << todo[i] <<endl;
            };

            cin >> index;

            todo.erase(todo.begin() + (index - 1));
            cout << endl << "Todo At Position "<<index<<" Is Removed";
            break;

        case 3:
            cout << endl << "Your Todos List \n";
            for(int i = 0; i < todo.size(); i++){
                cout << i + 1<< ". " << todo[i] <<endl;
            };
            break;

        default:
            isRunning = !isRunning;
            break;
        }
    };


    return 0;
}