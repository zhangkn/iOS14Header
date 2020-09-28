/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiomeStreams/BMEventBase.h>
#import <libobjc.A.dylib/BMEventTimeElapsing.h>

@class NSDateInterval, NSString;

@interface BMEventTimeElapsingImplementor : BMEventBase <BMEventTimeElapsing> {

	double absoluteTimestamp;
	double duration;

}

@property (nonatomic,copy) NSDateInterval * dateInterval; 
@property (assign,nonatomic) double absoluteTimestamp; 
@property (assign,nonatomic) double duration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDateInterval:(NSDateInterval *)arg1 ;
-(NSDateInterval *)dateInterval;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(double)absoluteTimestamp;
-(void)setAbsoluteTimestamp:(double)arg1 ;
-(BOOL)isValidWithContext:(id)arg1 error:(id*)arg2 ;
@end
