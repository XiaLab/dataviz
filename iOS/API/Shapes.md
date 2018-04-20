## Shapes

Offering basic shapes API, including sector shape graph, pie chart graph, line graph, area graph, stack graph, basic shape graph and so on.

### ArcSector Graph

More detail in `DFIShapeArc.h` header file。**DFIShapeArc** class provide API to draw ArcSector graph.

#### API

[#]() `@property (nonatomic, strong) DFIPath *path;`

*path*：use DFIPath object to store the path information of a sector graph.

[#]() `@property (nonatomic, assign) float innerRadius;`

*innerRadius* : inner radius of a sector.

[#]() `@property (nonatomic, assign) float outerRadius;`

*outerRadius* : outer radius of a sector. The middle of the sector lies in (innerRadius + outerRadius) / 2.0.

[#]() `@property (nonatomic, assign) float startAngle;`

*startAngle* : where the sector starts in angle form.

[#]() `@property (nonatomic, assign) float endAngle;`

*endAngle* : where the sector ends in angle form.

[#]() `@property (nonatomic, assign) float padAngle;`

*padAngle* : the crossing-angle between two sectors.

[#]() `- (void)loadArcWithData:(NSDictionary *)data;`

Function Instruction: use data to initialize sector shape, waiting for drawning.

### Pie Graph

More detail in `DFIShapePie.h` header file 。**DFIShapePie** class offers API to draw pie graph.

#### API

[#]() `@property (nonatomic, assign) float startAngle;`

*startAngle* : where the pie graph starts in angle form.

[#]() `@property (nonatomic, assign) float endAngle;`

*endAngle* : where the pie grap ends in angle form. Like in [0,pi] means the end is Pi.

[#]() `@property (nonatomic, strong) NSArray *arcs;`

*arcs*: a pie graph is made up with multiple sector shape, arcs restore the information of sector graphs.

[#]() `- (NSMutableArray *)loadPieWithData:(NSMutableArray *)data;`

Function Instruction: load pie data, create pie graph, returning arc arry and waiting for drawning.

### Line Graph

More detail in `DFIShapeLine.h` header file。**DFIShapeLine** class offered API to draw Line graph.

#### API

[#]() `@property (nonatomic, assign) DFIShapeCurveType curveType;`

*curveType* : the type of line between two points.

[#]() `@property (nonatomic, strong) DFIPath *context;`

*context* : the path of a line.

[#]() `- (void)loadLineWithData:(NSDictionary *)data;`

Function Instruction：use data variable to fill line graph's data, waiting for drawning. 

### Area Graph

More detail in `DFIShapeArea.h` header file。**DFIShapeArea** class offers API to draw area graph.

#### API

[#]() `@property (nonatomic, assign) DFIShapeCurveType curveType;`

*curveType* : type of the line betwenn two points.

[#]() `@property (nonatomic, strong) DFIPath *context;`

*context* : the path of whole Area graph.

[#]() `- (void)loadAreaWithData:(NSDictionary *)data;`

Fcuntion Instruction：use data to build Area graph, waiting for drawing. 

### Symbol Basic Shapes 

More detail in `DFIShapeSymbol.h` header file。**DFIShapeSymbol** class offers API to draw basic shapes.

#### API

[#]() `@property (nonatomic, assign) DFIShapeSymbolType type;`

*type* : type of the basic symbol shape.

[#]() `@property (nonatomic, strong) DFIPath *context;`

*context* : the path of the basic shape.

[#]() `@property (nonatomic, assign) CGFloat size;`

*size*: determine the size of the shape.

[#]() `- (void)loadSymbol;`

Function Instruction： load symbol, and initilize, after setting the type and size variables.