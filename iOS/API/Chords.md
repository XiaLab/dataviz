## Chords

More detail in `DFIChord.h` header file。Offering API to draw Chord graph, containing two classes:

1. **DFIChordRecord** : this class to restore data of Chord graph.
2. **DFIChord** : this class to draw Chord graph.

#### API

##### DFIChordRecord

[#]() `@property (nonatomic, strong) NSArray *groups;`

*groups* array used to store outer data ,which makes up the Pie graph. More detail in [DFIShapePie]()

[#]() `@property (nonatomic, strong) NSArray *data;`

*data* array to store data for inner part, which makes up the Ribbons. More detail in  [DFIChordRibbon]()

##### DFIChord

[#]() `@property (nonatomic, strong) DFIChordRecord *chords;`

*chords* represents the data to draw Chord graph.

[#]() `@property (nonatomic, assign) CGFloat padAngle;`

*padAngle* 表示两个弦之间的夹缝的夹角，默认是0度

[#]() `@property (nonatomic, copy) NSComparisonResult (^sortGroups)(id obj1, id obj2);`

*sortGroups* auto-define function, used to make range of bibbons, in other words, make range of the data of Groups.

[#]() `- (void)loadChordWithMatrix:(NSArray *)matrix;`

Parameter Instruction：

*matrix* : Chord data

Function Instruction：

After creating a **DFIChord** class, use this function to load the data of Chord graph, at last the data will be restored in  **chords** member variable, waiting for drawing.

### ChordRibbon

More detail in `DFIChordRibbon.h` header file. Offering API to draw ribbons inside the Chord graph.

#### API

[#]() `@property (nonatomic, strong) DFIPath *context;`

*context* restore the bezier path information of a ribbon. More detail in  [DFIPath]()

[#]() `@property (nonatomic, copy) id (^source)(id data);`

*source* restore the head information of a ribbon.

[#]() `@property (nonatomic, copy) id (^target)(id data);`

*target* restore the tail information of a ribbon.

[#]() `@property (nonatomic, copy) CGFloat (^radius)(id data);`

*radius* determine the angle that a robbon cross through.

[#]() `@property (nonatomic, copy) CGFloat (^startAngle)(id data);`

*startAngle* determine where the ribbon starts in angle.

[#]() `@property (nonatomic, copy) CGFloat (^endAngle)(id data);`

*endAngle* determine where the ribbon ends angle.

[#]() `- (void)loadRibbonWithData:(id)data;`

Parameter Instruction：

*data* : ribbon's data.

Functuon Instruction：

After creating a **DFIChordRibbon** object，use this function to load in data of a ribbon, waiting for drawing.
