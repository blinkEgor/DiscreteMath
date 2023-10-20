const peaks = ['A', 'B', 'C', 'D', 'E', 'F', 'G'];
console.log(`We have ${peaks.length} peaks`);

const shape = [
    [0, 3, 0, 0, 0, 2, 0],
    [3, 0, 3, 0, 0, 0, 6],
    [0, 3, 0, 3, 2, 0, 1],
    [0, 0, 3, 0, 5, 0, 0],
    [0, 0, 2, 5, 0, 4, 3],
    [2, 0, 0, 0, 4, 0, 3],
    [0, 6, 1, 0, 3, 3, 0]
];

function numOfShape() {
    let num = [];
    let str = [];
    let m = 0;
    for(let i = 0; i < shape.length; i++) {
        m++;
        for(let j = m; j < shape[i].length; j++) {
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
    let num = [];
    let str = [];
    let min = [[],[],[],[],[],[],[]];
    let m = 0;
    for(let i = 0; i < shape.length; i++) {
        m++;
        for(let j = 0; j < m; j++) {
            if(shape[j][i] != 0) {
                min[i].push(shape[j][i]);
            }
        }
        
    }
    m = 0;
    for(let i = 0; i < shape.length; i++) {
        m++;
        for(let j = 0; j < m; j++) {
            if(shape[j][i] != 0) {
                if(shape[j][i] == Math.min.apply(null, min[i])) {
                    num.push(shape[j][i]);
                    str.push(`${peaks[j]}${peaks[i]} = ${shape[j][i]}`)
                    break;
                }
            }
        }
        
    }
    console.log(`We have ${num.length} number of shape`);
    console.log(str);
}
shortcut();