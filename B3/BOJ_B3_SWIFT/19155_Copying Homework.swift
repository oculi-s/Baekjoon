var n = Int(readLine()!)!
var a = readLine()!.split(separator:" ").map{Int($0)!}

for b in a{
  print(n-b+1, terminator:" ")
}
