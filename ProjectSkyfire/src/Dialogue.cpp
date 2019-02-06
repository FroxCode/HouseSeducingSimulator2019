#include "Dialogue.h"

/////////////////////////
// TODO: Clean up
//		 Replace sprite/background asset file names [ 10 / 10 ]
//		 Insert dialogue for each character [ 10 / 10 ]
//		 PICK_REACTIONS replacement
//		 Add new replacement text from doc (edited dialogue of game characters)
/////////////////////////


//////////////////////////////Menu///////////////////////////////
const std::string MENU_BACKGROUND = "assets/sprites/background/menu.png";
const std::string MENU_PLAY_BUTTON = "assets/sprites/ui/playButton.png";


////////////////////////Real Etate Agent/////////////////////////
const std::string Dialogue::REA_SPRITE = "assets/sprites/characters/RealEstateAgent.png";
const std::string Dialogue::REA_BACKGROUND = "assets/sprites/background/EstateAgentsOffice.png";

const std::string Dialogue::REA_WELCOME = "";
const std::string Dialogue::REA_CHOOSE_DATE = "";
const std::string Dialogue::REA_CONFIRM = "Continue";


////////////////////////Dale/////////////////////////
const std::string Dialogue::DALE_SPRITE = "assets/sprites/characters/LogCabin.png";
const std::string Dialogue::DALE_BACKGROUND = "assets/sprites/background/Woods.png";

const std::string Dialogue::DALE_NAME = "Dale";
const std::string Dialogue::DALE_AGE = "24";
const std::string Dialogue::DALE_ARCHITECTURE = "Log Cabin";
const std::vector<std::string> Dialogue::DALE_TRAITS = { "Adventurous", "Loves Meat",
"Hates Communists", "Loves Capitalism", "Obsessively Patriotic", "Deadpan" };


const std::vector<std::string>Dialogue::DALE_QUESTIONS = {
	"Hi there, the name’s Dale, how do you like your steak?",
	"Huntin’ bucks or fly fishin’?",
	"What's your ideal date?" };

const std::vector<std::string>Dialogue::DALE_QUESTION_ONE_ANSWERS = {
	"I am a vegetarian, good sir.",
	"Medium rare.",
	"I love my steak fresh off the carcass, when you can still smell the kill." };
const std::vector<std::string>Dialogue::DALE_QUESTION_TWO_ANSWERS = {
	"I’m not interested in the outdoors, it’s terrifying to go outside.",
	"I like hunting, but also, I like fishing.",
	"If I could hunt bucks all year round, you bet your bottom dollar I would!" };
const std::vector<std::string>Dialogue::DALE_QUESTION_THREE_ANSWERS = {
	"I like to watch rom coms and eat popcorn, gluten free, of course",
	"I like the idea of doing something new and adventurous in the wild.",
	"My perfect date starts with a big ol’ juicy steak in the morning, go straight to hunting right after, and then, at night, research government conspiracies, don't trust the government! They be spying on you!" };


const std::vector<std::string>Dialogue::DALE_IMPRESSION = {
	"I’m sorry, I think you are working for the government, trying to trick me into giving you all of my secrets.",
	"I like you, but I love huntin’ more.",
	"You had me at huntin’." };

const std::vector<std::string>Dialogue::DALE_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Remy/////////////////////////
const std::string Dialogue::REMY_SPRITE = "assets/sprites/characters/BeachHouse.png";
const std::string Dialogue::REMY_BACKGROUND = "assets/sprites/background/Gym.png";

const std::string Dialogue::REMY_NAME = "Remy";
const std::string Dialogue::REMY_AGE = "30";
const std::string Dialogue::REMY_ARCHITECTURE = "Beach House";
const std::vector<std::string>Dialogue::REMY_TRAITS = { "Fit Freak", "Flirty",
"Adventurous", "Dirty Gutters", "Draughty", "Burst Pipes" };


