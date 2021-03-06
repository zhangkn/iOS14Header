/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSSnapshotBag.h>

@class NSDate, NSString;

@interface _TtC9JetEngineP33_43668EAB0029CBE05F32792F2AFA42DB12MockedAMSBag : AMSSnapshotBag {

	 bagProfile;
	 stubs;

}

@property (readonly,nonatomic) BOOL expired; 
@property (readonly,nonatomic) NSDate * expirationDate; 
@property (readonly,nonatomic) NSString * profile; 
@property (readonly,nonatomic) NSString * profileVersion; 
-(id)doubleForKey:(id)arg1 ;
-(NSString *)profileVersion;
-(id)arrayForKey:(id)arg1 ;
-(id)URLForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(id)integerForKey:(id)arg1 ;
-(NSDate *)expirationDate;
-(NSString *)profile;
-(id)init;
-(BOOL)isExpired;
-(void)createSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(id)boolForKey:(id)arg1 ;
@end

