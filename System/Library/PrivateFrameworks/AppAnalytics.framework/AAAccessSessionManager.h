/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AAAccessSessionManager : NSObject {

	 accessSessionManager;

}

@property (readonly,nonatomic) BOOL isActive; 
-(BOOL)isActive;
-(id)init;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 ;
-(void)pushSessionData:(id)arg1 ;
-(void)pushSessionData:(id)arg1 submitEventQueues:(BOOL)arg2 ;
-(void)pushSessionData:(id)arg1 traits:(id)arg2 submitEventQueues:(BOOL)arg3 ;
@end
