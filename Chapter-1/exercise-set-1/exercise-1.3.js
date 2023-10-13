(() => {
    const m = 3;
    const n = 4;

    let i = 1, j = m;

    while(i != n) {
        i++;
        j *= m;
    }

    console.log(`j = ${j}`); // 81
    console.log(`i = ${i}`); // 4
})();

// (() => {
//     const m = 3;
//     const n = 0;

//     let i = 1, j = m;

//     while(i != n) {
//         i++;
//         j *= m;
//     }

//     // бесконечный цикл
// })();