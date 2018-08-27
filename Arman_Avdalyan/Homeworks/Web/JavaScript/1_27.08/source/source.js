function createTable(isFirstTime) {
    const container = document.getElementById('table');
    const car = document.getElementById('div_car');
    container.style.display = "inline";
    if (!isFirstTime) {
        car.style.display = "none";
        return;
    }
    const size = 8
    const divSize = 100 / size;
    for (let i = 0; i < size; ++i) {
        for (let j = 0; j < size; ++j) {
            let innerDiv = document.createElement('DIV');
            innerDiv.style.display = 'inline-block';
            innerDiv.style.borderWidth = '5';
            innerDiv.style.borderColor = "red";
            innerDiv.style.width = divSize + '%';
            innerDiv.style.height = divSize + '%';
            if (i == j || i == (size - j - 1)) {
                innerDiv.style.backgroundColor = 'white'
            } else {
                innerDiv.style.backgroundColor = 'black';
            }
            container.appendChild(innerDiv);
        }
    }
}

function buildContent(option) {
    const table = document.getElementById('table');
    const car = document.getElementById('div_car');
    car.style.display = "inline-block";
    table.style.display = "none";
    let title = document.getElementById('title');
    let image = document.getElementById('image_car');
    let text = document.getElementById('text');
    console.log("-------------");
    switch (option) {
        case 'Mercedes':
            title.innerHTML = "Mercedes-Benz";
            image.src = "images/Mercedes-Benz.jpg";
            text.innerHTML = mercedesText;
            break;
        case 'Bmw':
            title.innerHTML = "Bmw";
            image.src = "images/Bmw.jpg";
            text.innerHTML = bmwText;
            break;
        case 'Lexus':
            title.innerHTML = "Lexus";
            image.src = "images/Lexus.jpg";
            text.innerHTML = lexusText;
            break;
        case 'Audi':
            title.innerHTML = "Audi";
            image.src = "images/Audi.jpg";
            text.innerHTML = audiText;
            break;
    }
}

var mercedesText = "Mercedes-Benz is a global automobile marque and a\
    division of the German company Daimler AG. The brand is known for\
    luxury vehicles, buses, coaches, and lorries. The headquarters is\
    in Stuttgart, Baden-Württemberg.The name first appeared in 1926 under\
    Daimler-Benz. Mercedes-Benz traces its origins to Daimler-Motoren-Gesellschaft's\
    1901 Mercedes and Karl Benz's 1886 Benz Patent-Motorwagen, which is\
    widely regarded as the first gasoline-powered automobile. The slogan\
    for the brand is 'the best or nothing'.";

var bmwText = "BMW , originally an initialism\
    for Bayerische Motoren Werke in German, or Bavarian Motor Works in\
    English) is a German multinational company which currently produces\
    luxury automobiles and motorcycles, and also produced aircraft engines\
    until 1945.The company was founded in 1916 and has its headquarters in\
    Munich, Bavaria.BMW produces motor vehicles in Germany, Brazil, China,\
    India, South Africa, the United Kingdom, and the United States.In 2015,\
    BMW was the world's twelfth largest producer of motor vehicles, with 2,279,503\
    vehicles produced.[2] The Quandt family are long-term shareholders of the company,\
    with the remaining stocks owned by public float.";

var lexusText = "Lexus is the luxury vehicle division of Japanese automaker\
    Toyota. The Lexus marque is marketed in more than 70 countries and territories\
    worldwide and has become Japan's largest-selling make of premium cars. It has\
    ranked among the 10 largest Japanese global brands in market value. Lexus is\
    headquartered in Nagoya, Japan. Operational centers are located in Brussels,\
    Belgium and the U.S. in Plano, Texas.Lexus originated from a corporate project\
    to develop a new premium sedan, code-named F1, which began in 1983 and culminated\
    in the launch of the Lexus LS in 1989. Subsequently, the division added sedan, coupé,\
    convertible and SUV models. Lexus did not exist as a brand in its home market until\
    2005, and all vehicles marketed internationally as Lexus from 1989 to 2005 were\
    released in Japan under the Toyota marque and an equivalent model name. In 2005, a\
    hybrid version of the RX crossover debuted and additional hybrid models later joined\
    the division's lineup.";

var audiText = "Audi AG is a German automobile manufacturer that designs, engineers,\
    produces, markets and distributes luxury vehicles. Audi is a member of the Volkswagen\
    Group and has its roots at Ingolstadt, Bavaria, Germany. Audi-branded vehicles are\
    produced in nine production facilities worldwide.The origins of the company are complex,\
    going back to the early 20th century and the initial enterprises (Horch and the Audiwerke)\
    founded by engineer August Horch; and two other manufacturers (DKW and Wanderer), leading\
    to the foundation of Auto Union in 1932. The modern era of Audi essentially began in the\
    1960s when Auto Union was acquired by Volkswagen from Daimler-Benz.[9] After relaunching\
    the Audi brand with the 1965 introduction of the Audi F103 series, Volkswagen merged Auto\
    Union with NSU Motorenwerke in 1969, thus creating the present day form of the company.";