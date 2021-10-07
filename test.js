function RecuriveCopy(strInp, num) {
    if (num <= 0) {
        return strInp;
    }
    rec = RecuriveCopy(strInp, num - 1)
    return rec + strInp;
}
strInp = "a"
n = 10
output = RecuriveCopy(strInp, n)
if((n+1)%2 == 0){
    console.log(output + " has a(n) even numbers of "+strInp+"'s")
}else{
    console.log(output + " has a(n) odd numbers of "+strInp+"'s")
}
