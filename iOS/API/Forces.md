## Forces

Offer API to create force graph.
![force](./src/ios/force.png)
### ForceSimulation

More detail in`DFIForceSimulation.h`header file。**DFIForceSimulation** class is used to simulate following scene in which multiple nodes move within complex kinds of forces. There are multiple nodes and different kinds of force in this scene including spring-force, gravitaion or centrepetal force and so on.

#### API

[#]() `@property (nonatomic, strong) NSMutableArray *nodes;`

*nodes* : represent all the nodes in one single simulation.

[#]() `- (instancetype)initWithNodes:(NSMutableArray *)nodes;`

Function Instruction：

Use multiple nodes to initialize a simulation.

Parameter Instruction:

*nodes* : all the nodes contained in a simulation, loaded from single file. Every node shows as a  **DFIForceNode** object，more detail in [DFIForceNode]()

[#]() `- (void)addForce:(DFIForceBaseForce *)force;`

Function Instruction：

Add a kind of force into sumulation, force is completed via **DFIForceBaseForce** class.

Parameter Instruction：

*force* ： a specific force  class inherits from **DFIForceBaseForce** class.

[#]() `- (void)forceStart;`

Function Instruction：

After adding nodes and forces to a simulation, run this function to sumulate the movement of nodes.

[#]() `- (void)restart;`

Function Instruction：

As the name shows, call this function to resimulate movement.

### ForceNode

More detail in `DFIForceNode.h` header file，**DFIForceNode** class is used to represent the information of a node.

#### API

[#]() `@property (nonatomic, strong) NSString *id;`

*id* :  the identifier of a node.

[#]() `@property(nonatomic, assign) int index;`

*index* :  sequence of a node, showing the sequence of the node in array.

[#]() `@property(nonatomic, assign) float x;`

*x* : x coordination of the node.

[#]() `@property(nonatomic, assign) float y;`

*y* : y coordination of the node.

[#]() `@property(nonatomic, assign) float vx;`

*vx* : speed along x-axis of the node.

[#]() `@property(nonatomic, assign) float vy;`

*vy* : speed along y-axis of the node.

[#]() `@property(nonatomic, assign) float fx;`

*fx* : 0 in default, when it is not 0, meaning the node is influenced by ouside force along x-axis.

[#]() `@property(nonatomic, assign) float fy;`

*fy* : 0 in default, when it is not 0, meaning the node is influenced by ouside force along y-axis.

[#]() `- (instancetype)initWithId:(NSString *)id andGroup:(int)group;`

Function Instruction： create a new node using a specific id.

### BaseForce

More detail in `DFIForceBaseForce.h` header file，**DFIForceBaseForce** is the base class of all kind of forces.

#### API

[#]() `- (instancetype)initWithNodes:(NSMutableArray *)nodes;`

Function Instruction：create a force using a group of nodes which are influenced by the force.

[#]() `- (void)force:(float)alpha;`

Function Instruction：

simulate how every nodes move under specific force, refresh their coordinations and speed.

###CenterForce

More detail in `DFIForceCenter.h` header file。**DFIForceCenter** class represents centrepetal force.

#### API

[#]() `@property(nonatomic, assign) float x;`

*x* : the x-axis coordination of centrepetal force.

[#]() `@property(nonatomic, assign) float y;`

*y* : the y-axis coordination of centrepetal force.

[#]() `- (void)centerInitializeWithX:(float)x andY:(float)y;`

Function Instruction：use x,y coordination to determine the anchor point of centrepetal force.

### LinkForce

More detail in `DFIForceLink.h` header file。**DFIForceLink** class represents the spring-force between two nodes.

#### API

[#]() `@property (nonatomic, strong) NSMutableArray *links;`

*links* : represents all the springs, belongs to  **DFIForceLinkElement** class, more detail in [DFIForceLinkElement]().

[#]() `@property (nonatomic, assign) int iterations;`

*iterations*: sping factor, real physic factor.

[#]() `- (void)linksInitialize:(NSMutableArray *)links;`

Function Instruction：use links objects to determine all the spring-forces.

### ManybodyForce

More detail in `DFIForceManybody.h` header file，**DFIForceManybody** represents the gravitation.

#### API

[#]() `@property(nonatomic, assign) float distanceMin;`

*distanceMin* : shortest distance, the force shorter than this distance will make no difference.

[#]() `@property(nonatomic, assign) float distanceMax;`

*distanceMax* : longest distance, the force longer than this distance will make no difference.

[#]() `@property(nonatomic, assign) float theta;`

*theta* : the factor of gravitation.

