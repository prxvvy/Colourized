# Colourized

[![Version](https://img.shields.io/npm/v/colourized?color=red&logo=npm&style=for-the-badge)](https://www.npmjs.com/package/colourized)
[![Downloads](https://img.shields.io/npm/dw/colourized?logo=npm&style=for-the-badge)](https://www.npmjs.com/package/colourized)
[![Activity](https://img.shields.io/github/last-commit/prxvvy/Colourized?color=blue&logo=github&style=for-the-badge)](https://github.com/prxvvy/Colourized)
[![Github](https://img.shields.io/github/package-json/v/prxvvy/Colourized?color=yellow&logo=github&style=for-the-badge)](https://github.com/prxvvy/Colourized)
[![License](https://img.shields.io/github/license/prxvvy/Colourized?color=brown&logo=gnu&style=for-the-badge)](https://github.com/prxvvy/Colourized/blob/master/COPYING)

An **open source** and easy-to-use library to colour your [Node.js](https://nodejs.org/en/) console output.

![colours](https://github.com/prxvvy/Colourized/blob/master/screenshots/a2.jpg 'a')

---

## Installation

```
npm i colourized
```

## Usage

```js
const color = require('colourized');
```

## Examples

```js
const color = require('colourized');
/* import color from 'colourized'; */

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

---

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

### Light Background colours

-   bgLightRed
-   bgLightCyan
-   bgLightGrey (bgLightGray)
-   bgLightWhite
-   bgLightBlue
-   bgLightGreen
-   bgLightMagenta
-   bgLightYellow

### Styles

-   underline
-   italic
-   dim
-   inverse
-   bold

---

## Licensing

`Colourized` is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.
