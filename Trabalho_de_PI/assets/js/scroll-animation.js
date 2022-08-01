const scrollanima = document.querySelector('[data-anima="scroll"]');

//a altura da janela, obs: (*3.2) e a multipliicaçao dela
const metadeWindow = window.innerHeight * 3.2

function animarScroll(){
    //distancia entre o topo e a janela(window)
    const topoItem = scrollanima.getBoundingClientRect().top
    //estouu tirando o topo em relaçao ao innerheight da janela, (< 0) qd a janela tiver com numero negativo aparece o itemvisivel ou seja adiciona a classa show-button
    const itemVisivel = topoItem - metadeWindow < 0

    if(itemVisivel){
        scrollanima.classList.add('show-button')
    }
    else{
        scrollanima.classList.remove('show-button')
    }


}
//sempre q rolar vai ativar a funçao
window.addEventListener('scroll' ,animarScroll);