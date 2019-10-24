pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building..'
                gcc -c 'test.c'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing..'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying....'
            }
        }
    }
}
