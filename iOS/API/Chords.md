## Chords
![chords](./src/ios/chords.png)
### chord

具体见`DFIChord.h`头文件。提供了绘制弦图的API。该文件包含两个类：

1. **DFIChordRecord** : 该类用来存放弦图数据
2. **DFIChord** : 该类用来绘制弦图

#### API

##### DFIChordRecord

[#]() `@property (nonatomic, strong) NSArray *groups;`

*groups* 数组用来存放弦图外圈的数据，也就是饼图数据，详见[DFIShapePie]()

[#]() `@property (nonatomic, strong) NSArray *data;`

*data* 数组用来存放弦图内圈的数据，也就是ribbon的数据，详见 [DFIChordRibbon]()

##### DFIChord

[#]() `@property (nonatomic, strong) DFIChordRecord *chords;`

*chords* 表示用来绘制弦图的数据

[#]() `@property (nonatomic, assign) CGFloat padAngle;`

*padAngle* 表示两个弦之间的夹缝的夹角，默认是0度

[#]() `@property (nonatomic, copy) NSComparisonResult (^sortGroups)(id obj1, id obj2);`

*sortGroups* 自定义方法，用来对弦进行排序。也就是提供自定义方法对 *groups* 的数据进行排序

[#]() `- (void)loadChordWithMatrix:(NSArray *)matrix;`

参数说明：

*matrix* : 弦图的数据

函数说明：

新建一个**DFIChord**类之后，使用该函数加载弦图的数据。最后数据会被转化保存到**chords**成员变量中，等待最后的绘制

### ChordRibbon

具体见`DFIChordRibbon.h`头文件。提供了绘制弦图内部色带的API。

#### API

[#]() `@property (nonatomic, strong) DFIPath *context;`

*context* 保存了色带的贝塞尔曲线的信息。详见 [DFIPath]()

[#]() `@property (nonatomic, copy) id (^source)(id data);`

*source* 保存了ribbon的头部信息

[#]() `@property (nonatomic, copy) id (^target)(id data);`

*target* 保存了ribbon的尾部信息

[#]() `@property (nonatomic, copy) CGFloat (^radius)(id data);`

*radius* 指定ribbon横跨的弧度

[#]() `@property (nonatomic, copy) CGFloat (^startAngle)(id data);`

*startAngle* 指定了ribbon的起始弧度

[#]() `@property (nonatomic, copy) CGFloat (^endAngle)(id data);`

*endAngle* 指定了ribbon的结束弧度

[#]() `- (void)loadRibbonWithData:(id)data;`

参数说明：

*data* : ribbon的数据

函数说明：

新建一个**DFIChordRibbon**类之后，使用该函数加载弦图的一个ribbon的数据，等待最后的绘制。