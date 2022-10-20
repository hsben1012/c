GCC编译选项
使用GCC编译链接时，有两个参数需要注意，一个是-l（小写的L），一个是-L（大写的L）。我们前面曾提到，Linux有个约定速成的规则，假如库名是name，那么动态链接库文件名就是libname.so。在使用GCC编译链接时，-lname来告诉GCC使用哪个库。链接时，GCC的链接器ld就会前往LD_LIBRARY_PATH环境变量、/etc/ld.so.cache缓存文件和/usr/lib和/lib目录下去查找libname.so。我们也可以用-L/path/to/library的方式，让链接器ld去/path/to/library路径下去找库文件。
如果动态链接库文件在/path/to/library，库名叫name，编译链接的方式如下：

編譯成動態庫：
$ gcc test.c -fPIC -shared -o libtest.so

設置LD_LIBRARY_PATH，因為不做的話電腦找不到指定的so檔案：
$ export LD_LIBRARY_PATH=`pwd`
