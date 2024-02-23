
// make a logical conditional
if (variable == true)
{
    sandwich += "tomato "; // test
}
else
{
    sandwich += " - ";
}

sandwich += " ketchup ";
sandwich += " sausage ";

return sandwich;
}

// make a main function
int main()
{
    std::cout << breakfast();
    return 0;
}
