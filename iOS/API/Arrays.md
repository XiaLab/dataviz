## Arrays

Arrays提供的API，封装了多个Objective-C的数组操作。具体见`DFIArray.h`头文件

### API

`+ (NSMutableArray *)rangeWithStart:(int)start stop:(int)stop andStep:(int)step;`

参数说明：

1. start: 起始位置
2. stop: 结束位置
3. step: 步长

函数说明:

返回一个有序数组，数组中元素从start到stop，相邻元素间相差step