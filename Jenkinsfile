#!/usr/bin/env groovy

pipeline {
    agent any
    stages {
        stage('Stage 1'){
            steps {
            	sh 'make'
                echo 'made it to stage1'
            }
        }
        stage('Stage 2'){
        	steps {
                sh './pyramid 5'
        		echo 'made it to stage2'
        	}
        }
    }
}