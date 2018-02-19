# Niby-Gra

Jest to praca domowa wykonana na zajęcia z przedmiotu Podstawy Programowania Obiektowego (AGH WFiIS 2 rok). 
Przy pisaniu tej pracy należalo nie korzystać z własnych struktur i klas - zadanie miało być napisane czysto proceduralnie (z wyjątkami w postaci obiektów takich jak std::cin, std::cout i std::endl).
Jest to implementacja prostej mini-gry RPG bez fabuły. Gra rozpoczyna się od wybrania przez użytkownika imienia swojego bohatera, następnie użytkownik rozdziela 20 punktów pomiędzy atrybuty:

atak fizyczny
obrona fizyczna
atak magiczny
obrona magiczna
życie
Użytkownik przypisuje punkty dla 4 pierwszych atrybutów, a pozostałe punkty zostają przypisane jako punkty życia według przelicznika, jeden punkt atrybutu = 2 punkty życia.

Następnie użytkownik jest atakowany przez potwory opisane tym samym zestawem parametrów. Pierwszy potwór ma w sumie 15 punktów atrybutów, które są rozdzielane
pomiędzy wszystkie atrybuty.

Podczas walki potwór losuje czy wykonuje atak magiczny czy fizyczny, co determinuje czy w walce użyte są parametry fizyczne czy magiczne.
Następnie obliczany jest atak potwora, jako atak_bazowy + losowa liczba z przedziału (0, atak_bazowy/2). Obrona bohatera obliczana jest
jako obrona_bazowa + losowa liczba z przedziału (0, obrona_bazowa/2). Różnica pomiędzy całkowitym atakiem i całkowitą obroną to zadane obrażenia.
Jeżeli obrażenia są mniejsze od 0, traktowane są jako zerowe. Wartość obrażeń jest odejmowana od punktów życia bohatera.

Następnie, jest tura bohatera, w której użytkownik wybiera, czy chce wykonać atak fizyczny czy magiczny. Mechanika ataku jest taka sama jak w przypadku potwora.

Potwór i użytkownik atakują na przemian dopóki życie jednego z nich nie spadnie do 0 lub poniżej.

Jeżeli zginął potwór, jego statystyki są zapisywane na liście pokonanych potworów, a użytkownik może wybrać, który ze swoich atrybutów chce zwiększyć o 1.
 Następnie użytkownik staje do walki z kolejnym losowo wygenerowanym potworem, który tym razem ma sumarycznie o 5 punktów atrybutów więcej niż poprzedni.

Jeżeli zginął użytkownik wypisane są statystki potwora, który go pokonał, następnie statystyki gracza, a na koniec lista pokonanych rzez gracza potworów.
