/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSDate;

@interface CRKEventLog : NSObject <NSSecureCoding> {

	NSSet* mLazilyLoadedEvents;
	NSDate* _startDate;
	NSDate* _endDate;
	NSSet* _passedInEvents;
	NSSet* _passedInEventDatas;

}

@property (nonatomic,retain) NSDate * startDate;                    //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                      //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSSet * passedInEvents;                  //@synthesize passedInEvents=_passedInEvents - In the implementation block
@property (nonatomic,copy) NSSet * passedInEventDatas;              //@synthesize passedInEventDatas=_passedInEventDatas - In the implementation block
@property (nonatomic,copy,readonly) NSSet * events; 
+(BOOL)supportsSecureCoding;
-(NSSet *)events;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSDate *)startDate;
-(unsigned long long)hash;
-(id)description;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSSet *)passedInEvents;
-(NSSet *)passedInEventDatas;
-(BOOL)isEqualToTimeline:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 eventDatas:(id)arg3 ;
-(void)setPassedInEvents:(NSSet *)arg1 ;
-(void)setPassedInEventDatas:(NSSet *)arg1 ;
@end

