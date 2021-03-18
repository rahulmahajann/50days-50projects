const panels = document.querySelectorAll('.image')

panels.forEach((image) => {
    image.addEventListener('click', () => {
        removeactive()
        image.classList.add('active')
    })
})

function removeactive(){
    panels.forEach(image => {
        image.classList.remove('active')
    })
}