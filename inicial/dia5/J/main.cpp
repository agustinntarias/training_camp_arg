#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


struct node {
    char letter;
    int value;
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char, node> graph;
    // string s = "uayd", t = "uyxd";
    string s, t;
    cin >> s;
    cin >> t;
    // int n = 3;
    int n;
    cin >> n;
    // read graph
    while(n--) {
        char init, end;
        int weight;
        cin >> init >> end >> weight;
        if (graph.find(init) != graph.end() && graph[init].letter == end){
            if (graph[init].value > weight) graph[init] = node{end, weight};
        } else graph[init] = node{end, weight};
    }
    // graph['a'] = node{'x', 8};
    // graph['x'] = node{'y', 13};
    // graph['d'] = node{'c', 3};

    // // print graph
    // cout << endl;
    // auto it = graph.begin();
    // while (it != graph.end()) {
    //     cout << (it -> first) << " -> " << (it -> second).letter << " " << (it -> second).value << endl;
    //     it++;
    // }
    /////
    string result;
    if (s.size() != t.size()) cout << -1 << "\n";
    else {
        bool not_possible = false;
        int total = 0;
        for(int i = 0; i < s.size(); i++) {
            if (s[i] != t[i]) {
                // DBG(i);
                // DBG(s[i]);
                // DBG(t[i]);

                // find how much it takes to replace s[i]
                int replace_s = 0;
                auto iterator = graph.find(s[i]);
                while(iterator != graph.end() && (iterator -> second).letter != t[i]) {
                    replace_s += (iterator->second).value;
                    iterator = graph.find((iterator -> second).letter);
                }
                if ((iterator-> second).letter == t[i]) replace_s+= (iterator->second).value;
                else replace_s = -1;  // if replace_s = -1, we havent found a path to t[i]
                // DBG(replace_s);

                // repeat with t[i]
                int replace_t = 0;
                auto iterator2 = graph.find(t[i]);
                while(iterator2 != graph.end() && (iterator2 -> second).letter != s[i]) {
                    replace_t += (iterator2->second).value;
                    iterator2 = graph.find((iterator2 -> second).letter);
                }
                if (iterator2 != graph.end()) replace_t+= (iterator2->second).value;
                else replace_t = -1;  // if replace_t = -1, we havent found a path to s[i]
                // DBG(replace_t);

                // we add the amount
                if (replace_s == -1 && replace_t == -1) not_possible = true;
                else if (replace_s == -1) {
                    result = result + s[i];
                    total += replace_t;
                }
                else {
                    result = result + t[i];
                    total += replace_s;
                }

            } else result = result + s[i];
        }
        cout << total << "\n";
        cout << result << "\n";
    }

}

