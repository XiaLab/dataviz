## Hierarchies

API for hierarchies making，to make many kinds of hierarchies graph,including **Cluster**，**Tree**，**TreeMap**，**Pack** and so on.
![pack](./src/ios/pack.png)
### Cluster

More detail in `DFIHierarchyCluster.h` header file，**DFIHierarchyCluster** class offers API to draw cluster graph.

#### API

[#]() `@property (nonatomic, strong) DFIHierarchyNode *root;`

*root* : represents the root node of the hierarchy data, one can have access to all the nodes using this root node. More detail in [DFIHierarchyNode]()

[#]() `- (void)loadRootNode:(DFIHierarchyNode *)root;`

Function Instruction：using root node to fill corresponding cluster hierarchy graph and wait to draw.

[#]() `- (DFIHierarchyCluster *)size:(CGSize)size;`

Function Instruction：determine the size of cluster graph, and return the cluster for chained calling.

### Tree

More detail in `DFIHierarchyTree.h` header file，**DFIHierarchyTree** class offers API to draw tree graph.

#### API

[#]() `@property (nonatomic, strong) DFIHierarchyNode *root;`

*root* :  represents the root node of this hierarchy graph data, one can have access to all the nodes using this single root node. More detail in [DFIHierarchyNode]()

[#]() `- (void)loadRootNode:(DFIHierarchyNode *)root;`

Function Instruction： use root node to fill this Tree hierarchy grapg, wating for drawning.

[#]() `- (DFIHierarchyTree *)size:(CGSize)size;`

Function Instruction: determine the size of the Tree, returning the Tree for chained-calling.

### TreeMap

More detail in `DFIHierarchyTreemap.h` header file，**DFIHierarchyTreemap** class offers API to draw TreeMap.

#### API

[#]() `@property (nonatomic, strong) DFIHierarchyNode *root;`

*root* : represents the root node of this hierarchy data, one can have access to all the nodes from this root node.More detail in [DFIHierarchyNode]()

[#]() `- (void)loadRootNode:(DFIHierarchyNode *)root;`

Function Instruction: use root node to fill TreeMap hierarchy graph, wating for drawning.

[#]() `- (DFIHierarchyTreeMap *)size:(CGSize)size;`

Function Instruction: determine the size of TreeMap, returning this TreeMap for chained calling.

[#]() `@property (nonatomic, assign) float paddingInner;`

*paddingInner* : represents the inner padding of rectangele.

[#]() `@property (nonatomic, assign) float paddingTop;`

*paddingTop* : represents the upper padding of rectangle.

[#]() `@property (nonatomic, assign) float paddingRight;`

*paddingRight* : represents the right padding of rectangle.

[#]() `@property (nonatomic, assign) float paddingBottom;`

*paddingBottom* : represents the buttom padding of rectangle.

[#]() `@property (nonatomic, assign) float paddingLeft;`

*paddingLeft* : represents the left padding of rectangle.

### Pack

More detail in `DFIHierarchyPack.h` header file，**DFIHierarchyPack** class offers API to draw pach graph.

#### API

[#]() `@property (nonatomic, strong) DFIHierarchyNode *root;`

*root* : represents the root node of this hierarchy data, one can have access to all the nodes using this root node. More detail in [DFIHierarchyNode]()

[#]() `- (void)loadRootNode:(DFIHierarchyNode *)root;`

Function Instruction:use root node to fill this Pach hierarchy graph, waiting for drawning.

[#]() `- (DFIHierarchyPack *)size:(CGSize)size;`

Function Instruction: determine the size of Pack, returning this Pack for chained-calling.

[#]() `@property (nonatomic, assign) float padding;`

*padding* : represents the distance between pach.

### HierarchyNode

More detail in `DFIHierarchyNode.h` header file，**DFIHierarchyNode** class represents the information of a node in this hierarchy data.

#### API

[#]() `@property(nonatomic, assign) int depth;`

*depth*: represents the depth of a node in the hierarchy graph.

[#]() `@property(nonatomic, assign) int height;`

*height*: represents the height of this node in the hierarchy graph.

[#]() `@property (nonatomic, strong) DFIHierarchyNode *parent;`

*parent*: represents the parent node of this node.

[#]() `@property (nonatomic, strong) NSMutableArray *children;`

*children*: represents children nodes of the root node.

[#]() `@property (nonatomic, strong) NSString *id;`

*id*: the id of specific node.

[#]() `@property (nonatomic, assign) float x;`

*x*: x-axis coordination of specific node.

[#]() `@property (nonatomic, assign) float y;`

*y*: y-axis coordination of specific node.

[#]() `@property (nonatomic, assign) float value;`

*value*: value of specific node.