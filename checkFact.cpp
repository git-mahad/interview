const num = 4;

function checkFact(n){
	if(n === 0)
		return 1;
		
	return n * checkFact(n - 1)
}

console.log(checkFact(num))