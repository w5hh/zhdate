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
    tm _tm;
    LOCALTIME_R(&t, &_tm);
    strftime(buf, sizeof buf, "%Y-%m-%d %H:%M:%S", &_tm); // 2023-01-1
    cout << "时间戳:" << t << endl
         << "公历:" << buf << endl;
    wuhh::Date date(_tm);

    cout << "公历(初始化)\t->\t" << date.type() << '\t' << date.toStr() << endl;
    cout << "改为农历\t->\t" << date.nongli().type() << '\t' << date.toStr() << endl;
    cout << "改为公历\t->\t" << date.gongli().type() << '\t' << date.toStr() << endl;
    return 0;
}
