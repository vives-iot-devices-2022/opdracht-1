# opdracht-1

> Resultaat Opdracht 1 26/09/2022

Bouw een mbed applicatie dat volgende functionaliteit heeft:

* Status led dat elke 3 seconden de groene led laat knipperen.
* Status bericht elke 5 seconden zenden via de seriële poort.

De applicatie wordt gebouwd aan de hand van een [NUCLEO_L476RG](https://os.mbed.com/platforms/ST-Nucleo-L476RG/) samen met een [mbed Application Shield](https://os.mbed.com/components/mbed-Application-Shield/)

De status led knippert elke keer 2 maal waarbij de led 20ms aan is, en tussentijds 100ms uit is.

Het status bericht bevat de tekst `Status OK`.

De applicatie demonstreert het implementeren van meerdere taken op een microcontroller. Deze implementatie demonstreert de toepassing van [`EventQueue`](https://os.mbed.com/docs/mbed-os/v6.15/apis/eventqueue.html) uit de [mbed-os API](https://os.mbed.com/docs/mbed-os/v6.15/apis/index.html)

Merk op dat dit programma het `bare-metal` profiel volgt. Om `EventQueue`'s te ondersteunen is het nodig om `events` ook te gebruiken (`requires` key in de `mbed_app.json`).

## Refactoring

De [`main`](https://github.com/vives-iot-devices-2022/opdracht-1/tree/main) branch bevat het eindresultaat uit de les na _refactoring_. De implementatie bestaat uit een object georiënteerde aanpak waarbij de onderdelen in klassen worden opgebouwd. In C++ worden klassen gedeclareerd in `.h` bestanden en gedefinieerd in `.cpp` bestanden.

In de [`not-oop`](https://github.com/vives-iot-devices-2022/opdracht-1/tree/not-oop) branch wordt de implementatie getoond zonder object oriëntatie principes (functionele opbouw). Dit ter referentie.
