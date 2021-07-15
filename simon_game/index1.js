// game -> user
// ssare click button shade kr diye
// user input ki detail leli

//alert("press any key");
const color=['red','green','blue','yellow']

var level=1
var inbuilt = []
var user = []
var curr=0;
var btn = document.querySelectorAll('button')


//  game -> user
function newsequence(){
    inbuilt=[]
    for(var i=0; i<level; i++){
        var random_num = Math.floor((Math.random())*4)
        var random_color = color[random_num];
        inbuilt.push(random_color)
    }
}

var begin=false


btn.forEach((value)=>{
    value.addEventListener('click',(e)=>{
        var btn_clicked = e.target.id   //blue
        clicked(btn_clicked)
        if(btn_clicked!=inbuilt[curr])
        {
            alert("wrong!!, press any key");
            level=0;

        }
        else{
        curr++;

        if(curr==level){
            level++;
            curr=0;
            driver();

        }
        }

    })
});

document.addEventListener('keypress',()=>{


    
    driver();

    // level=1;
    // if(begin==false){
    //     begin=true
    //     newsequence()
    //     gameUser()
    
})


function clicked(col){
    document.getElementById(col).classList.add("clicked")
    setTimeout(()=>{
      document.getElementById(col).classList.remove("clicked")  
    },300)
}

function gameUser(){
    var start = 0
    let patern = setInterval(itr,1000)

    function itr(){
        if(start<inbuilt.length){
            var col = inbuilt[start]
            clicked(col)
            start+=1
        }else{
            clearInterval(patern)
        }
    }
}


function driver(){
    
    newsequence();
    gameUser();


}
