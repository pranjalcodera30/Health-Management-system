// HEALTH HELP SYSTEM
// THE FOLLOWING PROGRAM IS A HEALTH SUPERVISION AND MONITORING SYSTEM WHICH TAKES DETAILS FROM USERS AND
// ANALYSES THEIR HEALTH AND GIVES THEM SUGGESTIONS FOR BETTER CARE AND HEALTH.


#include <stdio.h>
#include <string.h>

// Structure to store biological information
struct BioInfo {
   char name[50];
   int age;
   float height;
   float weight;
   char gender;
   float bmi;
   char healthproblem[50];
   char chronicDisease[50];
   char vitamin[50];
   char lifestyle[50];
   char disease[50];
   char mineral[50];
   char pastDisease[50];
   char bloodGroup[3];
   float heartRate;
   float systolic;
   float diastolic;
   float respiratoryRate;
   float bodyTemperature;
   int year;

}user;

// Function to display menu options

int displayMenu() {
   int choice;
   printf("1. Calculate your BMI(Body mass index)\n");
   printf("2. Cure of normal health problems\n");
   printf("3. Vitamin deficiency diseases and their cure?\n");
   printf("4. Mineral deficiency diseases and their cure?\n");
   printf("5. Health issues caused due to different kind of lifestyle \n");
   printf("6. Impact of chronic diseases on your health\n");
   printf("7. Impact of past diseases on your present health\n");
   printf("8. Evaluate blood group related health\n");
   printf("9. Evaluate heart health\n");
   printf("10. Evaluate blood pressure\n");
   printf("11. Evaluate respiratory health?\n");
   printf("12. Evaluate your body temperature health\n");
   printf("13. Display Generic health recommendations\n");
   printf("\n\n");
   printf("Enter your choice (1-13): ");
   scanf("%d",&choice);
   printf("\n");
   return choice;
}

//1.BMI SECTION

//bmi calculator
float calculateBMI(float height, float weight) {
   float result=weight/(height*height);
   printf("Your bmi is %.2f",result);
   return result;
}

//function to give bmi details to user
void providebmiRecs(float bmi){
   printf("\nHealth information based on BMI:\n");

   if (bmi < 18.5) {
       printf("BMI Category: Underweight\n");
       printf("Potential Diseases: Malnutrition, Anemia\n");
   }
   else if (bmi >= 18.5 && bmi < 25) {
       printf("BMI Category: Normal weight\n");
       printf("Potential Diseases: Generally lower risk, but monitor overall health\n");
   }
   else if (bmi >= 25 && bmi < 30) {
       printf("BMI Category: Overweight\n");
       printf("Potential Diseases: Type 2 Diabetes, Hypertension\n");
   }
   else {
       printf("You are overweight. Consider a balanced diet and regular exercise.\n");
       printf("Recommended exercise: Cardiovascular exercises to burn calories.\n");
   }
}

//function for exercise based on bmi
void provideExerciseRecommendations(float bmi) {
   printf("\nExercise Recommendations based on BMI:\n");

   if (bmi < 18.5) {
       printf("Recommended Exercise: \nStrength training to build muscle mass.\nDo pushups, squats, lunges, bench dips, etc.");
       printf("Recommended diet: regularly snack on high energy food and avoid binging high fat food. incorporate heavy carbohydrates and proteins in your diet.");
   }
   else if (bmi >= 18.5 && bmi < 25) {
       printf("Recommended Exercise: Regular aerobic exercises for cardiovascular health.\nJogging, occasionally swimming, brisk walking for more fitness\n");
       printf("Dietary recommendations: Have a balanced diet always.\n");
   }
   else if (bmi >= 25 && bmi < 30) {
       printf("Recommended Exercise: Cardiovascular exercises to burn calories.\nhigh intensity sports and workout\n");
       printf("Dietary Recommendation: DASH eating pattern- keep total fat intake to less than 25 percentage of the fiet's energy. Focus more on proteins.\n");
   }
   else {
       printf("Recommended Exercise: Consult with a fitness professional for personalized advice.\n");
   }
}

//2. HEALTH PROBLEMS SECTION

