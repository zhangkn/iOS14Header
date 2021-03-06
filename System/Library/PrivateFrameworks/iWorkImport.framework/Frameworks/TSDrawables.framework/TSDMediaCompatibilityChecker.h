/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:27 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol TSDMediaCompatibilityChecker <NSObject>
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled; 
@property (nonatomic,readonly) long long compatibilityLevel; 
@property (nonatomic,readonly) NSError * error; 
@required
-(void)cancel;
-(NSError *)error;
-(BOOL)isCancelled;
-(void)checkCompatibilityUpToLevel:(long long)arg1 completionHandler:(/*^block*/id)arg2;
-(long long)compatibilityLevel;

@end

