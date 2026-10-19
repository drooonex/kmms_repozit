MAIN="main.cpp menu_functions.cpp menu_items.cpp"
APP=main

if [ $APP ]; then rm "$APP"
fi

g++ $MAIN -o $APP

./$APP
