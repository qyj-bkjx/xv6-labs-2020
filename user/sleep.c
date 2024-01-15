#include "kernel/types.h" // 定义了几种无符号数据类型
#include "user/user.h" // 包含系统调用接口定义

int main(int argc, char* argv[]){
    if(argc < 2){
        printf("指令错误，需要输入参数\n");
        exit(1);
    }

    // Pause for n clock ticks.
    // tick 是 xv6 内核定义的时间概念，即来自定时器芯片的两次中断之间的时间
    sleep(atoi(argv[1]));  // atoi函数将字符串转成int
    exit(0);
}