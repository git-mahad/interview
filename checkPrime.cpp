const num = 21;
  
function checkPrime(p){
  for(let i = 2; i < num; i++){
    if(num % i == 0){
      return false
    }
  }
    return true
}

console.log(checkPrime(num))