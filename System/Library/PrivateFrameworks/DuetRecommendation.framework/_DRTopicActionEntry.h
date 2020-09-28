/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DuetRecommendation.framework/DuetRecommendation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface _DRTopicActionEntry : NSObject {

	NSString* _topic;
	NSDate* _when;
	unsigned long long _action;

}

@property (retain,readonly) NSString * topic;                //@synthesize topic=_topic - In the implementation block
@property (retain,readonly) NSDate * when;                   //@synthesize when=_when - In the implementation block
@property (readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
-(NSString *)topic;
-(unsigned long long)action;
-(NSDate *)when;
-(id)description;
-(id)initWithTopic:(id)arg1 when:(id)arg2 action:(unsigned long long)arg3 ;
@end
