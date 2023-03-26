#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <queue>
#include <stack>
#include <string.h>
#include <climits> // INT_MAX, INT_MIN

#define endl "\n"

int n, numOfAlpha, ans;
char str[15][10];
bool alpha[26];
int alphaToNum[26];
int alphaIndex[10];
bool chk[26];
bool num[10];

using namespace std;

void f(int index)
{
    if (index == numOfAlpha)
    {
        /*
        for (int i = 0; i < 26; i++)
        {
            if (alpha[i])
            {
                char a = i + 65;
                cout << a << ": " << alphaToNum[i] << endl;
            }
        }
        */
        int sum, result;
        sum = result = 0;
        for (int i = 0; i < n; i++)
        {
            int mul = 1;
            int temp = 0;
            int length = strlen(str[i]);
            for (int j = length - 1; j >= 0; j--)
            {
                int index = str[i][j] - 65;
                temp += mul * alphaToNum[index];
                mul *= 10;
            }
            if (i == n - 1)
                result = temp;
            else
                sum += temp;
        }

        //cout << sum << " " << result << endl;
        if (sum == result)
        {
            //cout << sum << " " << result << endl;
            ans++;
        }

        return;
    }

    int thisAlpha = alphaIndex[index];
    for (int j = 0; j < 10; j++)
    {
        if (num[j] == false)
        {
            if (j == 0 && chk[thisAlpha])
            {
                //cout << i << endl;
                continue;
            }
            alphaToNum[thisAlpha] = j;
            num[j] = true;
            f(index + 1);
            num[j] = false;
            alphaToNum[thisAlpha] = -1;
        }
    }
}

void init()
{
    n = numOfAlpha = ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (i < 10)
            num[i] = false;

        alpha[i] = chk[i] = false;
        alphaToNum[i] = -1;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); // scanf/printf 같이 사용 x 
    //cout << fixed; cout.precision(3); // 소수점 자리 고정, 소수점 아래 3자리까지 반올림하여 출력

    while (true)
    {
        init();

        cin >> n;
        if (n == 0) 
            break;

        for (int i = 0; i < n; i++)
        {
            cin >> str[i];
            int length = strlen(str[i]);
           
            for (int j = 0; j < length; j++)
            {
                int index = str[i][j] - 65;
                if (alpha[index] == false) 
                {   
                    alpha[index] = true;
                } 
                if (j == 0 && length != 1) // first number
                    chk[index] = true;
            }
        }

        //cout << "numOfAlpha: " << numOfAlpha << endl;
        for (int i = 0; i < 26; i++)
        {
            if (alpha[i] == true)
                alphaIndex[numOfAlpha++] = i;
        }
        f(0);
        cout << ans << endl;
    }

    return 0;
}