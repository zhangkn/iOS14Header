/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VCCallLinkCongestionDetector : NSObject {

	BOOL isLinkCongested;
	double rttThreshold;
	double lossRateThreshold;

}

@property (assign,nonatomic) BOOL isLinkCongested; 
-(id)initWithRTTThreshold:(double)arg1 lossRateThreshold:(double)arg2 ;
-(void)addNewRTT:(double)arg1 packetLossRate:(double)arg2 timestamp:(double)arg3 ;
-(BOOL)isLinkCongested;
-(void)setIsLinkCongested:(BOOL)arg1 ;
@end

