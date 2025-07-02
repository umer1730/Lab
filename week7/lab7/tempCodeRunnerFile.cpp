 int currentDigit = number % 10;  
        if (currentDigit == digit) 
        {
            count++;
        }
        number /= 10;  
    } 