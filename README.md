# zhdate
### 公历和农历的相互转换
#### 参考了此项目https://github.com/CutePandaSh/zhdate
#### 将python版移植到了c++

| 文件 | 说明 |
| ------------ | ------------ |
| src/init_data.h | 存储了1900-2100年的相关年份数据 |
| src/date.h | 算法实现文件，已经引入了init_data.h文件 |
| src/main.cpp | 示例代码 |
| build.ps1 | 编译脚本，windows中利用 [cl命令](https://learn.microsoft.com/zh-cn/cpp/build/projects-and-build-systems-cpp) 手动编译 |
| build.sh | 编译脚本，利用gcc编译 |
| zhdate.xcodeproj | xcode项目文件 |
| zhdate.sln | Visual Studio项目文件 |

**具体实例参考：https://github.com/w5hh/zhdate/blob/main/src/main.cpp**

2023-01-16 13:21:31 星期一