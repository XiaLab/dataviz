## Shape

draw the primary shapes

### API

#### initialize

[#]() `new Plot.shape(elem)`

initialize the shape renderer

parameters:

* `elem`: the element to mount the canvas

the constructor returns a shapeRenderer

#### beginDraw

[#]() `shapeRenderer.beginDraw()`

whenever you want to draw shapes, you need to call this function to begin to draw.

[#]() `shapeRenderer.drawCircle(x, y, radius, lineWidth, strokeColor, fillColor)`

draw a circle on the canvas

parameters:

* `x`: the x coordinate of the center of the circle
* `y`: the y coordinate of the center of the circle
* `radius`: the radius of the circle
* `lineWidth`: the width of the border of the circle, default is 0
* `strokeColor`: the color of the border of the circle, default is 0, which means black
* `fillColor`: the color of the circle, default is 0, which means black

#### drawRect

[#]() `shapeRenderer.drawRect(x, y, width, height, lineWidth, strokeColor, fillColor)`

draw a rectangle on the canvas

parameters:

- `x`: the x coordinate of the rectangle
- `y`: the y coordinate of the rectangle
- `width`: the width of the rectangle
- `height`: the height of the rectangle
- `lineWidth`: the width of the border of the rectangle, default is 0
- `strokeColor`: the color of the border of the rectangle, default is 0, which means black
- `fillColor`: the color of the rectangle, default is 0, which means black

#### drawEllipse

[#]() `shapeRenderer.drawEllipse(x, y, width, height, lineWidth, strokeColor, fillColor)`

draw an ellipse on the canvas

parameters:

- `x`: the x coordinate of the center of the ellipse
- `y`: the y coordinate of the center of the ellipse
- `width`: the width of the ellipse
- `height`: the height of the ellipse
- `lineWidth`: the width of the border of the ellipse, default is 0
- `strokeColor`: the color of the border of the ellipse, default is 0, which means black
- `fillColor`: the color of the ellipse, default is 0, which means black

#### render

[#]() `shapeRenderer.render()`

render the shapes on the canvas. You should call this function after you draw all the shapes, otherwise there will be nothing on the canvas.