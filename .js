// FOR IN LOOP IN JS

<script>
  var str="";
  var name={fname:"Madhu",lname:"Sri",age:21}
  var x;
for(x in name){
  str += name[x];
}
document.getElementById("demo").innerhtml=str;
</script>


//BREAK AND CONTINUE STATEMENT

<script>
 var x;
 for(x=1;x<=5;x++){
   if(x!=4){
     console.log(x);
   }else{
     break;
   }
 }
</script>

//CONTINUE
<script>
let text = '';

for (let i = 0; i<10 < ; i++) {
  if (i === 3) {
    continue;
  }
  text += i;
}

console.log(text);
</script>

//SWITCH

var day=2;
switch(day){
  case 1:
    document.write("Monday");
    break;
    
  case 2:
    document.write("tuesday");
    break;
    
 case 3:
    document.write("wednesday");
    break;
    
 case 4:
    document.write("thursday");
    break;
 
 case 5:
    document.write("friday");
    break;
    
 case 6:
    document.write("saturday");
    break;
    
  default:
    document.write("no input");
}
