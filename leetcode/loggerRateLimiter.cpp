#include <bits/stdc++.h>

using namespace std;

class Logger {

private:
    unordered_map<string, int> map_next_allowed;
    
public:
    Logger() {}
    
    bool shouldPrintMessage(int timestamp, string message){
        
        if(!map_next_allowed[message]){
            map_next_allowed[message] = 10 + timestamp;
            return true;
        }
        
        else if(map_next_allowed[message] <= timestamp){
            map_next_allowed[message] = timestamp + 10;
            return true;
        }
        else return false;
    }
};

int main(){
    Logger* l = new Logger();
    cout<<l->shouldPrintMessage(1, "foo")<<endl;
    cout<<l->shouldPrintMessage(2, "bar")<<endl;
    cout<<l->shouldPrintMessage(3, "foo")<<endl;
    cout<<l->shouldPrintMessage(8, "bar")<<endl;
    cout<<l->shouldPrintMessage(10, "foo")<<endl;
    cout<<l->shouldPrintMessage(11, "foo")<<endl;
    cout<<l->shouldPrintMessage(12, "bar")<<endl;

    return 0;
}
