#include <bits/stdc++.h>
using namespace std;

class node {
public:
    string n;
    node* nxt;
    node* prv;
    
    node(string& s) {
        n = s;
        nxt = NULL;
        prv = NULL;
    }
};

class book {
public:
    node* h;
    node* t;
    
    book() {
        h = NULL;
        t = NULL;
    }
    
    void add(string& s) {
        node* nw = new node(s);
        if (!h) {
            h = t = nw;
        } else {
            t->nxt = nw;
            nw->prv = t;
            t = nw;
        }
    }
    
    int find(string& p) {
        int cnt = 0;
        node* cur = h;
        while (cur) {
            if (cur->n.find(p) != string::npos) {
                cnt++;
            }
            cur = cur->nxt;
        }
        return cnt;
    }
};

int main() {
    book bk;
    
    int n;
    cin >> n;
    cin.ignore(); 

    while (n--) {
        string op, s;
        getline(cin, op);
        
        stringstream ss(op);
        if (ss >> op >> s) {
            if (op == "add") {
                bk.add(s);
            } else if (op == "find") {
                cout << bk.find(s) << endl;
            }
        } else {
            cout << "LOI!! XIN NHAP LAI" << endl;
            n++;
        }
    }
    
    return 0;
}

