在dll动态库里面打断点调试：
1. 一般来说调试DLL是把DLL工程和exe工程放到一个解决方案里，并且将动态库工程设置为启动项；
2. 如果不放到一个解决方案里，那两者的输出目录要一致，属性-连接器-常规-输出目录。保证dll，dll的pdb，exe，exe的pdb在一个文件夹内;
3. lib文件有两种，一种是作为静态库文件；另一种是作为dll动态库的导入库文件。调用动态库函数可以通过"#param comment(lib, "xxxx.lib")"，也可以通过LoadLibrary("xxxx.dll");  来进行导入；
4. 解决方案是先创建mfcdll工程，再在解决方案下新建testMFCDLLEx工程；
5. 导入动态库的过程中出现如下错误：error C2664: “LoadLibraryW”: 不能将参数 1 从“const char *”转换为“LPCWSTR”。
只需设置“工程属性->配置属性-->常规--->字符集---->使用多字节符字符集”；
6. 这里是通过将需要调试的mfcdll工程和调用工程testMFCDLLEx工程放置到一个解决方案里，所以可以不用将mfcdll中生成的dll文件拷贝到testMFCDLLEx文件夹中；
7. 如果只需要调用mfcdll动态库，可以单独建立一个工程，并且将mfcdll.dll文件拷贝到新建工程目录下；调用方式不变；
