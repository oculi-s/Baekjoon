let t = Int(readLine()!)!
for i in 1...t{
    let inp = readLine()!.split(separator:" ").map{Int($0)!}
    let p = inp[0], q = inp[1]
    var a = 1, b = 1, t = 0
    if (p > 2){
        for _ in 3...p{
            t = (a + b) % q
            a = b % q
            b = t % q
        }
    }
    print("Case #\(i): \(b % q)")
}
