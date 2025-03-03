pipeline {
    agent any
    
    stages {
        stage('Install Dependencies') {
            steps {
                bat 'echo Installing dependencies...'
                bat 'arduino-cli core update-index'  // Ensure Arduino CLI is available
                bat 'arduino-cli core install arduino:avr'
            }
        }
        
        stage('Compile Sketch') {
            steps {
                bat 'arduino-cli compile --fqbn arduino:avr:uno path/to/sketch'
            }
        }
        
        stage('Upload to Arduino') {
            steps {
                bat 'arduino-cli upload -p COM3 --fqbn arduino:avr:uno path/to/sketch'
            }
        }
    }
}