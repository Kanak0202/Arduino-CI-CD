pipeline {
    agent any

    environment {
        ARDUINO_DATA_DIR = "C:\\arduino-cli-data"
    }

    stages {
        stage('Install Dependencies') {
            steps {
                bat 'echo Installing dependencies...'
                bat 'arduino-cli core update-index'
                bat 'arduino-cli core install arduino:avr'
            }
        }

        stage('Set Sketchbook Path') {
            steps {
                bat 'echo Setting Arduino sketchbook path...'
                bat 'arduino-cli config set sketchbook_path C:\\ProgramData\\Jenkins\\.jenkins\\workspace\\Arduino-CI-CD-V1'
            }
        }

        stage('Compile Sketch') {
            steps {
                bat 'echo Checking files...'
                bat 'dir Arduino-CI-CD-V1'  // Debugging step to check if the .ino file exists
                
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
