## Colors

More detail in`DFIColor.h`header file。**DFIColor** class offers many easy way to generate varies of colors , supporting many kinds of color formats。

### API

[#]() `@property (nonatomic, assign) CGFloat r;`

*r* —red part of the color 

[#]() `@property (nonatomic, assign) CGFloat g;`

*g* —green part of the color 

[#]() `@property (nonatomic, assign) CGFloat b;`

*b* —blue part of the color 

[#]() `@property (nonatomic, assign) CGFloat opacity;`

*opacity* —opacity of the color

[#]() `+ (DFIColor *)colorWithFormat:(NSString *)format;`

Parameter Instruction：

*format* : the format to enter the color

Functions Instruction：

Type in a specific color to generate according DFIColor object。This function supports varies of input format such as：

1. `rgb(255, 255, 255)`
2. `rgb(10%, 20%, 30%)`
3. `rgba(255, 255, 255, 0.4)`
4. `rgba(10%, 20%, 30%, 0.4)`
5. `#ffeeaa`
6. `#fea`
7. `steelblue`

[#]() `- (DFIColor *)brighterWithK:(CGFloat)k;`

Parameter Instruction：

*k* : k works as the factor, making the color look brighter, 0.7 in defualt.

[#]() `- (DFIColor *)darkerWithK:(CGFloat)k;`

Parameter Instruction：

*k* : k works as the factor, making the color look darker,1/0.7 in default.

[#]() `- (UIColor *)toUIColor;`

Function Instruction:

Transfer DFIColor object into UIColor object or in versely.

[#]() `- (NSString *)toString;`

Function Instruction：

Transfer DFIColor object into #ffeeaa format NSString object.