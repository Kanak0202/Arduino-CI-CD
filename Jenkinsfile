pipeline {
    agent any
    environment {
        BOARD = 'arduino:avr:uno'
        SKETCH = 'sketch.ino'
        BUILD_DIR = './build/arduino.avr.uno'
    }
    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/Kanak0202/Arduino-CI-CD.git'
            }
        }
        stage('Install Dependencies') {
            steps {
                sh 'arduino-cli lib install <library-name>'  // Replace with actual libraries
            }
        }
        stage('Compile') {
            steps {
                sh "arduino-cli compile --fqbn ${BOARD} --build-path ${BUILD_DIR} ${SKETCH}"
            }
        }
    }
}
