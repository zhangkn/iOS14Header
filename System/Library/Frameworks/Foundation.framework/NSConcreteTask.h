/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTask.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface NSConcreteTask : NSTask {

	os_unfair_lock_s _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/id _terminationHandler;
	NSObject*<OS_dispatch_source> _dsrc;
	long long _suspendCount;
	int _pid;
	AQ __exitRunningInfo;
	char _qos;
	AB _isSpawnedProcessDisclaimed;

}
-(void)terminate;
-(void)launch;
-(BOOL)isRunning;
-(int)_procid;
-(void)setArguments:(id)arg1 ;
-(void)setTerminationHandler:(/*^block*/id)arg1 ;
-(long long)suspendCount;
-(id)arguments;
-(long long)qualityOfService;
-(void)interrupt;
-(/*^block*/id)terminationHandler;
-(id)launchPath;
-(void)dealloc;
-(void)setEnvironment:(id)arg1 ;
-(id)standardInput;
-(id)standardError;
-(void)waitUntilExit;
-(void)terminateTask;
-(id)currentDirectoryPath;
-(BOOL)isSpawnedProcessDisclaimed;
-(void)setPreferredArchitectures:(id)arg1 ;
-(BOOL)suspend;
-(BOOL)launchWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setStartsNewProcessGroup:(BOOL)arg1 ;
-(void)_withTaskDictionary:(/*^block*/id)arg1 ;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(long long)_platformExitInformation;
-(void)setLaunchPath:(id)arg1 ;
-(id)standardOutput;
-(id)taskDictionary;
-(void)setSpawnedProcessDisclaimed:(BOOL)arg1 ;
-(id)preferredArchitectures;
-(int)terminationStatus;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setTaskDictionary:(id)arg1 ;
-(long long)terminationReason;
-(BOOL)resume;
-(void)_setTerminationHandler:(/*^block*/id)arg1 ;
-(int)processIdentifier;
-(id)environment;
-(void)setQualityOfService:(long long)arg1 ;
@end
