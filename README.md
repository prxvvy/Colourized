# Colourized

## _Sometimes colorized, sometimes colourized_

An **open source** and easy-to-use library to colour your [Node.js](https://nodejs.org/en/) console output.

### _Do not pay for open source code!_

## Installation

```
npm install colourized
```

### Text colours

-   red
-   black
-   magenta
-   cyan
-   white
-   grey (gray)
-   blue
-   green
-   yellow

### Light text colours

-   lightRed
-   lightBlack
-   lightYellow
-   lightWhite
-   lightCyan
-   lightGrey (lightGray)
-   lightMagenta
-   lightBlue
-   lightGreen

### Background colours

-   bgRed
-   bgBlack
-   bgCyan
-   bgGrey (bgGray)
-   bgWhite
-   bgBlue
-   bgGreen
-   bgMagenta
-   bgYellow

### Styles

-   underline

## Usage

```js
const color = require('colourized');

console.log(color.red('Hello World! This output is gonna be red.'));
console.log(color.yellow('Hello World! This output is gonna be yellow.'));
console.log(color.green('Hello World! This output is gonna be green.'));
console.log(color.blue('Hello World! This output is gonna be blue.'));
console.log(color.black('Hello World! This output is gonna be black.'));
console.log(color.magenta('Hello World! This output is gonna be magenta.'));
console.log(
	color.black.bgRed(
		'Hello World! This output is gonna be black font with red background.'
	)
);
```

Typescript?

```ts
import color from 'colourized';

console.log(color.red('Hello World! This output is gonna be red.'));
console.log(color.yellow('Hello World! This output is gonna be yellow.'));
console.log(color.green('Hello World! This output is gonna be green.'));
console.log(color.blue('Hello World! This output is gonna be blue.'));
console.log(color.black('Hello World! This output is gonna be black.'));
console.log(color.magenta('Hello World! This output is gonna be magenta.'));
console.log(
	color.black.bgRed(
		'Hello World! This output is gonna be black font with red background.'
	)
);
```

![](https://github.com/prxvvy/Colourized/blob/master/screenshots/a.jpg 'Colors')

## Licensing

`Colourized` is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.
