/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSDictionary;

@interface WBSHistoryServiceEvent : NSObject <NSSecureCoding> {

	long long _eventID;
	NSString* _eventType;
	NSDate* _time;
	NSDictionary* _value;

}

@property (nonatomic,readonly) long long eventID;                      //@synthesize eventID=_eventID - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventType;              //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,copy,readonly) NSDate * time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)time;
-(NSString *)eventType;
-(id)init;
-(NSDictionary *)value;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)eventID;
-(id)initWithType:(id)arg1 time:(id)arg2 value:(id)arg3 ;
-(id)initWithEventID:(long long)arg1 type:(id)arg2 time:(id)arg3 value:(id)arg4 ;
@end

