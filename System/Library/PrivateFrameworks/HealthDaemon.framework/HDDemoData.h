/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSFileManager;

@interface HDDemoData : NSObject {

	NSString* _demoDataPath;
	NSFileManager* _fileManager;

}
+(BOOL)shouldUseDemoDataDirectory;
+(BOOL)willBeGeneratingDemoData;
+(id)demoDataDirectory;
-(id)_directoryPath;
-(id)initWithProfileType:(long long)arg1 ;
-(BOOL)_resetDemoDataDB;
@end

