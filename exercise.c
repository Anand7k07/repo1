<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Anand Tiwari - Portfolio</title>
    <style>
        /* Add your CSS styles here */
        body {
            font-family: Arial, sans-serif;
            margin: 0;
            padding: 0;
            background-color: #f0f0f0;
        }
        header {
            background-color: #007BFF;
            color: #fff;
            text-align: center;
            padding: 2rem;
        }
        nav {
            background-color: #333;
            text-align: center;
            padding: 1rem 0;
        }
        nav ul {
            list-style: none;
            padding: 0;
            margin: 0;
        }
        nav li {
            display: inline;
            margin: 0 1rem;
        }
        nav a {
            text-decoration: none;
            color: #fff;
            font-weight: bold;
            transition: color 0.3s;
        }
        nav a:hover {
            color: #007BFF;
        }
        section {
            padding: 2rem;
            background-color: #fff;
            margin: 1rem;
            border-radius: 5px;
            box-shadow: 0 0 5px rgba(0, 0, 0, 0.2);
        }
        h1, h2, h3 {
            color: #007BFF;
        }
        .project {
            margin: 1rem 0;
        }
        footer {
            background-color: #333;
            color: #fff;
            text-align: center;
            padding: 1rem;
        }
        img {
            max-width: 100%;
            height: auto;
        }
        .round-frame {
            width: 200px;
            height: 200px;
            border: 5px solid #007BFF;
            border-radius: 50%;
            overflow: hidden;
        }
        /* Add a moving element */
        .moving-element {
            animation: moveElement 3s linear infinite;
        }
        @keyframes moveElement {
            0% { transform: translateX(0); }
            50% { transform: translateX(100px); }
            100% { transform: translateX(0); }
        }
    </style>
</head>
<body>
    <header>
        <div class="round-frame">
            <img src="image_for_ins_1_-removebg-preview.png" alt="Anand Tiwari" width="200" height="200">
        </div>
        <h1>Anand Tiwari</h1>
        <p>Web Developer</p>
        <p>
            <a href="mailto:anand7k07@gmail.com">anand7k07@gmail.com</a> | 
            <a href="https://www.linkedin.com/in/anand-tiwari-795063250/" target="_blank">LinkedIn</a> | 
            <a href="https://github.com/Anand7k07" target="_blank">GitHub</a> | 
            Phone: 7355973929
        </p>
    </header>

    <nav>
        <!-- Add navigation links here (e.g., Home, Contact) -->
        <ul>
            <li><a href="#home">Home</a></li>
            <li><a href="#contact">Contact</a></li>
        </ul>
    </nav>

    <section id="home">
        <h2>Welcome to Anand Tiwari's Website</h2>
        <p>I'm a Computer Science Student.</p>
    </section>

    <section id="contact">
        <h2>Contact</h2>
        <!-- Add contact information or a contact form -->
        <p>You can reach me at <a href="mailto:anand7k07@gmail.com">anand7k07@gmail.com</a> or connect with me on <a href="https://www.linkedin.com/in/anand-tiwari-795063250/" target="_blank">LinkedIn</a>. You can also reach me on <a href="https://github.com/yourgithubusername" target="_blank">GitHub</a>. You can also reach me by phone at 7355973929.</p>
    </section>

    <footer>
        <p>&copy; 2023 Anand Tiwari</p>
    </footer>
    
    <!-- Add a moving element -->
    <div class="moving-element">Thank You</div>
</body>
</html>
