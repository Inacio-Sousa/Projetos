function init() {
    var cabecalho = document.querySelector('.cabecalho_home');
    var cabecalhoEspaco = document.querySelector('.cabecalho-espaco_home');
    //calculando quantos px ate o cabelho em si
    var cabecalhoOffset = cabecalho.offsetTop;


    function verificaCabecalho() {
        //vejo quantos px de scroll q ja deu na pagina
        var scrollTop = window.scrollY;
        //altua do cabecalho
        var cabecalhoAltura = cabecalho.offsetHeight;

        if(scrollTop >= cabecalhoOffset) {
            //scroll da página passou do cabelho, passa a ser fixa
            cabecalho.classList.add('cabecalho--fixo_home');

            //ativa cabecalho-espaco para ocupar o espaço perdido
            cabecalhoEspaco.style.height = cabecalhoAltura + 'px';
        } else {
            //retira a classe adicional do cabelho
            cabecalho.classList.remove('cabecalho--fixo_home');

            //retira a altura do cabecalho-espaco
            cabecalhoEspaco.style.height = 0;
        }
    }
    //sempre q der scroll verifica
    window.addEventListener('scroll', verificaCabecalho);
    //semre q redimensiona verifica
    window.addEventListener('resize', verificaCabecalho);
}

window.addEventListener('load', init);