const std::vector<std::string>Dialogue::REMY_QUESTIONS = {
	"Hey, I’m Remy. Do you know how to have a good time?",
	"Do you prefer going to the gym or staying at home watching TV?",
	"Do you think you could handle a house like me?" };

const std::vector<std::string>Dialogue::REMY_QUESTION_ONE_ANSWERS = {
	"Nothing like curling up with a good book and being in bed by 8",
	"I’ll go out with my friends every now and then.",
	"Oh baby, you can count on it, party every night and then some!" };
const std::vector<std::string>Dialogue::REMY_QUESTION_TWO_ANSWERS = {
	"Working out is too much effort, watching TV is where it’s at.",
	"A bit of both.",
	"Just call me the gym bunny, because I’m hopping in there all the time." };
const std::vector<std::string>Dialogue::REMY_QUESTION_THREE_ANSWERS = {
	"I don’t even like the beach.",
	"I’d definitely give it a shot.",
	"The real question is, do you think you could handle me inside you?" };


const std::vector<std::string>Dialogue::REMY_IMPRESSION = {
	"Ugh, get out of here!",
	"Eeeeh, not sure if you are my type or not...",
	"I think we’re both about to have a little fun!" };

const std::vector<std::string>Dialogue::REMY_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Todd/////////////////////////
const std::string Dialogue::TODD_SPRITE = "assets/sprites/characters/Suburban.png";
const std::string Dialogue::TODD_BACKGROUND = "assets/sprites/background/BBQ.png";

const std::string Dialogue::TODD_NAME = "Todd";
const std::string Dialogue::TODD_AGE = "38";
const std::string Dialogue::TODD_ARCHITECTURE = "Suburban";
const std::vector<std::string>Dialogue::TODD_TRAITS = { "Family Orientated", "Patriotic",
"Laid Back", "Dull", "Squeaky Stairs", "Loud Neighbours" };


const std::vector<std::string>Dialogue::TODD_QUESTIONS = {
	"Howdy, name’s Todd, mighty fine day today, am I right? You thinking of settling down and starting a family?",
	"How would you prefer to spend your Saturday - out in the evening at some overpriced club, or a dandy ol’ BBQ? BYOB of course, haha!",
	"You ever thought about joining the neighbourhood watch?" };

const std::vector<std::string>Dialogue::TODD_QUESTION_ONE_ANSWERS = {
	"No way am I thinking about setting down, I love being single and free to live my life.",
	"Eh, maybe in the future?",
	"Absolutely, I can’t wait to break out the DIY kit and make a house a home." };
const std::vector<std::string>Dialogue::TODD_QUESTION_TWO_ANSWERS = {
	"A BBQ sounds like such a boring way to spend a Saturday, going out.", 
	"Either or, both seem like nice ways to spend a Saturday.", 
	"You betcha, shotgun the grill though, I make a mean burger!" };
const std::vector<std::string>Dialogue::TODD_QUESTION_THREE_ANSWERS = {
	"That sounds like a cops job, no thank you.", 
	"I’m pretty sure everyone is trustworthy around here.", 
	"Yessir, gotta keep an eye out for any dodgy eggs lurking around." };


const std::vector<std::string>Dialogue::TODD_IMPRESSION = {
	"You’re definitely not my type of person, I’m outta here!",
	"You seem like an alright person, keep it cool out there!",
	"About the BBQ… do you want to come over for one this Saturday?" };

const std::vector<std::string>Dialogue::TODD_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Magnum/////////////////////////
const std::string Dialogue::MAGNUM_SPRITE = "assets/sprites/characters/ModernHighEndHouse.png";
const std::string Dialogue::MAGNUM_BACKGROUND = "assets/sprites/background/ArtGallery.png";

const std::string Dialogue::MAGNUM_NAME = "Magnum";
const std::string Dialogue::MAGNUM_AGE = "23";
const std::string Dialogue::MAGNUM_ARCHITECTURE = "Modern";
const std::vector<std::string>Dialogue::MAGNUM_TRAITS = { "Fit Freak", "Aggressive",
"Patriotic", "Snob", "Rude", "Selfish" };


