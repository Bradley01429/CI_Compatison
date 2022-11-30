Jenkinsfile (Declarative Pipeline)
/* Requires the Docker Pipeline plugin */
pipeline {
    agent { docker { image 'rikorose/gcc-cmake' } }
    stages {
        stage('Build') {
            steps {
                sh 'mkdir build'
                sh 'cd build'
                sh 'cmake ..'
                sh 'make'
            }
        }
    }
}