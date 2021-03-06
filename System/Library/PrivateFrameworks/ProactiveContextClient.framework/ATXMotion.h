/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:02 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATXMotion : NSObject {

	BOOL _stationary;
	BOOL _canPredictClipsGivenRecentMotion;
	long long _motiontype;

}

@property (nonatomic,readonly) long long motiontype;                               //@synthesize motiontype=_motiontype - In the implementation block
@property (nonatomic,readonly) BOOL stationary;                                    //@synthesize stationary=_stationary - In the implementation block
@property (nonatomic,readonly) BOOL canPredictClipsGivenRecentMotion;              //@synthesize canPredictClipsGivenRecentMotion=_canPredictClipsGivenRecentMotion - In the implementation block
+(id)getMotionStringFromMotionType:(long long)arg1 ;
+(id)summarizeActivityStream:(id)arg1 ;
+(id)_getMotionStringFromCMMotionActivity:(id)arg1 ;
+(id)findMostCommonAndRecent:(id)arg1 identityFunc:(/*^block*/id)arg2 ;
+(BOOL)canPredictClipsForActivityStream:(id)arg1 ;
+(long long)_getMotionTypeFromCMMotionActivity:(id)arg1 ;
-(id)initWithMotionType:(long long)arg1 stationary:(BOOL)arg2 canPredictClipsGivenRecentMotion:(BOOL)arg3 ;
-(BOOL)stationary;
-(id)initFromCMMotionActivity:(id)arg1 ;
-(id)print;
-(BOOL)canPredictClipsGivenRecentMotion;
-(id)initFromCMMotionActivity:(id)arg1 canPredictClipsGivenRecentMotion:(BOOL)arg2 ;
-(id)getMotionString;
-(long long)motiontype;
@end