//function for health problems
void providehealthproblemSolution(char healthProblem[50]) {
   printf("\nSolutions for %s:\n", healthProblem);

   // Simple switch statement to provide solutions based on health problems
   if (strcmp(healthProblem,"headache") == 0) {
       printf("1. Take a break and rest.\n");
       printf("2. Stay hydrated.\n");
       printf("3. Consider taking a pain reliever.\n");
   }
   else if (strcmp(healthProblem,"sore_throat") == 0) {
       printf("1. Gargle with warm saltwater.\n");
       printf("2. Stay hydrated.\n");
       printf("3. Consider using throat lozenges.\n");
   }
   else if (strcmp(healthProblem,"back_pain") == 0) {
       printf("1. Maintain good posture.\n");
       printf("2. Exercise regularly to strengthen your back.\n");
       printf("3. Apply heat or cold packs.\n");
   }
   else if (strcmp(healthProblem,"fever") == 0) {
       printf("1. Rest and stay hydrated.\n");
       printf("2. Take over-the-counter fever-reducing medications.\n");
       printf("3. If the fever persists, consult a doctor.\n");
   }
   else if (strcmp(healthProblem,"cough") == 0) {
       printf("1. Stay hydrated.\n");
       printf("2. Use cough drops or syrup.\n");
       printf("3. If persistent, consult a doctor, especially if associated with other symptoms.\n");
   }
   else if (strcmp(healthProblem,"stomach_ache") == 0) {
       printf("1. Avoid heavy or spicy meals.\n");
       printf("2. Use over-the-counter antacids for indigestion.\n");
       printf("3. If persistent, consult a doctor.\n");
   }
   else if (strcmp(healthProblem,"fatigue") == 0) {
       printf("1. Ensure you are getting enough sleep.\n");
       printf("2. Maintain a balanced diet and stay hydrated.\n");
       printf("3. If persistent, consult a doctor.\n");
   }
   else if (strcmp(healthProblem,"allergies") == 0) {
       printf("1. Identify and avoid allergens.\n");
       printf("2. Use antihistamines as recommended by a healthcare professional.\n");
       printf("3. Consider allergy shots for long-term relief.\n");
   }
   else if (strcmp(healthProblem,"diarrhea") == 0) {
       printf("1. Stay hydrated by drinking plenty of fluids.\n");
       printf("2. Follow the BRAT diet (Bananas, Rice, Applesauce, Toast).\n");
       printf("3. If severe or prolonged, consult a doctor.\n");
   }
   else if (strcmp(healthProblem,"insomnia") == 0) {
       printf("1. Establish a regular sleep schedule.\n");
       printf("2. Create a relaxing bedtime routine.\n");
       printf("3. Avoid stimulants like caffeine close to bedtime.\n");
   }
   else if (strcmp(healthProblem,"migraine") == 0) {
       printf("1. Identify and avoid migraine triggers.\n");
       printf("2. Consider stress-reducing techniques.\n");
       printf("3. Consult with a doctor for prescription medications.\n");
   }
   else if (strcmp(healthProblem,"joint_pain") == 0) {
       printf("1. Engage in low-impact exercises like swimming or walking.\n");
       printf("2. Apply hot or cold packs to the affected joints.\n");
       printf("3. Consult with a doctor for proper diagnosis and treatment.\n");
   }
   else if (strcmp(healthProblem,"anxiety") == 0) {
       printf("1. Practice relaxation techniques such as deep breathing.\n");
       printf("2. Consider therapy or counseling.\n");
       printf("3. If severe, consult with a mental health professional for treatment options.\n");
   }
   else if (strcmp(healthProblem,"asthma") == 0) {
       printf("1. Use prescribed inhalers as directed by a healthcare professional.\n");
       printf("2. Avoid triggers such as smoke or allergens.\n");
       printf("3. Create an asthma action plan with your doctor.\n");
   }
   else if (strcmp(healthProblem,"depression") == 0) {
       printf("1. Seek professional help from a mental health professional.\n");
       printf("2. Engage in activities you enjoy.\n");
       printf("3. Consider medication under the guidance of a doctor.\n");
   }
   else if (strcmp(healthProblem,"arthritis") == 0) {
       printf("1. Engage in gentle exercises to maintain joint flexibility.\n");
       printf("2. Apply hot or cold packs to reduce inflammation.\n");
       printf("3. Consult with a rheumatologist for personalized treatment.\n");
   }
   else if (strcmp(healthProblem,"obesity") == 0) {
       printf("1. Adopt a healthy and balanced diet.\n");
       printf("2. Engage in regular physical activity.\n");
       printf("3. Seek guidance from a healthcare professional for weight management.\n");
   }
}

//3. VITAMIN SECTION

//function for vitamin based health

void providevitaminsolution(const char *vitamin) {
   printf("\nInformation for Vitamin Deficiency: %s\n", vitamin);

   // Simple switch statement to provide information and diet recommendations based on vitamin deficiency
   if (strcmp(vitamin, "A") == 0) {
       printf("Diseases Caused: Night blindness, dry eyes, and skin issues.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Include foods rich in beta-carotene: carrots, sweet potatoes, spinach.\n");
       printf("2. Consume dairy products, eggs, and fish for retinol sources.\n");
   }
   else if (strcmp(vitamin, "B12") == 0) {
       printf("Diseases Caused: Anemia, fatigue, and neurological issues.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume animal products: meat, fish, eggs, and dairy.\n");
       printf("2. Include fortified foods such as cereals and plant-based milk alternatives.\n");
   }
   else if (strcmp(vitamin, "C") == 0) {
       printf("Diseases Caused: Scurvy, weakened immune system.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Eat citrus fruits: oranges, lemons, grapefruits.\n");
       printf("2. Include berries, kiwi, and tomatoes in your diet.\n");
       printf("3. Consume vegetables like bell peppers, broccoli, and spinach.\n");
   }
   else if (strcmp(vitamin, "D") == 0) {
       printf("Diseases Caused: Rickets, weakened bones.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Get sunlight exposure to stimulate vitamin D production.\n");
       printf("2. Consume fatty fish, fortified dairy products, and egg yolks.\n");
   }
   else if (strcmp(vitamin, "E") == 0) {
       printf("Diseases Caused: Neuromuscular issues, immune system impairment.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Include nuts and seeds: almonds, sunflower seeds, and hazelnuts.\n");
       printf("2. Consume vegetable oils such as sunflower oil and wheat germ oil.\n");
       printf("3. Eat green leafy vegetables like spinach and broccoli.\n");
   }
   else if (strcmp(vitamin, "K") == 0 ) {
       printf("Diseases Caused: Blood clotting issues.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume green leafy vegetables: kale, spinach, and broccoli.\n");
       printf("2. Include vegetable oils like soybean oil and canola oil.\n");
       printf("3. Eat fermented foods such as natto and cheese.\n");
   }
   else {
       printf("No specific information and balanced diet recommendations found for vitamin deficiency: %s. Please consult a healthcare professional.\n", vitamin);
   }
}


