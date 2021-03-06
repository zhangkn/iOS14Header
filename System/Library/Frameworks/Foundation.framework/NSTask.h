/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSURL, NSArray, NSDictionary;

@interface NSTask : NSObject

@property (copy) NSURL * executableURL; 
@property (copy) NSArray * arguments; 
@property (copy) NSDictionary * environment; 
@property (copy) NSURL * currentDirectoryURL; 
@property (retain) id standardInput; 
@property (retain) id standardOutput; 
@property (retain) id standardError; 
@property (readonly) int processIdentifier; 
@property (getter=isRunning,readonly) BOOL running; 
@property (readonly) int terminationStatus; 
@property (readonly) long long terminationReason; 
@property (copy) id terminationHandler; 
@property (assign) long long qualityOfService; 
+(id)launchedTaskWithExecutableURL:(id)arg1 arguments:(id)arg2 error:(out id*)arg3 terminationHandler:(/*^block*/id)arg4 ;
+(id)launchedTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 ;
+(id)launchedTaskWithDictionary:(id)arg1 ;
+(id)currentTaskDictionary;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)terminate;
-(void)launch;
-(BOOL)isRunning;
-(void)setArguments:(NSArray *)arg1 ;
-(void)setTerminationHandler:(id)arg1 ;
-(long long)suspendCount;
-(NSArray *)arguments;
-(long long)qualityOfService;
-(void)interrupt;
-(id)terminationHandler;
-(id)launchPath;
-(void)setEnvironment:(NSDictionary *)arg1 ;
-(id)standardInput;
-(id)standardError;
-(NSURL *)executableURL;
-(id)currentDirectoryPath;
-(BOOL)isSpawnedProcessDisclaimed;
-(BOOL)suspend;
-(id)init;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(void)setLaunchPath:(id)arg1 ;
-(id)standardOutput;
-(void)setSpawnedProcessDisclaimed:(BOOL)arg1 ;
-(int)terminationStatus;
-(void)setExecutableURL:(NSURL *)arg1 ;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(BOOL)launchAndReturnError:(id*)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(long long)terminationReason;
-(BOOL)resume;
-(NSURL *)currentDirectoryURL;
-(void)setCurrentDirectoryURL:(NSURL *)arg1 ;
-(int)processIdentifier;
-(NSDictionary *)environment;
-(void)setQualityOfService:(long long)arg1 ;
@end

