pipeline {
    agent any
    environment {
        BOARD = 'arduino:avr:uno'
        SKETCH = 'sketch.ino'
        BUILD_DIR = './build/arduino.avr.uno'
        PORT = 'COM3'
    }
    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/Kanak0202/Arduino-CI-CD.git'
            }
        }
        stage('Install Dependencies') {
            steps {
                sh 'arduino-cli lib install <library-name>'  // Replace with actual library names
            }
        }
        stage('Compile') {
            steps {
                sh "arduino-cli compile --fqbn ${BOARD} --build-path ${BUILD_DIR} ${SKETCH}"
            }
        }
        stage('Deploy') {
            steps {
                sh "arduino-cli upload --fqbn ${BOARD} --port ${PORT} --input-dir ${BUILD_DIR}"
            }
        }
    }
}
