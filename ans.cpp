#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl '\n'
#define fileio(in, out) freopen(in, "r", stdin); freopen(out, "w", stdout)
#define io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
const int mod = 1000000007;
const int mod2 = 998244353;
#pragma endregion

const int N = 100005;

int n, m, k, incoming, outgoing, inside, ans, cost, saving;

struct deli {
    int x1, y1, x2, y2;
};

deli arr[N];
vector<int> in[N], out[N], rin[N], rout[N];

signed main() {
    io;
    cin >> n >> m >> k;
    for (int i=0; i<k; i++) {
        cin >> arr[i].x1 >> arr[i].y1 >> arr[i].x2 >> arr[i].y2;
        if (arr[i].y1 > arr[i].y2) {
            swap(arr[i].x1, arr[i].x2);
            swap(arr[i].y1, arr[i].y2);
        }
        cost += 2 * (abs(arr[i].x1 - arr[i].x2) + abs(arr[i].y1 - arr[i].y2));
        int dist = abs(arr[i].x1 - arr[i].x2) / 4;  // maximum detour

        // lowest y where it is profitable
        int l = max(0ll, arr[i].y1 - dist); 
        // highest y where it is profitable
        int r = min(m+1, arr[i].y2 + dist); 
        
        in[l].push_back(i); // when to insert it into group
        out[r].push_back(i);    // when to exit
        rin[arr[i].y1].push_back(i);    // last index that increases
        rout[arr[i].y2].push_back(i);   // 1 before first index that decreases
    }

    // add all roads that starts increasing at 0 and below
    for (auto j : in[0]) {
        incoming++;
        saving += abs(arr[j].x1 - arr[j].x2) - 4 * arr[j].y1;
    }

    for (int i=1; i<=m; i++) {
        // consider taking this road
        
        // first, handle increases and decreases of deliveries that was already added
        saving += 4 * incoming; // for each road that is increasing, the 'profit' is increased by 4
        saving -= 4 * outgoing; // same but reverse

        // then, insert deliveries that start increasing here
        for (auto j : in[i]) {
            incoming++;
            saving += abs(arr[j].x1 - arr[j].x2) - 4 * abs(i - arr[j].y1);
        }

        // 'saving' here is the amount we save when we take this road
        // so maintain maximum
        ans = max(ans, saving);

        // then, insert roads that start decreasing from next road onwards
        outgoing += rout[i].size();

        // then, remove roads that stop increasing from next road onwards
        incoming -= rin[i].size();

        // then, remove roads that stop being profitable from next road onwards
        for (auto j : out[i]) {
            outgoing--;
            saving -= abs(arr[j].x1 - arr[j].x2) - 4 * abs(i - arr[j].y2);
        }
    }
    // final answer is cost without taking anything minus saving by taking one road
    cout << cost - ans << endl;