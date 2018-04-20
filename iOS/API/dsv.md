## Delimiter-Separated Values

resolve files of different separators，such as "," or tab and so on.

### DSV

More detail in `DFIDSV.h`header file。**DFIDSV** class is a kind of resolver，offering API to resolve different separator files.

#### API

[#]() `@property (nonatomic, strong) DFIDSVParseResult *result;`

*result* : this class to store resolved result. More detail in  [DFIDSVParseResult]()

[#]() `- (instancetype)initWithDelimiter:(NSString *)delimiter;`

Function Instruction：

Initialize the resolver with specific separator

Parameter Instruction：

*delemiter* : determine the separator such as "," or "\t" and so on.

[#]() `- (void)parseWithText:(NSString *)text;`

Function Instruction：

resolve text files, and store the resolved result into result member variables

Parameter Instruction：

*text* : the text content remains to be resolved.

[#]() `- (void)parseWithTextFileName:(NSString *)fileName andFileSuffix:(NSString *)suffix;`

Function Instruction：

Input the file name to resolve the file, and store the reulst into "result" member variable.

参数说明：

1. *fileName* : name of the file waiting for resolving
2. *suffix* : suffix of the file waiting for resolving

[#]() `- (NSMutableArray *)parseRowsWithText:(NSString *)text;`

Function Instruction：

Resolve text file, and return the array which contains the resolved result.

Parameter Instruction：

*text* ：text content remains to be resolved.

### DSVParseResult

More detail in`DFIDSVParseResult.h`header file。**DFIDSVParseResult** class works to store resolved result.

#### API

[#]() `@property (nonatomic, strong) NSMutableArray *columns;`

*columns* represents the key word of every columns

[#]() `@property (nonatomic, strong) NSMutableArray *rows;`

*rows* represents the containing of every rows, a row works as a basic element in the array.