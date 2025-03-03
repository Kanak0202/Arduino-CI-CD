pipeline {
    agent any

    environment {
        ARDUINO_CLI = "C:\\Users\\kanak\\AppData\\Local\\Arduino15\\arduino-cli.exe"
        ARDUINO_DATA_PATH = "C:\\arduino-cli-data"
    }

    stages {
        stage('Checkout Code') {
            steps {
                git branch: 'main', url: 'https://github.com/Kanak0202/Arduino-CI-CD.git'
            }
        }

        stage('Setup Environment') {
            steps {
                bat 'set ARDUINO_DATA_PATH=C:\\arduino-cli-data'
                bat '"%ARDUINO_CLI%" core update-index'
                bat '"%ARDUINO_CLI%" core install arduino:avr'
            }
        }

        stage('Compile Sketch') {
            steps {
                bat '"%ARDUINO_CLI%" compile --fqbn arduino:avr:uno .'
            }
        }

        stage('Build Successful') {
            steps {
                echo 'Build completed successfully!'
            }
        }
    }
}
