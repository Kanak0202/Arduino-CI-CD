pipeline {
    agent any

    stages {
        stage('Checkout Code') {
            steps {
                git 'https://github.com/Kanak0202/Arduino-CI-CD.git'
            }
        }

        stage('Compile Sketch') {
            steps {
                bat 'arduino-cli compile --fqbn arduino:avr:uno Arduino-CI-CD-V1'
            }
        }

        stage('Build Successful') {
            steps {
                echo 'Build completed successfully!'
            }
        }
    }
}
