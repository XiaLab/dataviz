## Circular

draw the circular graph

### API

The circular part of the library consists of seven types of graph, including chords, heatmap, highlight, histogram, line, scatter and stack.

The configuration of the different types are similar, here we conclude the configuration of these types.

#### layout configuration

* `fileUrl`: the url of the layout file


* `fileType`: the file type, including json, csv and tsv
* `configs`: the configuration of the layout
  * `innerRadius`: the inner radius of the layout
  * `outerRadius`: the outer radius of the layout
  * `labels`: whether to show the labels of the layout
  * `ticks`: whether to show the ticks of the layout
  * `tickScale`: the tick scale of the layout ticks
  * `tips`: the callback function to show the hover information

#### circular configuration

heatmap

* `innerRadius`
* `outerRadius`
* `color`
* `tips`

chords

* `radius`
* `opacity`
* `stroke`
* `strokeWidth`
* `tips`

highlight

* `innerRadius`
* `outerRadius`
* `opacity`
* `color`

histogram

* `innerRadius`
* `outerRadius`
* `color`
* `direction`
* `tips`

line

* `innerRadius`
* `outerRadius`
* `maxSpace`
* `min`
* `max`
* `color`
* `axes`
* `backgrounds`
* `tips`

scatter

* `innerRadius`
* `outerRadius`
* `color`
* `stroke`
* `strokeWidth`
* `shape`
* `size`
* `min`
* `max`
* `axes`
* `backgrounds`
* `tips`

stack

* `innerRadius`
* `outerRadius`
* `thickness`
* `margin`
* `direction`
* `strokeWidth`
* `color`
* `tips`

#### chords

