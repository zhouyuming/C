参考链接：https://zhouyuming.blog.csdn.net/article/details/111556481
gcc -fprofile-arcs -ftest-coverage hello.c -o hello
./hello
gcov hello.c
lcov -d . -t 'Hello test' -o 'hello_test.info' -b . -c
genhtml -o result hello_test.info