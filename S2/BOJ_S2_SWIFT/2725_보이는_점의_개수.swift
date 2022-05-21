func gcd(_ p:Int,_ q:Int)->Int{
    var a = p
    var b = q
    var c = q
    while(b > 0){
        b = a % b
        a = c
        c = b
    }
    return a
}

var g = Array(repeating: Array(repeating: 0, count: 1001), count: 1001)
for i in 1...1000{
    for j in 1...i{
        g[i][j] = gcd(i, j)
    }
}

let t = Int(readLine()!)!
for _ in 1...t{
    let n = Int(readLine()!)!
    var c = n
    if (n > 2){
        for j in 2...n-1{
            for k in j+1...n{
                if (g[k][j] == 1){
                    c += 1
                }
            }
        }
    }
    print(c * 2 + 1)
}
