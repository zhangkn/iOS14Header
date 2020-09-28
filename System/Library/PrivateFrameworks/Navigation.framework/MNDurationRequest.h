/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MNDurationRequest : NSObject {

	NSMutableArray* completions;
	double startTime;
	unsigned long long _intervalIdentifier;

}

@property (nonatomic,retain) NSMutableArray * completions; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) unsigned long long intervalIdentifier;              //@synthesize intervalIdentifier=_intervalIdentifier - In the implementation block
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(id)init;
-(NSMutableArray *)completions;
-(unsigned long long)intervalIdentifier;
-(void)setIntervalIdentifier:(unsigned long long)arg1 ;
@end
