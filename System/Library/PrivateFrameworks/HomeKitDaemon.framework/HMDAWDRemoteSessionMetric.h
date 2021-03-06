/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSDate, NSUUID, NSString;

@interface HMDAWDRemoteSessionMetric : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _submitted;
	BOOL _authenticated;
	int _role;
	int _closeReason;
	NSDate* _creation;
	NSUUID* _sessionID;

}

@property (assign,nonatomic) BOOL submitted;                        //@synthesize submitted=_submitted - In the implementation block
@property (nonatomic,retain) NSDate * creation;                     //@synthesize creation=_creation - In the implementation block
@property (nonatomic,readonly) int role;                            //@synthesize role=_role - In the implementation block
@property (getter=isAuthenticated) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
@property (nonatomic,readonly) int closeReason;                     //@synthesize closeReason=_closeReason - In the implementation block
@property (nonatomic,readonly) NSUUID * sessionID;                  //@synthesize sessionID=_sessionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
+(int)closeReasonFromError:(id)arg1 ;
-(BOOL)isAuthenticated;
-(void)open;
-(void)setCreation:(NSDate *)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(NSUUID *)sessionID;
-(int)role;
-(NSDate *)creation;
-(int)closeReason;
-(BOOL)submitted;
-(void)setSubmitted:(BOOL)arg1 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(id)initWithClientMode:(BOOL)arg1 sessionID:(id)arg2 ;
@end

