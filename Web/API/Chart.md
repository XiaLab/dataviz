## Chart

draw several types of common charts.

### API

#### iris

[#]() `new Plot.chart(elem).iris(data, options)`

specify the element to be the canvas, and draw the iris chart with the passing data and options.

parameters: 

* `elem`: the element to mount the canvas

* `data`: an array of target objects to draw on the canvas, the object contains:

  * `x`: the x coordinate of the target
  * `y`: the y coordinate of the target
  * `r`: the radius of the target
  * `fill`: the fill color of the target, optional
  * `stroke`: the stroke color of the target, optional
  * `strokeWidth`: the stroke width of the target, optional
  * `fillOpacity`: the fill opacity of the target, optional

* `options`: the configuration of the chart

  * `range`: the range of the x and y coordinate
    * `x`: an array of the range of the x coordinate
    * `y`: an array of the range of the y coordinate
  * `zoom`: whether the chart can be zoomed, optional


  * `canvasSize`: the size of the canvas, optional
    * `w`: the width of the canvas
    * `h`: the height of the canvas
  * `contentSize`: the size of the chart content, optional
    * `w`: the width of the chart content
    * `h`: the height of the chart content
  * `canvasMargin`: the margin between the canvas and the chart content, optional
    * `h`: the horizonal margin
    * `v`: the vertical margin
  * `style`: the style of the object in the chart, optional
    - `fill`: the fill color of the target
    - `stroke`: the stroke color of the target
    - `strokeWidth`: the stroke width of the target
    - `fillOpacity`: the fill opacity of the target

#### candlestick

  [#]() `new Plot.chart(elem).candleStick(data, options)`

  specify the element to be the canvas, and draw the candlestick chart with the passing data and options.

  parameters: 

  - `elem`: the element to mount the canvas

  - `data`: an array of target objects to draw on the canvas, the object contains:

    - `x`: the x coordinate of the target
    - `value`: an array of the four coordinates on the y axis of target
    - `fill`: the fill color of the target, optional
    - `stroke`: the stroke color of the target, optional
    - `strokeWidth`: the stroke width of the target, optional
    - `fillOpacity`: the fill opacity of the target, optional

  - `options`: the configuration of the chart

    - `range`: the range of the x and y coordinate
      - `x`: an array of the range of the x coordinate
      - `y`: an array of the range of the y coordinate
    - `zoom`: whether the chart can be zoomed, optional
    - `blockWidth`: the width of the block in the candlestick chart, optional
    - `canvasSize`: the size of the canvas, optional
      - `w`: the width of the canvas
      - `h`: the height of the canvas
    - `contentSize`: the size of the chart content, optional
      - `w`: the width of the chart content
      - `h`: the height of the chart content
    - `canvasMargin`: the margin between the canvas and the chart content, optional
      - `h`: the horizonal margin
      - `v`: the vertical margin
    - `style`: the style of the object in the chart, optional
      - `fill`: the fill color of the target
      - `stroke`: the stroke color of the target
      - `strokeWidth`: the stroke width of the target
      - `fillOpacity`: the fill opacity of the target


#### occurrence

  [#]()`new Plot.chart(elem).occurrence(data, options)`

  specify the element to be the canvas, and draw the occurrence chart with the passing data and options.

  parameters: 

  - `elem`: the element to mount the canvas

  - `data`: an array of target objects to draw on the canvas, the object contains:

    - `x`: the x coordinate of the target
    - `y`: the y coordinate of the target
    - `fill`: the fill color of the target, optional
    - `stroke`: the stroke color of the target, optional
    - `strokeWidth`: the stroke width of the target, optional
    - `fillOpacity`: the fill opacity of the target, optional

  - `options`: the configuration of the chart

    - `range`: the range of the x and y coordinate
      - `x`: an array of the range of the x coordinate
      - `y`: an array of the range of the y coordinate
    - `zoom`: whether the chart can be zoomed, optional
    - `unitSize`: the size of the unit block in the chart, optional
      * `w`: the width of the unit block
      * `h`: the height of the unit block
    - `gap`: the gap between the unit blocks, optional
    - `canvasSize`: the size of the canvas, optional
      - `w`: the width of the canvas
      - `h`: the height of the canvas
    - `contentSize`: the size of the chart content, optional
      - `w`: the width of the chart content
      - `h`: the height of the chart content
    - `canvasMargin`: the margin between the canvas and the chart content, optional
      - `h`: the horizonal margin
      - `v`: the vertical margin
    - `style`: the style of the object in the chart, optional
      - `fill`: the fill color of the target
      - `stroke`: the stroke color of the target
      - `strokeWidth`: the stroke width of the target
      - `fillOpacity`: the fill opacity of the target


#### boxplot

  [#]()`new Plot.chart(elem).boxplot(data, options)`

  specify the element to be the canvas, and draw the boxplot chart with the passing data and options.

  parameters: 

  - `elem`: the element to mount the canvas

  - `data`: an array of target objects to draw on the canvas, the object contains:

    - `x`: the x coordinate of the target
    - `y`: the y coordinate of the target
    - `r`: the radius of the target
    - `fill`: the fill color of the target, optional
    - `stroke`: the stroke color of the target, optional
    - `strokeWidth`: the stroke width of the target, optional
    - `fillOpacity`: the fill opacity of the target, optional

  - `options`: the configuration of the chart

    - `range`: the range of the x and y coordinate
      - `x`: an array of the range of the x coordinate
      - `y`: an array of the range of the y coordinate
    - `zoom`: whether the chart can be zoomed, optional
    - `unitSize`: the size of the unit block in the chart, optional
      - `w`: the width of the unit block
      - `h`: the height of the unit block
    - `gap`: the gap between the unit blocks, optional
    - `canvasSize`: the size of the canvas, optional
      - `w`: the width of the canvas
      - `h`: the height of the canvas
    - `contentSize`: the size of the chart content, optional
      - `w`: the width of the chart content
      - `h`: the height of the chart content
    - `canvasMargin`: the margin between the canvas and the chart content, optional
      - `h`: the horizonal margin
      - `v`: the vertical margin
    - `style`: the style of the object in the chart, optional
      - `fill`: the fill color of the target
      - `stroke`: the stroke color of the target
      - `strokeWidth`: the stroke width of the target
      - `fillOpacity`: the fill opacity of the target


  ​