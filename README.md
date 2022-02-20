# Colourized

[![Version](https://img.shields.io/npm/v/colourized?color=red&logo=npm&style=for-the-badge)](https://www.npmjs.com/package/colourized)
[![Downloads](https://img.shields.io/npm/dw/colourized?logo=npm&style=for-the-badge)](https://www.npmjs.com/package/colourized)
[![Activity](https://img.shields.io/github/last-commit/prxvvy/Colourized?color=blue&logo=github&style=for-the-badge)](https://github.com/prxvvy/Colourized)
[![Github](https://img.shields.io/github/package-json/v/prxvvy/Colourized?color=yellow&logo=github&style=for-the-badge)](https://github.com/prxvvy/Colourized)
[![License](https://img.shields.io/github/license/prxvvy/Colourized?color=brown&logo=gnu&style=for-the-badge)](https://github.com/prxvvy/Colourized/blob/master/COPYING)

An **open source** and easy-to-use library to colour your [Node.js](https://nodejs.org/en/) console output.

![colours](https://github.com/prxvvy/Colourized/blob/master/screenshots/a.jpg 'a')

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

color.red('Red text');
color.red.bold('Red text and also bold');
color.red.inverse('Inverted red text');
```

---

| Text colours | Light text colours    | Background colours | Light Background colours  | Styles    |
| ------------ | --------------------- | ------------------ | ------------------------- | --------- |
| red          | lightRed              | bgRed              | bgLightRed                | underline |
| black        | lightBlack            | bgBlack            | bgLightCyan               | italic    |
| magenta      | lightYellow           | bgCyan             | bgLightGrey (bgLightGray) | dim       |
| cyan         | lightWhite            | bgGrey (bgGray)    | bgLightWhite              | inverse   |
| white        | lightCyan             | bgWhite            | bgLightBlue               | bold      |
| grey (gray)  | lightGrey (lightGray) | bgBlue             | bgLightGreen              |
| blue         | lightMagenta          | bgGreen            | bgLightMagenta            |
| green        | lightBlue             | bgMagenta          | bgLightYellow             |
| yellow       | lightGreen            | bgYellow           |

---

## Licensing

`Colourized` is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.
