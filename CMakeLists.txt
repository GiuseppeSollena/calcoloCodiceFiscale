cmake_minimum_required(VERSION 3.24)
project(calcoloCodiceFiscale)

set(CMAKE_CXX_STANDARD 17)

add_executable(calcoloCodiceFiscale main.c CF.h creoData.c controlloData.c EstraiNomeCognome.c ConsVoc.c controlloNome.c creaComune.c ultimaLettera.c)