const std::vector<std::string>Dialogue::MAGNUM_QUESTIONS = {
	"Yo, the name is Magnum. What do you think of these bad boy muscles?",
	"Would you rather head out to the gym to work out like a champ, or just chill out at home instead?",
	"What do you think of men who work out?" };

const std::vector<std::string>Dialogue::MAGNUM_QUESTION_ONE_ANSWERS = {
	"What the, you call those things muscles?",
	"They’re not too bad, dude.",
	"Whoa, you got some mad muscles! Can I touch them?" };
const std::vector<std::string>Dialogue::MAGNUM_QUESTION_TWO_ANSWERS = {
	"Chill out at home, easily. Working out is too much work.", 
	"Might do either, mix things up from time to time.", 
	"What kind of person wouldn’t want to workout when given the opportunity?" };
const std::vector<std::string>Dialogue::MAGNUM_QUESTION_THREE_ANSWERS = {
	"It’s whatever, I really don’t care about that kind of thing.",
	"They’re alright, nothing wrong with working out and looking after your body.",
	"I think it’s hot, especially when they are incredibly muscular. They can have me anytime!" };


const std::vector<std::string>Dialogue::MAGNUM_IMPRESSION = {
	"Get out of here, before I have to show you out - the hard way...",
	"Maybe we should hang out at the gym sometime?",
	"Well now… I hope you’re ready for a vigorous workout tonight!" };

const std::vector<std::string>Dialogue::MAGNUM_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Mabel/////////////////////////
const std::string Dialogue::MABEL_SPRITE = "assets/sprites/characters/PrairiePioneer.png";
const std::string Dialogue::MABEL_BACKGROUND = "assets/sprites/background/PrairieChurch.png";

const std::string Dialogue::MABEL_NAME = "Mabel";
const std::string Dialogue::MABEL_AGE = "19";
const std::string Dialogue::MABEL_ARCHITECTURE = "Prairie";
const std::vector<std::string>Dialogue::MABEL_TRAITS = {	"Quiet", "Caring",
"Christian", "Dull", "Old Fashioned", "No Heating" };


const std::vector<std::string>Dialogue::MABEL_QUESTIONS = {
	"Um… hello. My name is Mabel. Are you a fellow Christian like myself?",
	"Old Testament or New Testament?",
	"What would your ideal evening look like?" };

const std::vector<std::string>Dialogue::MABEL_QUESTION_ONE_ANSWERS = {
	"Nope, religion is definitely not for me, couldn’t care less about it.",
	"Ah yeah, Christianity is alright. It’s a shame that the Jesus bloke died the way he did.", 
	"The Bible is the single greatest book ever written! Jesus was a wonderful man, long live his kind spirit!" };
const std::vector<std::string>Dialogue::MABEL_QUESTION_TWO_ANSWERS = {
	"Excuse me, what are you actually on about?",
	"Not sure, probably new, though old is not too bad either.",
	"New, it’s by far better, it’s got Jesus and everything!" };
const std::vector<std::string>Dialogue::MABEL_QUESTION_THREE_ANSWERS = {
	"Going out clubbing with the gang, nothing like it!",
	"Watching a bit of TV and relaxing, probably.",
	"Maybe reading a nice book, preferably something like the Bible. What a read, that book is!" };


const std::vector<std::string>Dialogue::MABEL_IMPRESSION = {
	"I’m sorry, but I must ask you to leave my presence.",
	"Hmm… not sure what to think about you, maybe we should talk again some other time.",
	"Well, aren’t you a lovely sort… I think I’d be interested in getting to know you more!" };

const std::vector<std::string>Dialogue::MABEL_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Firenze/////////////////////////
const std::string Dialogue::FIRENZE_SPRITE = "assets/sprites/characters/Ranch.png";
const std::string Dialogue::FIRENZE_BACKGROUND = "assets/sprites/background/Stable.png";