//4. MINERALS SECTION

//function for mineral based health

void providemineralsolution(const char *mineral) {
   printf("\nInformation for Mineral Deficiency: %s\n", mineral);

   // Simple switch statement to provide information and diet recommendations based on mineral deficiency
   if (strcmp(mineral, "iron") == 0) {
       printf("Diseases Caused: Anemia, fatigue, and weakness.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume iron-rich foods: red meat, poultry, fish, and beans.\n");
       printf("2. Include vitamin C-rich foods to enhance iron absorption: oranges, strawberries, and tomatoes.\n");
   }
   else if (strcmp(mineral, "calcium") == 0) {
       printf("Diseases Caused: Osteoporosis, weak bones, and dental problems.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume dairy products: milk, cheese, and yogurt.\n");
       printf("2. Include leafy green vegetables: kale, broccoli, and spinach.\n");
   }
   else if (strcmp(mineral, "zinc") == 0) {
       printf("Diseases Caused: Impaired immune function, skin issues.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume zinc-rich foods: meat, nuts, seeds, and legumes.\n");
       printf("2. Include whole grains and dairy products in your diet.\n");
   }
   else if (strcmp(mineral, "magnesium") == 0) {
       printf("Diseases Caused: Muscle cramps, fatigue, and weakness.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume magnesium-rich foods: nuts, seeds, whole grains, and leafy green vegetables.\n");
       printf("2. Include fish, bananas, and dark chocolate in your diet.\n");
   }
   else if (strcmp(mineral, "potassium") == 0) {
       printf("Diseases Caused: Muscle weakness, fatigue, and heart rhythm issues.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume potassium-rich foods: bananas, oranges, potatoes, and spinach.\n");
       printf("2. Include yogurt, fish, and beans in your diet.\n");
   }
   else if (strcmp(mineral, "iodine") == 0) {
       printf("Diseases Caused: Hypothyroidism, goiter.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume iodized salt.\n");
       printf("2. Include seafood, dairy products, and eggs in your diet.\n");
   }
   else if (strcmp(mineral, "selenium") == 0) {
       printf("Diseases Caused: Weak immune system, thyroid issues.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume selenium-rich foods: Brazil nuts, fish, and eggs.\n");
       printf("2. Include whole grains and lean meats in your diet.\n");
   }
   else if (strcmp(mineral, "copper") == 0) {
       printf("Diseases Caused: Anemia, bone abnormalities.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume copper-rich foods: nuts, seeds, and organ meats.\n");
       printf("2. Include whole grains and seafood in your diet.\n");
   }
   else if (strcmp(mineral, "manganese") == 0) {
       printf("Diseases Caused: Skeletal abnormalities, impaired growth.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume manganese-rich foods: nuts, whole grains, and leafy green vegetables.\n");
       printf("2. Include fruits and legumes in your diet.\n");
   }
   else if (strcmp(mineral, "phosphorus") == 0) {
       printf("Diseases Caused: Weak bones, tooth decay.\n");
       printf("Balanced Diet Recommendation:\n");
       printf("1. Consume phosphorus-rich foods: dairy products, meat, and fish.\n");
       printf("2. Include whole grains and nuts in your diet.\n");
   }
   else {
       printf("No specific information and balanced diet recommendations found for mineral deficiency: %s. Please consult a healthcare professional.\n", mineral);
   }
}

//5.LIFESTYLE RATE SECTION

//function for lifestyle based exercise recs

