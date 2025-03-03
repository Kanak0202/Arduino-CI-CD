pipeline {
    agent any

    environment {
        ARDUINO_DATA_DIR = "C:\\arduino-cli-data"
        ARDUINO_SKETCHBOOK = "C:\\ProgramData\\Jenkins\\.jenkins\\workspace\\Arduino-CI-CD-V1"
    }

    stages {
        stage('Install Dependencies') {
            steps {
                bat 'echo Installing dependencies...'
                bat 'arduino-cli core update-index'
                bat 'arduino-cli core install arduino:avr'
            }
        }

        stage('Compile Sketch') {
            steps {
                bat 'echo Checking files...'
                bat 'dir Arduino-CI-CD-V1'  // Debugging step
                
                bat 'echo Compiling sketch...'
                bat 'arduino-cli compile --fqbn arduino:avr:uno ./Arduino-CI-CD-V1'
            }
        }

        stage('Upload to Arduino') {
            steps {
                bat 'echo Uploading to Arduino...'
                bat 'arduino-cli upload -p COM3 --fqbn arduino:avr:uno ./Arduino-CI-CD-V1'
            }
        }
    }
}
