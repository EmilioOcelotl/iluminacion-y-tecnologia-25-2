## Comunicación de Datos

Hay distintos tipos de protocolos para comunicar datos que nos ayudan a intercambiar distintos tipos de información entre dispositivos y entre aplicaciones. En esta ocasión revisaremos algunos protocolos de comunicación que pueden ser revelantes para la realización de proyectos con placas y en general, con tecnología. 

Abordaremos IR, Serial, WIFI, Ethernet, BT, DMX, OSC, MIDI.

Algunas diferencias importantes implican: conexiones alámbricas e inalámbricas, rango, tipo de aplicaciones, velocidad y latencia. 

Otro factor que puede ser relevante es la preocupación por la exposición prolongada a radiación (en comunicaciones inalámbricas). 

### Infrarrojo

Infrarrojo es un tipo de radiación electromagnética de mayor longitud de onda que la luz visible (es invisible para el ojo humano) pero menor que las microondas.

La radiación electromagética incluye ondas de radio, microondas, luz infrarroja, luz visible, luz ultravioleta, rayos X y rayos gamma.

Una parte específica de este espectro es utilizada para telecomunicaciones y señales de radio. 

Rango de frecuencia de la luz infrarroja: 300 GHz (gigahercios) y 430 THz (terahercios). Se utiliza para controles remotos, cámaras térmicas y comunicaciones ópticas. 

El consumo de energía es muy bajo. La tecnología IR utiliza poca energía porque se basa en la transmisión de luz infrarroja de corto alcance

Se utiliza en distancias cortas, línea de vista y se ve afectado por obstáculos. 

Puede usarse con otros elementos que envíen y reciban o que solo envíen como un control remoto. En algunos casos se puede puede usar como un sensor de proximidad. 


### Serial 

Las placas que estamos usando puede comunicarse vía Serial. Es la forma de comunicación más directa que podemos realizar entre la placa y cualquier otro dispositivo o programa. 

### Bluetooth 

Algunas placas no cuentan con BT pero pueden interactuar con módulos que permiten realizar conexiones Bluetooth, pero si ya enviamos los datos a un programa escrito en Python o a Processing/TouchDesigner podríamos utilizar esos datos sin problemas.

Bluetooth puede llegar a tener un coste energético bajo. 

### Red (WIFI y Ethernet)

Las placas pueden comunicarse por vía WIFI y Ethernet

Consumo de energía de moderado a alto, dependiendo del dispositivo y la intensidad de la transmisión. Los routers Wi-Fi y dispositivos móviles usan más energía cuando están conectados y transmitiendo datos constantemente.

### OSC

OSC requiere de una red para funcionar. Es un protocolo común de comunicación de datos en un contexto multimedia. 

### MIDI 

Protocolo de comunicación entre instrumentos musicales. La mayor parte de las conexiones que se pueden hacer con este procotolo son cableadas, actualmente hay opciones para enviar MIDI a través de Bluetooth o por medio de una red.

### DMX

DMX es una instancia de la comunicación serial. Es curioso que el tipo de comunicación es serial pero los cables para realizar esa conexión son de audio (voltaje).