pipeline {
    agent any
    stages {
        stage('Checkout') {
            steps {
                git branch: 'main', url: 'https://github.com/YOUR_USERNAME/Arduino-CI-CD.git'
            }
        }
        stage('Compile') {
            steps {
                sh 'arduino-cli compile --fqbn arduino:avr:uno sketch.ino'
            }
        }
        stage('Deploy') {
            steps {
                sh 'arduino-cli upload --fqbn arduino:avr:uno --port COM3 --input-dir sketch.ino'
            }
        }
    }
}