void providelifestyleSolution(const char *lifestyle) {
   printf("\nSolutions for lifestyle: %s\n", lifestyle);

   if (strcmp(lifestyle, "sedentary") == 0) {
       printf("1. Incorporate regular physical activity into your routine.\n");
       printf("2. Take breaks to stand and stretch if you have a desk job.\n");
       printf("3. Choose activities you enjoy to make exercise more enjoyable.\n");
   }
   else if (strcmp(lifestyle, "active") == 0) {
       printf("1. Continue with your active lifestyle.\n");
       printf("2. Ensure you have a balanced diet to support your energy needs.\n");
       printf("3. Include a variety of physical activities for overall fitness.\n");
   }
   else if (strcmp(lifestyle, "irregular_diet") == 0) {
       printf("1. Gradually replace unhealthy food choices with healthier alternatives.\n");
       printf("2. Increase your intake of fruits, vegetables, and whole grains.\n");
       printf("3. Seek guidance from a nutritionist for a personalized diet plan.\n");
   }
   else if (strcmp(lifestyle, "healthy_diet") == 0) {
       printf("1. Continue with your healthy eating habits.\n");
       printf("2. Ensure you have a balanced diet with a variety of nutrients.\n");
       printf("3. Stay hydrated and limit the intake of processed foods.\n");
   }
   else if (strcmp(lifestyle, "smoker") == 0) {
       printf("1. Consider quitting smoking for better overall health.\n");
       printf("2. Seek support from friends, family, or a smoking cessation program.\n");
       printf("3. Consult with a healthcare professional for assistance in quitting.\n");
   }
   else if (strcmp(lifestyle, "non_smoker") == 0) {
       printf("1. Continue with your healthy choice of not smoking.\n");
       printf("2. Encourage others to quit smoking and create a smoke-free environment.\n");
       printf("3. Focus on maintaining other healthy lifestyle habits.\n");
   }
   else if (strcmp(lifestyle, "stressful") == 0) {
       printf("1. Practice stress-reducing techniques such as deep breathing and meditation.\n");
       printf("2. Prioritize self-care and allocate time for relaxation.\n");
       printf("3. Consider seeking support from a mental health professional.\n");
   }
   else if (strcmp(lifestyle, "relaxed") == 0) {
       printf("1. Continue with your relaxed lifestyle.\n");
       printf("2. Maintain a balance between work and leisure activities.\n");
       printf("3. Engage in activities that bring joy and relaxation.\n");
   }
   else if (strcmp(lifestyle, "night_owl") == 0) {
       printf("1. Ensure you are getting enough quality sleep despite your nocturnal habits.\n");
       printf("2. Create a consistent sleep schedule to regulate your circadian rhythm.\n");
       printf("3. Minimize exposure to screens before bedtime to improve sleep quality.\n");
   }
   else if (strcmp(lifestyle, "early_bird") == 0) {
       printf("1. Continue with your early morning routine for better productivity.\n");
       printf("2. Ensure you are getting sufficient sleep to support your waking hours.\n");
       printf("3. Establish a relaxing bedtime routine to improve sleep quality.\n");
   }
   else if (strcmp(lifestyle, "socialite") == 0) {
       printf("1. Enjoy socializing, but ensure you get enough rest.\n");
       printf("2. Plan activities that involve both social interaction and physical activity.\n");
       printf("3. Set boundaries to balance social life with personal well-being.\n");
   }
   else if (strcmp(lifestyle, "introvert") == 0) {
       printf("1. Embrace your preference for solitude but find a balance with social interactions.\n");
       printf("2. Engage in activities that bring you joy and fulfillment.\n");
       printf("3. Consider joining small, intimate groups to ease into social situations.\n");
   }
   else if (strcmp(lifestyle, "traveler") == 0) {
       printf("1. Stay hydrated and maintain a balanced diet while traveling.\n");
       printf("2. Incorporate physical activity into your travel itinerary.\n");
       printf("3. Prioritize rest to combat travel fatigue.\n");
   }
   else if (strcmp(lifestyle, "homebody") == 0) {
       printf("1. Enjoy your home, but ensure you maintain physical activity.\n");
       printf("2. Create a cozy and relaxing environment at home.\n");
       printf("3. Consider engaging in hobbies or activities that bring you fulfillment.\n");
   }
   else if (strcmp(lifestyle, "gamer") == 0) {
       printf("1. Enjoy gaming, but ensure you take breaks to move and stretch.\n");
       printf("2. Stay mindful of posture and ergonomics while gaming.\n");
       printf("3. Balance gaming with other hobbies and physical activities.\n");
   }
   else if (strcmp(lifestyle, "outdoorsy") == 0) {
       printf("1. Embrace and continue your love for outdoor activities.\n");
       printf("2. Stay prepared with appropriate gear for different outdoor pursuits.\n");
       printf("3. Enjoy the benefits of fresh air, sunshine, and physical activity.\n");
   }
   else if (strcmp(lifestyle, "city_dweller") == 0) {
       printf("1. Stay active in an urban environment through walking, biking, or other city activities.\n");
       printf("2. Be mindful of air quality and take breaks in green spaces when possible.\n");
       printf("3. Explore local fitness options and recreational activities in the city.\n");
   }
   else if (strcmp(lifestyle, "musician") == 0) {
       printf("1. Balance your passion for music with physical activity to promote overall health.\n");
       printf("2. Be mindful of posture and take breaks during extended practice sessions.\n");
       printf("3. Enjoy the mental and emotional benefits of music, but also prioritize physical well-being.\n");
   }
   else if (strcmp(lifestyle, "vegetarian") == 0) {
       printf("1. Ensure you are getting a variety of nutrients from plant-based sources.\n");
       printf("2. Consider consulting with a nutritionist for personalized dietary guidance.\n");
       printf("3. Be mindful of protein intake and include a mix of plant-based proteins in your diet.\n");
   }
    else if (strcmp(lifestyle, "non_vegetarian") == 0) {
       printf("1. Ensure you are getting having a balanced diet of meats and greens.\n");
       printf("2. Consider consulting with a nutritionist for personalized dietary guidance.\n");
       printf("3. Be mindful of protein intake and include a mix of crucial plant based nutrients in your diet.\n");
   }
   else {
       printf("No specific solutions found for lifestyle: %s. Please consider consulting with a healthcare professional for personalized advice.\n", lifestyle);
   }
}

//6. CHRONIC DISEASE SECTION

//function for chronic disease

