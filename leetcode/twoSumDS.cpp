#include <bits/stdc++.h>
using namespace std;


class TwoSum {
unordered_map<long, int> m;
public:
    TwoSum() {
        
    }
    
    void add(int number) {
        m[number]++;
    }
    
    bool find(int value) {
        for(auto i = m.begin(); i != m.end(); i++){
            
            unordered_map<long, int>::iterator itr = m.find(value - i->first);
            if(itr == m.end())
                continue;
        
            if(itr->first != i->first || itr->second >= 2) return true;
        }

        return false;
    }
};

/**
 * Your TwoSum object will be instantiated and called as such:
 * TwoSum* obj = new TwoSum();
 * obj->add(number);
 * bool param_2 = obj->find(value);
 */


int main(){
	TwoSum *obj = new TwoSum();
	obj->add(1);
	obj->add(2);
	obj->add(3);
	cout<<obj->find(4)<<endl;
	cout<<obj->find(5)<<endl;
	cout<<obj->find(6)<<endl;
	return 0;
}
