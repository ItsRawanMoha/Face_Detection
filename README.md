# Face Detection

This readme file provides instructions for implementing face detection using two different approaches: OpenCV and Flask for real-time face detection, and Teachable Machine and TensorFlow with Android Studio.

<img src="https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/cde7d763-4810-424b-917e-440b87fed078" alt="Alt text" width="500" height="400"> <img src="https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/7f352661-9eca-4145-a7af-aaf7e747b669" alt="Alt text" width="500" height="400"> 

![image](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/730a45ee-570a-4e20-8c72-ff0fcdd95841)

## Introduction

Face detection is a computer vision task that involves identifying and locating human faces within images or video streams. It is a fundamental building block for various applications such as security systems, biometrics, and augmented reality.

![image](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/bc79a350-76d1-4cc0-a18c-f70b7a40e54f)


## How it Works

### OpenCV and Flask
This approach utilizes the OpenCV library for computer vision tasks and Flask, a web framework for Python, to create a web application for real-time face detection. OpenCV provides pre-trained face detection models that can be used to detect faces in video streams captured from webcams or other sources.

### Teachable Machine and TensorFlow with Android Studio
Teachable Machine is a web-based tool developed by Google that allows users to train custom machine learning models without writing code. TensorFlow, an open-source machine learning framework, is used under the hood to train and deploy the models. In this approach, we'll use Teachable Machine to train a face detection model and integrate it into an Android application using Android Studio.

## Getting Started

To get started with each approach:

1. **OpenCV and Flask**: Install Python, OpenCV, and Flask on your development machine. Set up a virtual environment and install the necessary dependencies. Clone or create a Flask project and implement the real-time face detection functionality using OpenCV.

2. **Teachable Machine and TensorFlow with Android Studio**: Access the Teachable Machine website and train a face detection model using your own images or the provided datasets. Export the trained model and integrate it into an Android application using Android Studio.

## Steps

### OpenCV and Flask
1. Set up a Flask web application project.
2. Create routes for handling HTTP requests and serving HTML templates.
3. Implement the face detection logic using OpenCV within the Flask routes.
4. Render the real-time face detection output in the web application.

### Teachable Machine and TensorFlow with Android Studio
1. Train a face detection model using Teachable Machine.
2. Export the trained model as a TensorFlow Lite model.
3. Create a new Android Studio project.
4. Add the TensorFlow Lite model to the Android project and implement code for inference.
5. Set up the camera preview and process frames for face detection using the TensorFlow Lite model.

## Connection

### OpenCV and Flask
The Flask web application communicates with the client's web browser to display the real-time face detection output. OpenCV processes the video stream captured from the webcam or camera.

### Teachable Machine and TensorFlow with Android Studio
The Android application captures frames from the device's camera and passes them through the TensorFlow Lite model for face detection. The detected faces are then displayed on the device's screen.

## Output

The output of both approaches is a real-time display of detected faces. In the case of OpenCV and Flask, the output is rendered in a web browser, while in the Teachable Machine and TensorFlow with Android Studio approach, the output is displayed on an Android device.

## Code

Sample code for implementing face detection using OpenCV and Flask, as well as for integrating a TensorFlow Lite model into an Android application, can be found in the files section above.

## Pictures

### OpenCV picture
- detect_face_image.py
  
  ![test](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/510517cc-1851-463e-82b6-588b662de105)
  ![MiIawZkJF0](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/670407be-c991-4f6a-9d35-144d4d54a59b)

  #### on terminal run
  ```
  python detect_face_image.py
  ```


### OpenCV Video
- detect_face_video.py

  ![Face detection (1)](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/7e20eb6b-efa3-413d-b4eb-770d339fa378)

  #### on terminal run
  ```
  python detect_face_video.py
  ```
  
### Hand gesture detection
- mainGestures.py
- utlis.py

 ![HandDetect](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/04bfb923-6248-4c9b-b2eb-97c522b00f2d) ![WhatsApp Video 2024-03-18 at 3 47 43 PM (1)](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/d75a8219-fcae-4990-965b-23448467cab3)


  As you see in counts how many fingers I raise. And it was fun knowing it can counts my inmoov hand as well. 


### OpenCV and Flask
- app.y
- index.html
- All haarcascades (I used face only), I include car, eye and fullbody detection.
- requirements.txt

  #### I used as an examlpe (Angelina)

  <img src="https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/c8fbee93-8599-4651-9a22-ff64daaf9f0d" alt="Alt text" width="700" height="400"> 

  ![chrome_2hWzgkEnOQ](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/4302b4ce-0e2d-4608-b835-9873410c96fa)

   #### on terminal run
  ```
  python appe.py
  ```


### Teachable Machine and TensorFlow with Android Studio

### Step 1: Went to teachable machine website and made those classes (Cat, Dog, Hamster, Goat).

<img src="https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/17468b69-a6b7-4b09-a22e-4bcc561a54db" alt="Alt text" width="700" height="400"> 

![ZgWEJ818Ae](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/8bcf4617-e09c-4a87-9ff9-3745ebb98428)


### Step 2: Choose Tensorflow Lite -> Android 

![zKuUz3NLTD](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/16c8dcc0-779c-425f-873c-9f9067169992)

### Step 3: Create a simple app on Android studio 

![ufAKo2LCLX](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/e6992650-1167-4016-adc1-3c33670195ee)

### Step 4: File -> New -> Other -> Tensorflow Lite Model 

![studio64_4bVeoB8K5J](https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/795d05b5-2aa5-4fb3-8578-a463ae3da524)

### Step 6: Run and test your application, I tested the cat and hamster pictures (I added the apk file in the uploaded files section above).

<img src="https://github.com/ItsRawanMoha/Face_Detection/assets/156599594/df3871cc-359d-4c29-ba5d-a13f0823dc80" alt="Alt text" width="480" height="850"> 


## Conclusion

Face detection is a powerful technology with numerous applications across various domains. By leveraging tools like OpenCV, Flask, Teachable Machine, TensorFlow, and Android Studio, developers can create innovative face detection solutions for web and mobile platforms.