void providechronicdiseaseSolution(const char *chronicDisease){
   printf("\nSolutions for chronic history disease: %s\n", chronicDisease);

   if (strcmp(chronicDisease, "heart disease") == 0) {
       printf("1. Adopt a heart-healthy diet low in saturated and trans fats.\n");
       printf("2. Exercise regularly to maintain cardiovascular health.\n");
       printf("3. Regularly monitor blood pressure and cholesterol levels.\n");
   }
   else if (strcmp(chronicDisease, "cancer") == 0) {
       printf("1. Follow recommended cancer screenings for early detection.\n");
       printf("2. Adopt a healthy lifestyle, including a balanced diet and regular exercise.\n");
       printf("3. Avoid tobacco and limit alcohol consumption.\n");
   }
   else if (strcmp(chronicDisease, "stroke") == 0) {
       printf("1. Control blood pressure and cholesterol levels.\n");
       printf("2. Exercise regularly to improve cardiovascular health.\n");
       printf("3. Follow a heart-healthy diet.\n");
   }
   else if (strcmp(chronicDisease, "osteoporosis") == 0) {
       printf("1. Ensure an adequate intake of calcium and vitamin D.\n");
       printf("2. Engage in weight-bearing exercises to promote bone health.\n");
       printf("3. Avoid smoking and excessive alcohol consumption.\n");
   }
   else if (strcmp(chronicDisease, "alzheimers disease") == 0) {
       printf("1. Engage in mentally stimulating activities.\n");
       printf("2. Follow a heart-healthy diet.\n");
       printf("3. Stay socially active and maintain regular exercise.\n");
   }
   else if (strcmp(chronicDisease, "obesity") == 0) {
       printf("1. Adopt a healthy and balanced diet.\n");
       printf("2. Engage in regular physical activity.\n");
       printf("3. Seek guidance from a healthcare professional for weight management.\n");
   }
   else if (strcmp(chronicDisease, "asthma") == 0) {
       printf("1. Identify and avoid triggers that may worsen asthma symptoms.\n");
       printf("2. Use prescribed inhalers as directed by a healthcare professional.\n");
       printf("3. Create an asthma action plan with your doctor.\n");
   }
   else if (strcmp(chronicDisease, "diabetes") == 0) {
       printf("1. Follow a balanced diet with controlled carbohydrate intake.\n");
       printf("2. Monitor blood sugar levels regularly.\n");
       printf("3. Engage in regular physical activity.\n");
       printf("4. Exercise: Walking, jogging, and cycling.\n");
       printf("5. Yoga: Pranayama, Dhanurasana, and Paschimottanasana.\n");
   }
   else if (strcmp(chronicDisease, "hypertension") == 0) {
       printf("1. Maintain a low-sodium diet.\n");
       printf("2. Engage in regular aerobic exercise.\n");
       printf("3. Take prescribed antihypertensive medications as directed.\n");
       printf("4. Exercise: Brisk walking, swimming, and dancing.\n");
       printf("5. Yoga: Shavasana, Uttanasana, and Nadi Shodhana.\n");
   }
    else if (strcmp(chronicDisease, "parkinsons disease") == 0) {
       printf("1. Take prescribed medications to manage symptoms.\n");
       printf("2. Engage in regular physical exercise to improve mobility.\n");
       printf("3. Consider physical therapy for additional support.\n");
       printf("4. Exercise: Walking, swimming, and tai chi.\n");
       printf("5. Yoga: Tadasana, Bhujangasana, and Vrikshasana.\n");
   }
   else {
       printf("No specific solutions found for chronic disease: %s. Please consult a healthcare professional.\n", chronicDisease);
   }
}

//7. PAST DISEASE SECTION

//function for past disease based exercise rec

void providepastdiseaseSolution(const char *disease) {
   printf("\nSolutions for disease: %s\n", disease);

   // Simple switch statement to provide solutions based on diseases

   if (strcmp(disease, "malaria") == 0) {
       printf("1. Use bed nets to prevent mosquito bites.\n");
       printf("2. Take antimalarial medications as prescribed.\n");
       printf("3. Seek prompt medical attention for symptoms such as fever and chills.\n");
       printf("4. Consult with a healthcare professional for exercise recommendations.\n");
       printf("5. Yoga: Gentle postures such as Sukhasana and Shavasana.\n");
   }
   else if (strcmp(disease, "AIDS/HIV") == 0) {
       printf("1. Adhere to antiretroviral therapy (ART) as prescribed.\n");
       printf("2. Practice safe sex to prevent transmission.\n");
       printf("3. Regularly monitor CD4 count and viral load.\n");
       printf("4. Consult with a healthcare professional for exercise recommendations.\n");
       printf("5. Yoga: Gentle postures focusing on relaxation.\n");
   }
   else if (strcmp(disease, "ebola") == 0) {
       printf("1. Practice strict hygiene, including handwashing and sanitation.\n");
       printf("2. Isolate and treat infected individuals in medical facilities.\n");
       printf("3. Follow infection prevention measures to avoid spread.\n");
       printf("4. Consult with a healthcare professional for exercise recommendations.\n");
       printf("5. Yoga: Gentle postures focusing on relaxation.\n");
   }
   else if (strcmp(disease, "corona") == 0) {
       printf("1. Follow public health guidelines, including wearing masks and social distancing.\n");
       printf("2. Get vaccinated if eligible.\n");
       printf("3. Seek medical attention if experiencing COVID-19 symptoms.\n");
       printf("4. Consult with a healthcare professional for exercise recommendations.\n");
       printf("5. Yoga: Gentle postures focusing on relaxation.\n");
   }
   else if (strcmp(disease, "flu") == 0) {
       printf("1. Get vaccinated against seasonal flu, including H1N1 strain.\n");
       printf("2. Practice good respiratory hygiene to prevent the spread of the virus.\n");
       printf("3. Seek medical attention for severe symptoms or complications.\n");
       printf("4. Consult with a healthcare professional for exercise recommendations.\n");
       printf("5. Yoga: Gentle postures focusing on relaxation.\n");
   }
   else if (strcmp(disease, "hepatitis") == 0) {
       printf("1. Follow recommended vaccination schedules for hepatitis prevention.\n");
       printf("2. Practice safe intercourse and avoid sharing needles to prevent transmission.\n");
       printf("3. Seek medical advice for appropriate treatment options.\n");
       printf("4. Consult with a healthcare professional for exercise recommendations.\n");
       printf("5. Yoga: Gentle postures focusing on relaxation.\n");
   }
   else if (strcmp(disease, "cardiovascular_disease") == 0) {
       printf("1. Adopt a heart-healthy diet low in saturated fats and cholesterol.\n");
       printf("2. Engage in regular aerobic exercise to promote cardiovascular health.\n");
       printf("3. Manage blood pressure and cholesterol levels through medication if needed.\n");
       printf("4. Exercise: Aerobic activities such as jogging and cycling.\n");
       printf("5. Yoga: Ardha Matsyendrasana, Setu Bandhasana, and Sukhasana.\n");
   }
   else {
       printf("No specific solutions found for disease: %s. Please consult a healthcare professional.\n", disease);
   }
}

