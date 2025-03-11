# Prosjekt i TDT4102 vår 2025
Contibuters: Håkon og Vetle Støren

## Idé
Vi tenker å lage et program som kan ta inn et bilde, og deretter starte fra et blankt ark og bygge opp bildet av ulike former med forskjellige farger, ved å prøve å plassere en og en form, og så velge den formen som gjør at bildet blir nærmere det originale. Vi tenker å gjøre dette ved hjelp av AnimationWindow. 
Det skal være mulig å lagre bildene i filer, og lese filer for å komme tilbale til bildene. I tillegg må formene være lagret i filer. 
Vi må finne en algortime for å finne hvilken form vi skal plassere hvor og når. Vi tenker at vi begynner med store og "grove" former og så blir formene mindre og mindre jo lenger tid det går så vi får mer og mer detaljer.

## Hva som må med
- Vindu
- Lese form fra fil
- Lagre bilde til fil
- Lese oppbygd bilde fra fil steg for steg
- Algoritme for å bestemme hvilken form som skal med
    - Måte å sammenligne farger
    - Måte å gå gjennom alle former/farger på en rask og effektiv måte
        - Kanskje mulig å spare tid ved å lagre tidligere sammenligningsverdier fra former på steder som ikke er endret enda?
- GUI
    - Knapp for å lagre bilde
    - Knapp for å uploade bilde
    - Knapp for å starte algoritme
    - Knapp for å spille av et allerede ferdig bilde
- Matriseklasse
    - For å kunne representere bilder og farger og former trenger vi en matrise
- Formklasse
    - Kan lage en klasse for hver form som hver har disse medlemsfunksjonene:
        - placeShape(topleft, color)


