Implementation of state pattern as seen in https://sourcemaking.com/design_patterns/state/cpp/1

```
In file included from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/src/State.cpp:1:0:
/home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:5:25: error: ‘Machine’ has not been declared
         virtual void on(Machine * m) = 0;
                         ^
/home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:7:26: error: ‘Machine’ has not been declared
         virtual bool off(Machine * m) = 0;
                          ^
make[2]: *** [CMakeFiles/parallelparkerlib-static.dir/src/State.cpp.o] Error 1
make[1]: *** [CMakeFiles/parallelparkerlib-static.dir/all] Error 2
make: *** [all] Error 2
```

Adding the required headerfile results in circular dependency

```                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/src/State.cpp:1:
/home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1:21: error: #include nested too deeply
 #include "Machine.h"
                     ^
/home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:7:25: error: ‘Machine’ has not been declared
         virtual void on(Machine * m) = 0;
                         ^
/home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:9:26: error: ‘Machine’ has not been declared
         virtual bool off(Machine * m) = 0;
                          ^
In file included from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1:0,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/State.h:1,
                 from /home/chap/work/OpenDaVINCI/automotive/miniature/parallelparker/include/Machine.h:1,
                 from /home/^Cmake[2]: *** Deleting file `CMakeFiles/parallelparkerlib-static.dir/src/State.cpp.o'
make[2]: *** [CMakeFiles/parallelparkerlib-static.dir/src/State.cpp.o] Interrupt
make[1]: *** [CMakeFiles/parallelparkerlib-static.dir/all] Interrupt
make: *** [all] Interrupt
```
