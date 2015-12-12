#!/bin/bash
if [[ $USER != root ]]; then
    echo "Ejecutar como root"
else
    echo "Desinstalando los programas..."
    apt-get remove git terminator vim
    rm -f ../../.gitconfig
    rm -f ../../.vimrc
    cd ../../
    echo "Fin"
    echo "(Elimina la carpeta principal: rm -rf Humberto/)"
fi
