src = open("src", "r")
dst = open("src.hpp", "w+")

sstr = src.readline();
while sstr:
    strarr = sstr.split("\n")[0];
    strarr = strarr.split("/*")[0];
    strarr = strarr.split(" ");
    if strarr[0] == '#define':
        dst.write ("#undef "+strarr[1]+"\n")
        dst.write ("constexpr auto "+strarr[1]+" = " + " ".join(strarr[2:]) + ";\n")
    else:
        dst.write(sstr)
    sstr = src.readline();