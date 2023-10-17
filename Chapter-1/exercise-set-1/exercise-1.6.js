const peaks = ['A', 'B', 'C', 'D', 'E', 'F', 'G'];
console.log(`We have ${peaks.length} peaks`);

const shape = [
    [0, 3, 0, 0, 0, 2, 0],
    [0, 0, 3, 0, 0, 0, 6],
    [0, 0, 0, 3, 2, 0, 1],
    [0, 0, 0, 0, 5, 0, 0],
    [0, 0, 0, 0, 0, 4, 3],
    [0, 0, 0, 0, 0, 0, 3],
    [0, 0, 0, 0, 0, 0, 0]
];

let num = [];
let str = [];

function numOfShape() {
    for(let i = 0; i < shape.length; i++) {
        for(let j = 0; j < shape[i].length; j++) {
            if(shape[i][j] != 0) {
                num.push(shape[i][j]);
                str.push(`${peaks[i]}${peaks[j]} = ${shape[i][j]}`);
            }
        }
    }
    console.log(`We have ${num.length} number of shape`);
    console.log(str);
}
numOfShape();

num.sort();

let shapeMinStr = [];

function shortcut() {
    let shapeMinCount = [[],[],[],[],[],[],[]];
    for(let i = 0; i < shape.length; i++) {
        for(let j = 0; j < shape[i].length; j++) {
            if(shape[i][j] != 0) {
                shapeMinCount[j].push(shape[i][j]);
            }
        }
    }

    let shapeMin = [];
    for(let i = 0; i < shapeMinCount.length; i++) {
        let c = Math.min.apply(null, shapeMinCount[i]);
        if(c != Infinity) {
            shapeMin.push(c);
        }
    }

    let sum = shapeMin.reduce(function (x, y) {
        return x + y;
    }, 0);
    console.log(`Sum shapeMin = ${sum}`);

}
shortcut();