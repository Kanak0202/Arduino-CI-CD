pipeline {
    agent any

    environment {
        ARDUINO_CLI = "C:\\Users\\kanak\\AppData\\Local\\Arduino15\\arduino-cli.exe"
    }

    stages {
        stage('Checkout Code') {
            steps {
                git branch: 'main', url: 'https://github.com/Kanak0202/Arduino-CI-CD.git'
            }
        }

        stage('Setup Environment') {
            steps {
                bat 'arduino-cli core update-index'
                bat 'arduino-cli core install arduino:avr'
            }
        }

        stage('Compile Sketch') {
            steps {
                bat 'arduino-cli compile --fqbn arduino:avr:uno ./Arduino-CI-CD-V1'
            }
        }

        stage('Build Successful') {
            steps {
                echo 'Build completed successfully!'
            }
        }
    }
}
