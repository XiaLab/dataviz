## Paths

More detail in`DFIPath.h`header file. **DFIPath** class responds to information about path.

### API

[#]() `@property (nonatomic, strong) UIBezierPath *path;`

*path*: using BezierPath to store path information.

[#]() `- (DFIPath *)moveTo:(CGPoint)point;`

Function Instruction： move to specific point.

[#]() `- (DFIPath *)closePath;`

Function Instruction： close a specific path.

[#]() `- (DFIPath *)lineTo:(CGPoint)point;`

Function Instruction：Add a line to specific point.

[#]() `- (DFIPath *)quadraticCurveTo:(CGPoint)endPoint withControl:(CGPoint)controlPoint;`

Function Instruction： add a quadratic Bezier path

Parameter Instruction：

1. *endPoint*: where the path ends
2. *controlPoint*: the control point to draw the quadratic Bezier path.

[#]() `- (DFIPath *)bezierCurveTo:(CGPoint)endPoint withControl1:(CGPoint)point1 andControl2:(CGPoint)point2;`

Function Instruction： add a cubic Bezier Path

Parameter Instruction：

1. *endPoint*:  where the path ends
2. *point1*: the first control point to draw the quadratic Bezier path.
3. *point2*: the second control point to draw the quadratic Bezier path.

[#]() `- (DFIPath *)arcTo:(CGPoint)point1 to:(CGPoint)point2 withRadius:(float)radius;`

Function Instruction： add a curve

Parameter Instruction：

1. *point1*: where the path starts
2. *point2*:  where the path ends
3. *radius*:  the radius of the curve

[#]() `- (DFIPath *)arcWithCenter:(CGPoint)center startAngle:(float)startAngle endAngle:(float)endAngle andRadius:(float)radius clockwise:(BOOL)clockwise;`

Function Instruction： add an arc, with multiple parameters

Parameter Instruction：

1. *center*: center of the arc
2. *startAngle*: where the arc starts, on the basis of angle 
3. *endAngle*: where the arc ends, on the basis of angle
4. *radius*: radius of the arc
5. *clockwise*: how to draw the arc, clockwisely or the other way

[#]() `- (DFIPath *)rectWithPoint:(CGPoint)point width:(float)width andHeight:(float)height;`

Function Instruction： add a rectangle

Parameter Instruction：

1. *point*:  where the left top point of the rectangle lies
2. *width*: width of the rectangle
3. *height*: height of the rectangle