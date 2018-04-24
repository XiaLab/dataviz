## Layout

More detail in `DFICircosLayout.h` header file. Offering API to draw cyclic layout graph, containing two classes:

1. **DFICircosLayoutBlock** : this class contains information of the special part for the layout
2.  **DFICircosLayout** : this class offering API to draw layout graph.

### API

#### DFICircosLayoutBlock

[#]() `@property (nonatomic, strong) NSString *identifier;`

The identifier of this block

[#]() `@property (nonatomic, strong) NSString *label;`

The label of this block, when you click this block, it will show this label information

[#]() `@property (nonatomic, assign) CGFloat length;`

The length of the chromosome which this block represents

[#]() `@property (nonatomic, strong) NSString *color;`

The color of this block. You can change **NSString** to **UIColor** or **DFIColor**

[#]() `@property (nonatomic, assign) CGFloat startPos;`

The starting angle of this block

[#]() `@property (nonatomic, assign) CGFloat endPos;`

The end angle of this block

#### DFICircosLayout

[#]() `@property (nonatomic, strong) DFICircosLayoutDefaultConf *conf;`

The configuration  of this layout.

[#]() `@property (nonatomic, strong) NSMutableArray *data;`

Input data of this layout.

[#]() `@property (nonatomic, strong) NSMutableArray<DFICircosLayoutBlock *> *blocks;`

Array of blocks for this layout.

[#]() `@property (nonatomic, assign) CGFloat size;`

The radius size of this layout.

[#]() `- (instancetype)initWithConf:(NSDictionary *)conf andData:(NSMutableArray *)data;`

Initailize a new layout with configuration and data.

[#]() `- (void)renderToView:(DFIGL2BaseView *)container;`

Render this layout to container.

[#]() `- (DFICircosLayoutBlock *)findBlockWithIdentifier:(NSString *)identifier;`

Find special block in this layout using block identifier.