[#]()`new Plot.circular(elem).chords(layout, data)`

example:

```javascript
new Plot.circular(document.getElementById('canvas')).chords({
	fileUrl: '/dist/chords/10GRCh37.json',
	fileType: 'json',
	configs: {
		innerRadius: 300,
		outerRadius: 320,
		labels: false,
		ticks: true
	}
}, [{
	circularType: 'heatmap',
	name: 'CHG',
	fileUrl: '/dist/chords/CHG.v3.bed',
	fileType: 'tsv',
	configs: {
		innerRadius: 0.8,
		outerRadius: 0.98
	}
}, {
	circularType: 'heatmap',
	name: 'CpG',
	fileUrl: '/dist/chords/CpG.v3.bed',
	fileType: 'tsv',
	configs: {
		innerRadius: 0.7,
		outerRadius: 0.79
	}
}, {
	circularType: 'chords',
	name: 'interchr',
	fileUrl: '/dist/chords/interchr.json',
	fileType: 'json',
	configs: {
		stroke: '#FF9900',
		strokeWidth: 1,
		radius: function (d) {
			return 0.7;
		},
		tips: function (d) {
			return d.source.id + ' => ' + d.target.id
		}
	}
}, {
	circularType: 'chords',
	name: 'intrachr',
	fileUrl: '/dist/chords/intrachr.json',
	fileType: 'json',
	configs: {
		stroke: '#666600',
		strokeWidth: 1,
		radius: function (d) {
			return 0.7;
		}
	}
}]);
```

#### heatmap

[#]()`new Plot.circular(elem).heatmap(layout, data)`

example:

```javascript
new Plot.circular(document.getElementById('canvas')).chords({
	fileUrl: '/dist/heatmap/10GRCh37.json',
	fileType: 'json',
	configs: {
		innerRadius: 300,
		outerRadius: 320,
		labels: true,
		ticks: true
	}
}, [{
	circularType: 'heatmap',
	name: 'CHG',
	fileUrl: '/dist/heatmap/CHG.v3.bed',
	fileType: 'tsv',
	configs: {
		innerRadius: 0.8,
		outerRadius: 0.95
	}
}, {
	circularType: 'heatmap',
	name: 'CHH',
	fileUrl: '/dist/heatmap/CHH.v3.bed',
	fileType: 'tsv',
	configs: {
		innerRadius: 0.5,
		outerRadius: 0.75
	}
}]);
```

#### highlight

[#]()`new Plot.circular(elem).highlight(layout, data)`

example:

```javascript
new Plot.circular(document.getElementById('canvas')).highlight({
	fileUrl: '/dist/highlight/GRCh37.json',
	fileType: 'json',
	configs: {
		innerRadius: 300,
		outerRadius: 320,
		labels: false,
		ticks: true
	}
}, [{
	circularType: 'highlight',
	name: 'cytobands',
	fileUrl: '/dist/highlight/cytobands.csv',
	fileType: 'csv',
	configs: {
		innerRadius: 300,
		outerRadius: 320
	}
}]);
```

#### histogram

[#]()`new Plot.circular(elem).histogram(layout, data)`

example:

```javascript
new Plot.circular(document.getElementById('canvas')).histogram({
	fileUrl: '/dist/histogram/GRCh37.json',
	fileType: 'json',
	configs: {
		innerRadius: 300,
		outerRadius: 320,
		labels: false,
		ticks: true
	}
}, [{
	circularType: 'highlight',
	name: 'cytobands',
	fileUrl: '/dist/histogram/cytobands.csv',
	fileType: 'csv',
	configs: {
		innerRadius: 300,
		outerRadius: 320
	}
}, {
	circularType: 'histogram',
	name: 'his',
	fileUrl: '/dist/histogram/his.json',
	fileType: 'json',
	configs: {
		innerRadius: 0.5,
		outerRadius: 0.99,
		direction: 'in'
	}
}]);
```

#### line

[#]()`new Plot.circular(elem).line(layout, data)`

example:

```javascript
new Plot.circular(document.getElementById('canvas')).line({
	fileUrl: '/dist/line/GRCh37.json',
	fileType: 'json',
	configs: {
		innerRadius: 300,
		outerRadius: 320,
		labels: false,
		ticks: true
	}
}, [{
	circularType: 'highlight',
	name: 'cytobands',
	fileUrl: '/dist/line/cytobands.csv',
	fileType: 'csv',
	configs: {
		innerRadius: 300,
		outerRadius: 320
	}
}, {
	circularType: 'line',
	name: 'CHH',
	fileUrl: '/dist/line/CHH.v3.bed',
	fileType: 'tsv',
	configs: {
		innerRadius: 0.85,
		outerRadius: 0.95,
		maxGap: 1000000,
		min: 0.02,
		max: 0.04,
		color: '#222222',
		axes: [{
			spacing: 0.01,
			thickness: 1,
			color: '#4caf50'
		}],
		backgrounds: [{
			start: 0.02,
			end: 0.04,
			color: '#b0cde2'
		}]
	}
}, {
	circularType: 'line',
	name: 'CHG',
	fileUrl: '/dist/line/CHG.v3.bed',
	fileType: 'tsv',
	configs: {
		innerRadius: 0.5,
		outerRadius: 0.8,
		maxGap: 1000000,
		min: 0.3,
		max: 0.7,
		color: '#222222',
		axes: [{
			spacing: 0.05,
			thickness: 1,
			color: '#666666'
		}],
		backgrounds: [{
			start: 0.3,
			end: 0.7,
			color: '#ffffd0',
			opacity: 0.5
		}]
	}
}]);
```

#### scatter

[#]()`new Plot.circular(elem).scatter(layout, data)`

example:

```javascript
new Plot.circular(document.getElementById('canvas')).scatter({
	fileUrl: '/dist/scatter/GRCh37.json',
	fileType: 'json',
	configs: {
		innerRadius: 300,
		outerRadius: 320,
		labels: false,
		ticks: true
	}
}, [{
	circularType: 'highlight',
	name: 'cytobands',
	fileUrl: '/dist/scatter/cytobands.csv',
	fileType: 'csv',
	configs: {
		innerRadius: 300,
		outerRadius: 320
	}
}, {
	circularType: 'scatter',
	name: 'snp_250kb',
	fileUrl: '/dist/scatter/snp_250kb.txt',
	fileType: 'csv',
	configs: {
		innerRadius: 0.65,
		outerRadius: 0.95,
		color: function (d) {
			if (d.value > 0.006) {
				return '#4caf50'
			}
			if (d.value < 0.002) {
				return 'rgb(249, 83, 44)'
			}
			return '#FF9900'
		},
		stroke: 'grey',
		strokeWidth: 1,
		shape: 'circle',
		size: 14,
		min: 0,
		max: 0.013,
		axes: [{
				spacing: 0.001,
				start: 0.006,
				thickness: 1,
				color: '#4caf50',
				opacity: 0.3
			},
			{
				spacing: 0.002,
				start: 0.006,
				thickness: 1,
				color: '#4caf50',
				opacity: 0.5
			},
			{
				spacing: 0.002,
				start: 0.002,
				end: 0.006,
				thickness: 1,
				color: '#666',
				opacity: 0.5
			},
			{
				spacing: 0.001,
				end: 0.002,
				thickness: 1,
				color: '#f44336',
				opacity: 0.5
			}
		],
		backgrounds: [{
				start: 0.006,
				color: '#4caf50',
				opacity: 0.1
			},
			{
				start: 0.002,
				end: 0.006,
				color: '#d3d3d3',
				opacity: 0.1
			},
			{
				end: 0.002,
				color: '#FFCCCC',
				opacity: 0.1
			}
		],
		tips: function (d, i) {
			return `${d.block_id}:${Math.round(d.position)} ➤ ${d.value}`
		}
	}
}, {
	circularType: 'scatter',
	name: 'snp',
	fileUrl: '/dist/scatter/snp.txt',
	fileType: 'csv',
	configs: {
		color: '#4caf50',
		stroke: 'green',
		strokeWidth: 1,
		shape: 'star',
		size: 10,
		min: 0.007,
		max: 0.013,
		innerRadius: 0.2,
		outerRadius: 0.3,
		axes: [{
				spacing: 0.001,
				thickness: 1,
				color: '#4caf50',
				opacity: 0.3
			},
			{
				spacing: 0.002,
				thickness: 1,
				color: '#4caf50',
				opacity: 0.5
			}
		],
		backgrounds: [{
				start: 0.007,
				color: '#4caf50',
				opacity: 0.1
			},
			{
				start: 0.009,
				color: '#4caf50',
				opacity: 0.1
			},
			{
				start: 0.011,
				color: '#4caf50',
				opacity: 0.1
			},
			{
				start: 0.013,
				color: '#4caf50',
				opacity: 0.1
			}
		],
		tips: function (d, i) {
			return `${d.block_id}:${Math.round(d.position)} ➤ ${d.value}`
		}
	}
}, {
	circularType: 'scatter',
	name: 'snp_1mb',
	fileUrl: '/dist/scatter/snp_1mb.txt',
	fileType: 'csv',
	configs: {
		color: '#f44336',
		stroke: 'red',
		strokeWidth: 1,
		shape: 'cross',
		size: 10,
		min: 0,
		max: 0.002,
		innerRadius: 0.35,
		outerRadius: 0.60,
		axes: [{
				spacing: 0.0001,
				thickness: 1,
				color: '#FF9900',
				opacity: 0.3
			},
			{
				spacing: 0.0005,
				thickness: 1,
				color: '#FF9900',
				opacity: 0.5
			}
		],
		backgrounds: [{
				end: 0.0004,
				color: '#FF9900',
				opacity: 0.1
			},
			{
				end: 0.0008,
				color: '#FF9900',
				opacity: 0.1
			},
			{
				end: 0.0012,
				color: '#FF9900',
				opacity: 0.1
			},
			{
				end: 0.0016,
				color: '#FF9900',
				opacity: 0.1
			},
			{
				end: 0.002,
				color: '#FF9900',
				opacity: 0.1
			}
		],
		tips: function (d, i) {
			return `${d.block_id}:${Math.round(d.position)} ➤ ${d.value}`
		}
	}
}]);
```

#### stack

[#]()`new Plot.circular(elem).stack(layout, data)`

example:

```javascript
new Plot.circular(document.getElementById('canvas')).stack({
	fileUrl: '/dist/stack/GRCh37.json',
	fileType: 'json',
	configs: {
		innerRadius: 300,
		outerRadius: 320,
		labels: true,
		ticks: true
	}
}, [{
	circularType: 'highlight',
	name: 'cytobands',
	fileUrl: '/dist/stack/cytobands.csv',
	fileType: 'csv',
	configs: {
		innerRadius: 300,
		outerRadius: 320
	}
}, {
	circularType: 'stack',
	name: 'stack',
	fileUrl: '/dist/stack/stack.json',
	fileType: 'json',
	configs: {
		innerRadius: 0.7,
		outerRadius: 1,
		thickness: 4,
		margin: 80000,
		direction: 'out',
		strokeWidth: 0,
		color: function (d) {
			if (d.end - d.start > 150000) {
				return 'red'
			} else if (d.end - d.start > 120000) {
				return '#333'
			} else if (d.end - d.start > 90000) {
				return '#666'
			} else if (d.end - d.start > 60000) {
				return '#999'
			} else if (d.end - d.start > 30000) {
				return '#BBB'
			}
		},
		tips: function (d) {
			return `${d.chrom}:${d.start}-${d.end}`
		}
	}
}]);
```

