#!/bin/bash

projectDir=/Users/zhaolibo/Desktop/JLMC
projectName=Unity-iPhone
CODE_SIGN_IDENTITY="iPhone Distribution: Ningbo Lepu Info-Tech Co., Ltd."
PROVISIONING_PROFILE="playelvesInhouse"
CONFIGURATION="Release"
logPath=$projectDir/buildLog.txt

xcarchivePath=$projectDir/build/$CONFIGURATION-iphoneos/$projectName.xcarchive
ipaPath=$projectDir/build/$CONFIGURATION-iphoneos/$projectName.ipa
exportOptionsPlist=$projectDir/InHouse.plist

rm -rf $logPath $projectDir/build

xcodebuild clean -project $projectName.xcodeproj -configuration $CONFIGURATION -alltargets >> $logPath
xcodebuild archive -scheme $projectName -configuration $CONFIGURATION -archivePath $xcarchivePath >> $logPath
xcodebuild -exportArchive -archivePath $xcarchivePath -exportPath $ipaPath -exportFormat ipa -exportProvisioningProfile $PROVISIONING_PROFILE >> $logPath

echo "正在上传$projectName"

curl -F "file=@$ipaPath" -F "uKey=c579bd2314239f5460b070df97af3355" -F "_api_key=e02747cfc7e1cf26d885530cfde2bacf" http://www.pgyer.com/apiv1/app/upload >> $logPath
