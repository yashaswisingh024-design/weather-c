# weather
# 🌦️ Weather Dashboard (C)

A modern command-line Weather Dashboard built in **C** that displays weather information for different cities. This project demonstrates modular programming, structures, file handling, and terminal-based user interaction. It is designed as a beginner-friendly systems programming project and can be extended to support live weather APIs.

---

## 📌 Features

* 🌍 Search weather by city
* 🌡️ Display current temperature
* 💧 Show humidity
* 💨 Display wind speed
* ☁️ Show weather conditions
* 📜 Automatically save search history
* 📂 Read previous weather searches
* 🖥️ Simple and interactive terminal interface
* ⚡ Fast and lightweight

---

## 🛠️ Technologies Used

* C Programming
* GCC Compiler
* Standard C Library
* File Handling

---

## 📁 Project Structure

```
Weather-Dashboard/
│
├── weather.c
├── history.txt
├── README.md
```

---

## 🚀 Getting Started

### Clone the repository

```bash
git clone https://github.com/your-username/weather-dashboard.git
cd weather-dashboard
```

### Compile

```bash
gcc weather.c -o weather
```

### Run

**Linux/macOS**

```bash
./weather
```

**Windows**

```bash
weather.exe
```

---

## 📷 Sample Output

```
========== WEATHER DASHBOARD ==========
1. Current Weather
2. View Search History
3. Exit

Enter choice: 1

Enter City Name: Mumbai

========================================
         WEATHER DASHBOARD
========================================
City        : Mumbai
Temperature : 30.5 °C
Humidity    : 78%
Wind Speed  : 14.2 km/h
Condition   : Clear Sky
========================================
```

---

## 📖 How It Works

1. The user enters a city name.
2. The application retrieves the weather information.
3. The weather details are displayed in the terminal.
4. Every search is automatically stored in `history.txt`.
5. Users can view previous searches from the history menu.

---

## 🔮 Future Improvements

* Live weather using an online API
* 5-day weather forecast
* Favorite cities
* Colorful terminal interface
* Auto-detect user location
* Temperature graphs
* Weather alerts
* JSON parsing with cJSON
* HTTP requests using libcurl

---

## 🎯 Learning Outcomes

This project demonstrates:

* Structures in C
* Functions
* Modular programming
* File handling
* User input validation
* Menu-driven applications
* Terminal-based UI
* Basic software design principles

---

## 🤝 Contributing

Contributions are welcome! Feel free to fork this repository, open issues, or submit pull requests to improve the project.

---

## 📄 License

This project is licensed under the MIT License.

---

### ⭐ If you found this project useful, consider giving it a star on GitHub!
