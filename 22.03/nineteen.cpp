#include <string>
#include <cstdlib>
#include <iostream>
#include <algorithm>

/*
 * Desafio C - Codeforces
 * nineteen
 */

int cnt[256];

using namespace std;

int main()
{
    string word;

    cin >> word;

    for (int i = 0; i < word.size(); ++i)
        ++cnt[word[i]];

    int ans = cnt['i'];

    ans = min(ans, cnt['t']);
    ans = min(ans, (cnt['n'] - 1) / 2);
    ans = min(ans, cnt['e'] / 3);

    cout << ans << endl;

    return EXIT_SUCCESS;
}
