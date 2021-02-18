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


function ok(x, y){
    return x >= 0 && x <= 9 * y;
}

function main(){
    let t = 1;
    while(t--){
        let [m, s] = readLine().split(' ').map(Number);
        let p = '', q = '';
        let n = s;
        for(let i=0; i<m; i++){
            for(let j=0; j<10; j++){
                if((i || j || (m == 1 && s == 0)) && ok(s - j, m - i - 1)){
                    p += j;
                    s -= j;
                    break;
                }
            }
            for(let j=9; j>=0; j--){
                if((i || j || (m == 1 && n == 0)) && ok(n - j, m - i - 1)){
                    q += j;
                    n -= j;
                    break;
                }
            }
        }
        if(p.length != m){
            console.log("-1 -1");
        }
        else{
            console.log(`${p} ${q}`);
        }
    }
}