// a.
(() => {
    const n = 3;

    let f = 1;
    for(let i = 1; i <= n; i++) {
        f *= i;
    }
    console.log(`f = ${f}`); // 6
})();

// b.
(() => {
    const n = 5;

    let f = 1;
    for(let i = 1; i <= n; i++) {
        f *= i;
    }
    console.log(`f = ${f}`); // 120
})();