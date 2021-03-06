/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DataDeliveryServices.framework/DataDeliveryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DDSTimedAnalytic : NSObject {

	BOOL _success;
	int _lastAction;
	NSString* _identifier;
	unsigned long long _retries;
	double _startTime;
	double _endTime;

}

@property (assign,nonatomic) unsigned long long retries;                      //@synthesize retries=_retries - In the implementation block
@property (assign,nonatomic) BOOL success;                                    //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) double startTime;                                //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                                  //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) int lastAction;                                  //@synthesize lastAction=_lastAction - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned long long durationInSec; 
-(void)setSuccess:(BOOL)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(double)endTime;
-(NSString *)identifier;
-(unsigned long long)retries;
-(BOOL)success;
-(void)setRetries:(unsigned long long)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)init;
-(void)setEndTime:(double)arg1 ;
-(void)updateWithAction:(int)arg1 ;
-(unsigned long long)durationInSec;
-(int)lastAction;
-(void)setLastAction:(int)arg1 ;
@end

