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

function numOfShape() {
    let num = [];
    let str = [];
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

function shortcut() {
    let shapeMin = [[],[],[],[],[],[],[]];
    for(let i = 0; i < shape.length; i++) {
        for(let j = 0; j < shape[i].length; j++) {
            shapeMin[i].push(shape[j][i]);
        }
    }
    // console.log(shapeMin)
    
    let max;
    let one = 0;
    for(let i = 0; i < shapeMin.length; i++) {
        max = Math.max.apply(null, shapeMin[i]);
        for(let o = 0; o < shapeMin.length; o++) {
            if(shapeMin[i][o] != 0) {
                one++;
            }
        }
        for(let j = 0; j < shapeMin.length; j++) {
            
            if(shapeMin[i][j] != 0) {
                if(one > 1) {
                    if(shapeMin[i][j] == max) {
                        one = 0;
                        shapeMin[i][j] = 0 
                        // break;
                    }
                } else {
                    one = 0;
                }
            }
        }
    }

    let shapeRes = [[],[],[],[],[],[],[]];
    for(let i = 0; i < shapeMin.length; i++) {
        for(let j = 0; j < shapeMin[i].length; j++) {
            shapeRes[i].push(shapeMin[j][i]);
        }
    }
    let num = [];
    let str = [];
    for(let i = 0; i < shapeRes.length; i++) {
        for(let j = 0; j < shapeRes[i].length; j++) {
            if(shapeRes[i][j] != 0) {
                num.push(shapeRes[j][i]);
                str.push(`${peaks[i]}${peaks[j]} = ${shape[i][j]}`);
            }
        }
    }
    console.log('\nshortcut')
    console.log(`We have ${num.length} number of shape`);
    console.log(str);
}
shortcut();