//function for telling side effects of any past disease

void provideEffectspastdis(const char *pastDisease) {
   printf("\nEffects of Past Disease: %s\n", pastDisease);

   // Simple switch statement to provide information based on past diseases
   if (strcmp(pastDisease, "flu") == 0) {
       printf("1. Potential weakness and fatigue.\n");
       printf("2. Reduced immunity temporarily.\n");
   }
   else if (strcmp(pastDisease, "ebola") == 0) {
       printf("1. Possible lung damage, weakening of respiratory function.\n");
       printf("2. Increased susceptibility to respiratory issues.\n");
   }
   else if (strcmp(pastDisease, "corona") == 0) {
       printf("1. Possible lung damage, affecting respiratory function.\n");
       printf("2. High fatigue levels.\n");
   }
   else if (strcmp(pastDisease, "malaria") == 0) {
       printf("1. Potential recurrence of malaria symptoms.\n");
       printf("2. Need for preventive measures and prompt treatment in case of recurrence.\n");
   }
   else if (strcmp(pastDisease, "cardiovascular_disease") == 0) {
       printf("1. Possible impact on heart function.\n");
       printf("2. Increased susceptibility to vascular issues in the future.\n");
   }
   else {
       printf("No specific information on side effects found for past disease: %s. Please consult a healthcare professional for personalized advice.\n", pastDisease);
   }
}

//8. BLOOD GROUP SECTION

//function for blood group capability

void provideFightingCapacity(const char *bloodGroup) {
   printf("\nFighting Capacity based on Blood Group: %s\n", bloodGroup);

   // Simple switch statement to provide information based on blood group
   if (strcmp(bloodGroup, "A+") == 0) {
       printf("1. Potential universal plasma donor.\n");
       printf("2. Compatible with A+ and AB+ blood groups.\n");
   }
   else if (strcmp(bloodGroup, "A-") == 0) {
       printf("1. Potential universal plasma donor.\n");
       printf("2. Compatible with A- and AB- blood groups.\n");
   }
   else if (strcmp(bloodGroup, "B+") == 0) {
       printf("1. Potential universal plasma donor.\n");
       printf("2. Compatible with B+ and AB+ blood groups.\n");
   }
   else if (strcmp(bloodGroup, "B-") == 0) {
       printf("1. Potential universal plasma donor.\n");
       printf("2. Compatible with B- and AB- blood groups.\n");
   }
   else if (strcmp(bloodGroup, "AB+") == 0) {
       printf("1. Universal plasma and red cell donor.\n");
       printf("2. Compatible with all blood groups.\n");
   }
   else if (strcmp(bloodGroup, "AB-") == 0) {
       printf("1. Universal plasma and red cell donor.\n");
       printf("2. Compatible with AB- blood group.\n");
   }
   else if (strcmp(bloodGroup, "O+") == 0) {
       printf("1. Potential universal red cell donor.\n");
       printf("2. Compatible with O+ and AB+ blood groups.\n");
   }
   else if (strcmp(bloodGroup, "O-") == 0) {
       printf("1. Universal red cell donor.\n");
       printf("2. Compatible with O- and AB- blood groups.\n");
   }
   else {
       printf("No specific information found for blood group: %s. Please consult a healthcare professional for personalized advice.\n", bloodGroup);
   }
}

//9. HEART HEALTH SECTION

//function for heart health

void provideheartratesolution(float heartRate) {
   printf("\nHeart Rate Analysis:\n");
   printf("Recorded Heart Rate: %.2f beats per minute\n", heartRate);

   // Simple if-else statements to provide information based on heart rate
   if (heartRate < 60.0) {
        printf("\nHEART RATE LOW !!\n");
       printf("Potential Health Problem: Bradycardia (slow heart rate).\n");
       printf("Suggested Cure: Consult a healthcare professional for further evaluation.\n");
   } else if (heartRate > 100.0) {
       printf("\nHEART RATE HIGH!! \n");
       printf("Potential Health Problem: Tachycardia (fast heart rate).\n");
       printf("Suggested Cure: Consult a healthcare professional for further evaluation.\n");
   } else {
       printf("Heart rate within the normal range.\n");
       printf("Maintain a healthy lifestyle with regular exercise and a balanced diet.\n");
   }
}

//10. BLOOD PRESSURE SECTION

