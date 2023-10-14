(() => {
    const n = 6;
    let k = 1;
    let l = 0;
    let sum = 0;
    let print1 = ``, print2 = ``, print3 = ``;
    while(k < 2 * n) {
        print1 = `l = ${l} + ${k} = ${l+k};`;
        l += k;
        print2 = `sum = ${sum} + ${l} = ${sum+l};`;
        sum += l;
        print3 = `k = ${k} + 2 = ${k+2}`;
        k += 2;
        console.log(`${print1} ${print2} ${print3}`)
    }
    console.log(`Ansver: sum = ${sum}`);
})();

// l = 0 + 1 = 1; sum = 0 + 1 = 1; k = 1 + 2 = 3
// l = 1 + 3 = 4; sum = 1 + 4 = 5; k = 3 + 2 = 5
// l = 4 + 5 = 9; sum = 5 + 9 = 14; k = 5 + 2 = 7
// l = 9 + 7 = 16; sum = 14 + 16 = 30; k = 7 + 2 = 9
// l = 16 + 9 = 25; sum = 30 + 25 = 55; k = 9 + 2 = 11
// l = 25 + 11 = 36; sum = 55 + 36 = 91; k = 11 + 2 = 13
// Ansver: sum = 91