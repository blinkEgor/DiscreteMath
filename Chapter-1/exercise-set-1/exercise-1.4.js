(() => {
    let first = 1;
    console.log(`initially first = ${first}`);
    let second = 1;
    console.log(`initially second = ${second}`);
    let next = first + second;

    while(next < 100) {
        console.log(`current next = ${next}`);
        first = second;
        second = next;
        next = first + second;
    }

    console.log(`stop loop, becaus next = ${next} > 100`)
})();