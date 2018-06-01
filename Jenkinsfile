#/usr/bin/env groovy

pipeline {
    agent any
    stages {
        stage('Stage 1'){
            steps {
            	sh 'make'
            }
        }
        stage('Stage 2'){
        	steps {
        		echo 'Hello World!'
        	}
        }
    }
}