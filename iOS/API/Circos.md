## Track

More detail in `DFICircosTrack.h` header file. **DFICircosTrack** class is the base class of other cyclic graph class.

### API

[#]()` @property (nonatomic, strong) NSMutableDictionary *conf;`

The configuration of this track.

[#]() `@property (nonatomic, assign) DFICircosDataParserType parserType;`

Data parse type.

[#]() `@property (nonatomic, strong) NSMutableArray *data;`

The input data of this track.

[#]() `- (instancetype)initWithCircos:(DFICircos *)circos conf:(NSMutableDictionary *)conf defaultConf:(NSMutableDictionary *)defaultConf data:(NSMutableArray *)data andParseType:(DFICircosDataParserType)parserType;`

Initialize a new track.

## Heatmap

More detail in `DFICircosHeatmap.h` header file. **DFICircosHeatmap** class offers many easy API to draw cyclic heatmap graph.

### API

[#]() `- (instancetype)initWithCircos:(DFICircos *)circos conf:(NSMutableDictionary *)conf data:(NSMutableArray *)data;`

Initialize a new heatmap graph with data.

[#]() `- (void)renderToView:(DFIGL2BaseView *)container;`

Render this heatmap graph to container.

## Chord

More detail in `DFICircosChord.h` header file. **DFICircosChord** class offers many easy API to draw cyclic chord graph.

### API

[#]() `- (instancetype)initWithCircos:(DFICircos *)circos conf:(NSMutableDictionary *)conf data:(NSMutableArray *)data;`

Initialize a new chord graph with data.

[#]() `- (void)renderToView:(DFIGL2BaseView *)container;`

Render this chord graph to container.

## Stack

More detail in `DFICircosStack.h` header file. **DFICircosStack** class offers many easy API to draw cyclic stack graph.

### API

[#]() `- (instancetype)initWithCircos:(DFICircos *)circos conf:(NSMutableDictionary *)conf data:(NSMutableArray *)data;`

Initialize a new stack graph with data.

[#]() `- (void)renderToView:(DFIGL2BaseView *)container;`

Render this stack graph to container.

## Line

More detail in `DFICircosLine.h` header file. **DFICircosLine** class offers many easy API to draw cyclic line graph.

### API

[#]() `- (instancetype)initWithCircos:(DFICircos *)circos conf:(NSMutableDictionary *)conf data:(NSMutableArray *)data;`

Initialize a new line graph with data.

[#]() `- (void)renderToView:(DFIGL2BaseView *)container;`

Render this line graph to container.