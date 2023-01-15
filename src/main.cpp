#include <iostream>
#include "date.h"
using namespace std;
int main(int argc, char const *argv[])
{
    auto t = time(nullptr);
    if (argc == 2)
    {
        t = atol(argv[1]);
    }
    char buf[20]{0};
    strftime(buf, sizeof buf, "%Y-%m-%d %H:%M:%S", localtime(&t)); // 2023-01-1
    printf("时间戳:%ld\n公历:%s\n", t, buf);
    wuhh::Date date(*localtime(&t));
    cout << "公历(初始化):" << date.toStr() << endl;
    date.nongli(); // 改为农历
    cout << "农历:" << date.toStr() << endl;
    date.gongli(); // 改为公历
    cout << "公历(重新转换):" << date.toStr() << endl;
    return 0;
}