//function for blood pressure health
void providebpsolution(float systolic, float diastolic) {
   printf("\nBlood Pressure Analysis:\n");
   printf("Recorded Blood Pressure: %.2f / %.2f mmHg\n", systolic, diastolic);

   // Simple if-else statements to provide information based on blood pressure
   if (systolic < 90.0 && diastolic < 60.0) {
       printf("\nBLOOD PRESSURE LOW !!\n");
       printf("Potential Health Problem: Hypotension (low blood pressure).\n");
       printf("Suggested Cure: Increase salt intake, stay hydrated, and consult a healthcare professional if symptoms persist.\n");
   }
   else if ((systolic >= 90.0 && systolic <= 120.0) && (diastolic >= 60.0 && diastolic <= 80.0)) {
       printf("Blood pressure within the normal range.\n");
       printf("Maintain a healthy lifestyle with regular exercise and a balanced diet.\n");
   }
   else if ((systolic > 120.0 && systolic <= 140.0) || (diastolic > 80.0 && diastolic <= 90.0)) {
       printf("\nBLOOD PRESSURE SLIGHTLY HIGH\n");
       printf("Potential Health Problem: Prehypertension.\n");
       printf("Suggested Cure: Adopt a healthy lifestyle, including regular exercise, a low-sodium diet, and stress management.\n");
   }
   else if (systolic > 140.0 || diastolic > 90.0) {
       printf("\nBLOOD PRESSURE HIGH !!\n");
       printf("Potential Health Problem: Hypertension (high blood pressure).\n");
       printf("Suggested Cure: Consult a healthcare professional for further evaluation and management.\n");
   }
   else {
       printf("Invalid blood pressure values. Please ensure accurate readings and consult a healthcare professional.\n");
   }
}

//11.RESPIRATORY SECTION

//function for respiratory health

void providerespiratoryratesolution(float respiratoryRate) {
   printf("\nRespiratory Rate Analysis:\n");
   printf("Recorded Respiratory Rate: %.2f breaths per minute\n", respiratoryRate);

   // Simple if-else statements to provide information based on respiratory rate
   if (respiratoryRate < 12.0) {
       printf("Potential Health Problem: Bradypnea (slow respiratory rate).\n");
       printf("Suggested Cure: Consult a healthcare professional for further evaluation.\n");
   }
   else if (respiratoryRate >= 12.0 && respiratoryRate <= 20.0) {
       printf("Respiratory rate within the normal range.\n");
       printf("Maintain a healthy lifestyle with regular exercise and proper breathing techniques.\n");
   }
   else if (respiratoryRate > 20.0) {
       printf("Potential Health Problem: Tachypnea (fast respiratory rate).\n");
       printf("Suggested Cure: Consult a healthcare professional for further evaluation.\n");
   }
   else {
       printf("Invalid respiratory rate value. Please ensure an accurate reading and consult a healthcare professional.\n");
   }
}

//12. BODY TEMP SECTION

//function for body temperature health

void providebodytempInfo(float bodyTemperature) {
   printf("\nBody Temperature Analysis:\n");
   printf("Recorded Body Temperature: %.2f degrees Celsius\n", bodyTemperature);

   // Simple if-else statements to provide information based on body temperature
   if (bodyTemperature < 35.0) {
       printf("Potential Health Problem: Hypothermia (low body temperature).\n");
       printf("Suggested Cure: Warm up gradually, use blankets, and seek medical attention if needed.\n");
   }
   else if (bodyTemperature >= 35.0 && bodyTemperature <= 37.5) {
       printf("Body temperature within the normal range.\n");
       printf("Maintain a healthy lifestyle with proper hydration and balanced nutrition.\n");
   }
   else if (bodyTemperature > 37.5) {
       printf("Potential Health Problem: Fever (high body temperature).\n");
       printf("Suggested Cure: Stay hydrated, get plenty of rest, and consult a healthcare professional if needed.\n");
   }
   else {
       printf("Invalid body temperature value. Please ensure an accurate reading and consult a healthcare professional.\n");
   }
}

//normal health suggestions

void genericrecs()
{
    //Normal tips
    // for everyone
  printf("\n\n*********************** [ HEALTH RECOMMENDATIONS ] ***********************\n\n");
  printf("1. Exercise daily - make a schedule which can fit your lifestyle and execute it\n");
  printf("2. Drink about 4 litres of water daily\n");
  printf("3. Eat a healthy balanced diet. Minimum 2000 calories for women and 2500 calories for men\n");
  printf("4. Get a good night's sleep. A minimum sleep of 8 hours keeps you healthy\n");
  printf("5. Try to meditate daily. A sound body thrives by a sound mind!\n\n");
}

void endfuncn(){
printf("\n\nHOPE THIS HELPED YOU! STAY HEALHY STAY FIT!\n\n");
printf("========================================== [ T H A N K   Y O U  ! ] ==================================================\n\n");

}

