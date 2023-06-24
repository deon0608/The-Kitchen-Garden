// Variables

var soilType = "loamy";
var vegetableType = [];
var plantingTime = [];

// Functions 

//1
function selectSoilType(){
	if(soilType == "loamy"){
		console.log("Loamy soil is a great choice for a kitchen garden!");
	} else {
		console.log("It's recommended to choose loamy soil for better results!");
	}
} 

//2
function chooseVegetables(){
	vegetableType = ["carrots", "onions", "lettuce", "spinach", "radishes", "tomatoes", "peppers", "cucumbers"];
	console.log("Vegetables suitable for kitchen gardens are " + vegetableType + ".");
}

//3
function determinePlantingTime(){
	plantingTime = ["spring", "summer", "autumn"];
	console.log("The best times to plant a kitchen garden are " + plantingTime + ".");
}

//4
function prepareGround(){
	console.log("Prepare the ground by first tilling it and adding compost and fertilizer for best results.");
}

//5
function plantVegetables(){
	console.log("Using a garden shovel, dig shallow trenches for the roots of the vegetables, and cover with soil.");
}

//6
function waterPlants(){
	console.log("Water your plants regularly to ensure they receive enough moisture.");
}

//7
function maintainGarden(){
	console.log("Be sure to weed, mulch and fertilize your kitchen garden to maintain healthy plants.");
}

//8
function harvestProduce(){
	console.log("Once the vegetables are ready, harvest them in the morning for best flavor and texture!");
}

//9
function enjoyGarden(){
	console.log("Enjoy the fruits (and vegetables!) of your hard labor!");
}

// Main Program

selectSoilType();
chooseVegetables();
determinePlantingTime();
prepareGround();
plantVegetables();
waterPlants();
maintainGarden();
harvestProduce();
enjoyGarden();