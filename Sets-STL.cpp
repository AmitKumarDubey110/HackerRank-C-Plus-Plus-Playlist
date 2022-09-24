#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int c,t,n;
    scanf("%d",&n);
    set<int> ns;
    while(n--) {
        scanf("%d %d",&c,&t);
        switch(c) {
            case 1:
                ns.insert(t);
                break;
            case 2:
                ns.erase(t);
                break;
            case 3:
                if (ns.find(t)!=ns.end())
                    cout << "Yes"<<endl;
                else
                    cout <<"No"<<endl;
                break;
            default:
                cout<<"invalid switch value: "<<c<<endl;
                
        }
    }
       
    return 0;
}