int main() {
   struct BioInfo user;
   int choice;
   int bmirecans;

   printf("\n\n=========================================== [ HEALTH AND FITNESS SYSTEM ] =============================================\n\n");
   printf("Good health and fitness contribute to overall physical well-being. It reduces the risk of chronic diseases, enhances the immune system, and promotes longevity.");
   printf("\nRegular physical activity has been linked to improved mental health. It helps in reducing stress, anxiety, and depression, while enhancing mood and cognitive function.");
   printf("\n\nIndividuals who maintain good health and fitness levels often experience increased productivity and better performance in various aspects of life, including work and academics.");
   printf("\nGood health and fitness contribute to an improved quality of life. It enables individuals to engage in daily activities with ease, participate in recreational activities, and enjoy a higher level of physical well-being.\n");

   printf("\n\n*************** [ ENTER YOUR DETAILS ] ***************\n\n");

   printf("Enter your name: ");
   scanf("%s",user.name);

   printf("\nEnter your age: ");
   scanf("%d",&user.age);

   printf("\nEnter your height (in meters): ");
   scanf("%f",&user.height);

   printf("\nEnter your weight (in kilograms): ");
   scanf("%f",&user.weight);

   printf("\nEnter your gender (M/F): ");
   scanf(" %c",&user.gender);

   printf("\n\n********************* [ M E N U ] *********************\n\n");

       int option=displayMenu();
       //ask user to input health counselling requirement

       switch (option)
       {
           case 1:
               //bmi based health counselling
               user.bmi=calculateBMI(user.height,user.weight);

               printf("\n\nBMI stands for Body Mass Index. It is a numerical value of a person's weight in relation to their height.");
               printf("\nBMI is a widely used screening tool to categorize individuals into different weight status categories.");
               printf("such as underweight,weight,overweight, and obesity. Here we shall evaluate health based on BMI\n\n");
               printf("\n");

               calculateBMI(user.height,user.weight);

               printf("\n\nDo you want BMI based recommendations? \n1.yes \n2.no\n ");
               scanf("%d",&bmirecans);
               printf("\n");

               switch(bmirecans){
                      case 1:
                               providebmiRecs(user.bmi);
                               provideExerciseRecommendations(user.bmi);
                               printf("\n\n");
                               break;
                      case 2:
                               printf("Thank You!");
                               break;
                               }
               genericrecs();
               break;


           case 2:
                 // Get health problems from the user
               printf("\nEnter your health problems (headache, sore_throat, back_pain, fever, cough, stomach_ache, fatigue, allergy, diarrhea, insomnia, migraine, joint_pain, anxiety, asthma, depression)\n ");
               scanf("%s",user.healthproblem);

                 //solution funcn
               printf("\n");
               providehealthproblemSolution(user.healthproblem);
               genericrecs();
               break;


           case 3:
                 // Get vitamin deficiency details from the user
               printf("\nEnter the vitamin (A,B12,C,D,E,K): ");
               scanf("%s", user.vitamin);

                 //solution funcn
               printf("\n");
               providevitaminsolution(user.vitamin);
               genericrecs();
               break;


           case 4:
                 // Get vitamin deficiency details from the user
               printf("\nEnter the mineral (iron, calcium, zinc, magnesium, potassium, iodine, selenium, copper, manganese, phosphorus): ");
               scanf("%s", user.mineral);

                 //solution funcn
               providemineralsolution(user.mineral);
               genericrecs();
               break;


           case 5:
                 //get lifestyle rate details from user
               printf("\nEnter type of lifestyle \n(sedentary, active, irregular_diet, healthy_diet,\nsmoker, non_smoker, relaxed, stressful,\nnight_owl, early_bird, socialite, introvert, \ntraveler, homebody, gamer, outdoorsy,\ncity_dweller, musician, vegetarian, non_vegetarian):\n\n");
               scanf("%s", user.lifestyle);

                 //soln funcn
               providelifestyleSolution(user.lifestyle);
               genericrecs();
               break;


           case 6:
                 //get chronic disease details
               printf("\nEnter chronic disease \n(heart_diseases, cancer, stroke, oestoporosis, alzheimers_disease,\n obesity, asthma, diabetes, hypertension, parkinsons_disease):\n\n ");
               scanf("%s", user.chronicDisease);

                //solution funcn
               providechronicdiseaseSolution(user.chronicDisease);
               genericrecs();
               break;


            case 7:
                 //get past disease details from user
               printf("\nEnter past disease (malaria, AIDS/HIV, ebola, corona, flu, hepatitis, cardiovascular_disease): \n");
               scanf("%s", user.pastDisease);

                 //solution funcn and effects
               provideEffectspastdis(user.pastDisease);
               providepastdiseaseSolution(user.pastDisease);
               genericrecs();
               break;


           case 8:
                 //get blood group details from user
               printf("Enter blood group: ");
               scanf("%s", user.bloodGroup);

                 //solution function
               provideFightingCapacity(user.bloodGroup);
               genericrecs();
               break;


            case 9:
                 //get heart details from user
               printf("Enter heartrate: ");
               scanf("%f",&user.heartRate);

                 //solution function
               provideheartratesolution(user.heartRate);
               genericrecs();
               break;


            case 10:
                 //get Blood pressure details from user
               printf("Enter systolic rate (upper): ");
               scanf("%f",&user.systolic);
               printf("Enter diastolic rate (lower): ");
               scanf("%f",&user.diastolic);

                 //solution function
               providebpsolution(user.systolic,user.diastolic);
               genericrecs();
               genericrecs();
               break;


            case 11:
                 //get respiratory details from user
               printf("Enter respiratory rate: ");
               scanf("%f",&user.respiratoryRate);

                 //solution function
               providerespiratoryratesolution(user.respiratoryRate);
               genericrecs();
               break;


            case 12:
                  //get temperature from user
                printf("Enter temperature in degrees celsius ");
                scanf("%f",&user.bodyTemperature);

                  //solution function
                providebodytempInfo(user.bodyTemperature);
                genericrecs();
                break;


           case 13:
               genericrecs();
               break;


           default:
               printf("Invalid choice. Please enter a valid option.\n");
      }

    endfuncn();

   return 0;
}
