function calculateBMI() {
    // Get the user's weight and height from the input fields
    const weight = parseFloat(document.getElementById('weight').value);
    const height = parseFloat(document.getElementById('height').value);

    // Check if the input values are valid
    if (isNaN(weight) || isNaN(height) || weight <= 0 || height <= 0) {
        alert('Please enter valid weight and height values.');
        return;
    }

    // Calculate the BMI
    const bmi = weight / (height * height);

    // Display the BMI to the user
    document.getElementById('bmi').textContent = bmi.toFixed(2);

    // Provide a BMI interpretation
    let interpretation;
    if (bmi < 18.5) {
        interpretation = 'Underweight';
    } else if (bmi < 25) {
        interpretation = 'Normal weight';
    } else if (bmi < 30) {
        interpretation = 'Overweight';
    } else {
        interpretation = 'Obese';
    }
    document.getElementById('interpretation').textContent = interpretation;
}