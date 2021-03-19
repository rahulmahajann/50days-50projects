const progress = document.getElementById('progress')
const next_btn = document.getElementById('next')
const prev_btn = document.getElementById('last')
const steps = document.querySelectorAll('.circle')

let state = 1

next_btn.addEventListener('click', () =>{
    state++

    if(state > steps.length){
        state = steps.length
    }
    
    update()

})

prev_btn.addEventListener('click', () =>{
    state--

    if(state < 1){
        state = 1
    }

    update()

})

function update(){
    steps.forEach((circle,ind) => {
        if(ind < state){
            circle.classList.add('active')
        }else{
            circle.classList.remove('active')
        }
    })

    const actives = document.querySelectorAll('.active')

    progress.style.width = (actives.length - 1) / (steps.length - 1) * 100 + '%'

}