const std::string Dialogue::FIRENZE_NAME = "Firenze";
const std::string Dialogue::FIRENZE_AGE = "328";
const std::string Dialogue::FIRENZE_ARCHITECTURE = "Ranch";
const std::vector<std::string>Dialogue::FIRENZE_TRAITS = { "Western", "Respectful",
	"Laid Back", "Old Fashioned", "Bad Insulation", "Commitment Issues" };


const std::vector<std::string>Dialogue::FIRENZE_QUESTIONS = {
	"Hello,  I’m Firenze… why do you come here, child?",
	"Would you prefer to be a centaur like myself, or just a regular old human?",
	"What do feel when you see me?" };

const std::vector<std::string>Dialogue::FIRENZE_QUESTION_ONE_ANSWERS = {
	"Oh sweet Jesus, Mary and Joseph, what the heck are you?!?",
	"You just caught my attention, that’s all.",
	"You definitely caught my curiosity, so I thought I'd try to get to know you better." };
const std::vector<std::string>Dialogue::FIRENZE_QUESTION_TWO_ANSWERS = {
	"What kind of question is that?!?",
	"I really do not know, doesn’t seem like it’d matter too much...",
	"Definitely a centaur, it looks absolutely amazing!" };
const std::vector<std::string>Dialogue::FIRENZE_QUESTION_THREE_ANSWERS = {
	"Well… I don’t know why, but you make me feel quite hungry...",
	"I don’t know, you definitely look cool though.",
	"I could “ride” you all day." };


const std::vector<std::string>Dialogue::FIRENZE_IMPRESSION = {
	"I’m too old for this… I’m out.",
	"You don’t seem like a person I find interesting, sorry.",
	"Come with me, I will take you on a magical ride." };

const std::vector<std::string>Dialogue::FIRENZE_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Elyse/////////////////////////
const std::string Dialogue::ELYSE_SPRITE = "assets/sprites/characters/Meditteranean.png";
const std::string Dialogue::ELYSE_BACKGROUND = "assets/sprites/background/DogPark.png";

const std::string Dialogue::ELYSE_NAME = "Elyse";
const std::string Dialogue::ELYSE_AGE = "32";
const std::string Dialogue::ELYSE_ARCHITECTURE = "Mediterranean";
const std::vector<std::string>Dialogue::ELYSE_TRAITS = { "Funny", "Bubbly",
"Cheerful",	"Draughty", "Commitment Issues", "Slob" };


const std::vector<std::string>Dialogue::ELYSE_QUESTIONS = {
	"Hi, my name is Elise! What is your favourite dog breed?",
	"Republican or Democrat?",
	"Are you a butch alpha male?" };

const std::vector<std::string>Dialogue::ELYSE_QUESTION_ONE_ANSWERS = {
	"Pure breed perfection, mutts get out.",
	"I prefer cats.",
	"Retriever/lab/husky/jindo mix, of course. They are the best boys." };
const std::vector<std::string>Dialogue::ELYSE_QUESTION_TWO_ANSWERS = {
	"I am a socialist feminist SJW. Fear me!",
	"I am a centrist.",
	"Make America Great Again!" };
const std::vector<std::string>Dialogue::ELYSE_QUESTION_THREE_ANSWERS = {
	"I am the soyest of boys, a purebred beta male.",
	"I’m not even a guy, but okay.",
	"I am a direct descendant of Leonidas, the Spartan king. His blood runs through my T H I C C masculine veins." };


const std::vector<std::string>Dialogue::ELYSE_IMPRESSION = {
	"Soy boys are not welcome in this space.",
	"You kind of stink, small man.",
	"Wanna come walk Benson with me?" };

const std::vector<std::string>Dialogue::ELYSE_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Sonny Six-String/////////////////////////
const std::string Dialogue::SONNY_SPRITE = "assets/sprites/characters/Shack.png";
const std::string Dialogue::SONNY_BACKGROUND = "assets/sprites/background/OpenAirConcert.png";

