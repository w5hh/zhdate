if [ ! -x "build" ]; then
    mkdir build
fi
cd build
g++ -O2 -std=c++11 -o main ../src/main.cpp
cd -
