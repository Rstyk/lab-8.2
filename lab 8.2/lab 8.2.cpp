#include <iostream>
#include <string>

using namespace std;

int Count(const string S)
{
    string word;
    int count = 0;

    size_t start = 0, end;

    while (start < S.length())
    {
        while (start < S.length() && (S[start] == ' ' || S[start] == '\t' || S[start] == '\n'))
            start++;

        if (start >= S.length())
            break;

        end = start;
        while (end < S.length() && !(S[end] == ' ' || S[end] == '\t' || S[end] == '\n'))
            end++;

        word = S.substr(start, end - start);
         if (!word.empty() && word[0] == 'b')
            count++;

        start = end;
    }
    return count;
}
int main()
{
    cout << "Enter a string: " << endl;
    string S;
    getline(cin, S);

    int result = Count(S);

    cout << "Number: " << result << endl;

    return 0;
}
