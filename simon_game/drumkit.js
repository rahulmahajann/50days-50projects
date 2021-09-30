var butt=document.querySelectorAll("button")


butt.forEach((value,index) => {
    value.addEventListener('click', ()=>{
    //console.log(`${} daba`)
    var btn_value=value.innerHTML;
    sound(btn_value);
    }
    )

    
})

document.addEventListener('keypress',(e)=>{
    sound(e.key);
})

function sound(inp)
{
    if(inp=='a')
       { var sound1=new Audio("sounds/Drum Kit Completed_sounds_kick-bass.mp3");
        sound1.play();}
        
    else if(inp=='b')
        {var sound2=new Audio("sounds/Drum Kit Completed_sounds_snare.mp3");
        sound2.play();}

    else if(inp=='c')
        {var sound3=new Audio("sounds/Drum Kit Completed_sounds_tom-1.mp3");
        sound3.play();}
    else if(inp=='d')
        {var sound4=new Audio("sounds/Drum Kit Completed_sounds_tom-4.mp3");
        sound4.play();}

    else if(inp=='e')
        {var sound5=new Audio("sounds/Drum Kit Completed_sounds_crash.mp3");
        sound5.play();}
        else
        {};


}

//console.log(butt[0].innerText)
