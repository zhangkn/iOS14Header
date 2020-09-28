/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXAnalyticsEvent.h>

@interface SXArticleScrollEvent : SXAnalyticsEvent {

	double _startPosition;
	double _endPosition;
	double _targetPosition;
	double _velocity;

}

@property (assign,nonatomic) double startPosition;               //@synthesize startPosition=_startPosition - In the implementation block
@property (assign,nonatomic) double endPosition;                 //@synthesize endPosition=_endPosition - In the implementation block
@property (assign,nonatomic) double targetPosition;              //@synthesize targetPosition=_targetPosition - In the implementation block
@property (assign,nonatomic) double velocity;                    //@synthesize velocity=_velocity - In the implementation block
-(void)setVelocity:(double)arg1 ;
-(double)targetPosition;
-(double)endPosition;
-(void)setStartPosition:(double)arg1 ;
-(double)startPosition;
-(double)velocity;
-(void)setTargetPosition:(double)arg1 ;
-(void)setEndPosition:(double)arg1 ;
@end
