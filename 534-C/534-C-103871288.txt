let inputString = '';
let currentLine = 0;
process.stdin.on('data', (data) => {
    inputString += data;
})
process.stdin.on('end', function (){
    inputString = inputString
        .trim()
        .split('\n')
        .map((str) => str.trim());
    main();
})
function readLine(){
    return inputString[currentLine++];
}


function main(){
    let t = 1;
    while(t--){
        let [n, k] = readLine().split(' ').map(Number);
        let a = readLine().split(' ').map(Number);
        let sum = 0;
        for(let i=0; i<n; i++){
            sum += a[i];
        }
        let output = '';
        for(let i=0; i<n; i++){
            let lb = Math.max(k - sum + a[i], 1);
            let ub = Math.min(a[i], k - n + 1);
            let res = a[i] - (ub - lb + 1);
            output += res;
            output += ' ';
        }
        console.log(output);

    }
}