const std::string Dialogue::SONNY_NAME = "Sonny Six-String";
const std::string Dialogue::SONNY_AGE = "55";
const std::string Dialogue::SONNY_ARCHITECTURE = "Shack";
const std::vector<std::string>Dialogue::SONNY_TRAITS = { "Musical", "Night Owl",
"Quiet", "Pungent odor", "No Heating", "Derelict" };


const std::vector<std::string>Dialogue::SONNY_QUESTIONS = {
	"Hey, name’s Sonny Six-String. You interested in music?",
	"Concert or movie?",
	"How do you feel about someone writing a song for you?" };

const std::vector<std::string>Dialogue::SONNY_QUESTION_ONE_ANSWERS = {
	"Nah, not really, too annoying",
	"It’s alright, I like that Kanye guy.",
	"Music is the greatest thing since sliced bread." };
const std::vector<std::string>Dialogue::SONNY_QUESTION_TWO_ANSWERS = {
	"Probably a movie.",
	"Either is fine by me.",
	"Definitely a concert!" };
const std::vector<std::string>Dialogue::SONNY_QUESTION_THREE_ANSWERS = {
	"I think it’s a cringey, overplayed romantic trope.",
	"I wouldn’t mind, it’d be cute.",
	"I think it’d be absolutely amazing." };


const std::vector<std::string>Dialogue::SONNY_IMPRESSION = {
	"Eh, think I’ll pass. Sorry.",
	"Might be worth a shot, getting together with you.",
	"We should really go out sometime, maybe to a, uh, concert or go on a nice walk or something." };

const std::vector<std::string>Dialogue::SONNY_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };


////////////////////////Courtney/////////////////////////
const std::string Dialogue::COURTNEY_SPRITE = "assets/sprites/characters/Bungalow.png";
const std::string Dialogue::COURTNEY_BACKGROUND = "assets/sprites/background/ModernChurch.png"; //TODO: fix change

const std::string Dialogue::COURTNEY_NAME = "Courtney";
const std::string Dialogue::COURTNEY_AGE = "25";
const std::string Dialogue::COURTNEY_ARCHITECTURE = "Bungalow";
const std::vector<std::string>Dialogue::COURTNEY_TRAITS = { "Independent", "Patriotic",
"Family Orientated", "Mouldy Delph", "Dull", "Money Sink" };


const std::vector<std::string>Dialogue::COURTNEY_QUESTIONS = {
	"Howdy! My name is Courtney! Do you like Starbucks?",
	"Uggs or pons?",
	"Do you watch any good shows, like Gossip Girl?" };

const std::vector<std::string>Dialogue::COURTNEY_QUESTION_ONE_ANSWERS = {
	"I’m more of a tea drinker. ",
	"I prefer McDonalds coffee, honestly.",
	"Yup, I love the starbucks decaf skinny frappe." };
const std::vector<std::string>Dialogue::COURTNEY_QUESTION_TWO_ANSWERS = {
	"What the heck are uggs and pons?",
	"I don’t really have a preference.",
	"UGGS ALL THE WAY GIRL!" };
const std::vector<std::string>Dialogue::COURTNEY_QUESTION_THREE_ANSWERS = {
	"Nope, I actually have taste.",
	"It’s alright, I watch it occasionally.",
	"Oh yeah, I love that show! I also really like to watch Keeping Up With the Kardashians." };


const std::vector<std::string>Dialogue::COURTNEY_IMPRESSION = {
	"Sorry, don’t think you’re right for me.",
	"I think you’re not so bad, bud… but I’m not sure if I’m interested in you..",
	"Oooh, look at this cutie right here!" };

const std::vector<std::string>Dialogue::COURTNEY_PICK_REACTION = {
	"BAD",
	"NEUTRAL",
	"GOOD" };