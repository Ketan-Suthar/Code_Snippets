const express = require("express");
const path = require("path");
const mongoose = require("mongoose");
const bodyParser = require("body-parser");

mongoose.connect("mongodb://localhost/nodekb");
let db = mongoose.connection;

//check for db connection error
db.on("error", (err) =>
{
	console.log(err);
});

//connect to db
db.once("open", () =>
{
	console.log("connected to database");
});

//bring model

let Article = require("./models/articles");

//init app
const app = express();


//set public folder as static
app.use(express.static(path.join(__dirname, "public")));


app.set("views", path.join(__dirname, "views"));
app.set("view engine", "pug");

//home route
app.get('/', (request, response) => 
{
	Article.find({}, (err, articles) =>
	{
		if(err)
		{
			console.log(err);
		}
		else
		{
			response.render("index",
			{
				title: "hello ketan, welcome home",
				articles: articles
			});
		}
	});
});

//add articles get route
app.get('/article/add', (request, response) => 
{
	response.render("add_article",
		{
			title: "hello user, add an article here"
		});
});

// BodyParser
// parse application/x-www-form-urlencoded
app.use(bodyParser.urlencoded({ extended: false }))

// parse application/json
app.use(bodyParser.json())

//add articles post route
app.post('/article/add', (request, response) => 
{
	let article = new Article();
	article.title = request.body.title;
	article.author = request.body.author;
	article.body = request.body.body;

	article.save((err) =>
	{
		if(err)
		{
			console.log(err);
			return;
		}
		else
		{
			response.redirect("/");
		}
	});

});

//get single article
app.get('/article/:id', (request, response) => 
{
	Article.findById(request.params.id, (err, article) =>
	{
		response.render("article",
		{
			article: article
		});
	});
});

app.listen(3000, () =>
{
	console.log("server started on port 3000...");
});



/*


let articles = [
	{
		id: 4,
		title: "article four",
		author: "ketan suthar",
		body: "this is article four"
	},
	{
		id: 5,
		title: "article five",
		author: "kishan suthar",
		body: "this is article five"
	},
	{
		id: 6,
		title: "article six",
		author: "jay suthar",
		body: "this is article six"
	}
];

*/