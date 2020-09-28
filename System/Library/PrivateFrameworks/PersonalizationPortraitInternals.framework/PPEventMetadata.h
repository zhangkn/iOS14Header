/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface PPEventMetadata : NSObject <NSCopying> {

	unsigned long long _ocnt_precomputedHash;
	BOOL _shouldConsiderAlarms;
	NSDictionary* _titlesAndParticipants;
	double _earliestStartTime;

}

@property (nonatomic,readonly) NSDictionary * titlesAndParticipants;              //@synthesize titlesAndParticipants=_titlesAndParticipants - In the implementation block
@property (nonatomic,readonly) double earliestStartTime;                          //@synthesize earliestStartTime=_earliestStartTime - In the implementation block
@property (nonatomic,readonly) BOOL shouldConsiderAlarms;                         //@synthesize shouldConsiderAlarms=_shouldConsiderAlarms - In the implementation block
+(id)eventMetadataWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 ;
-(unsigned long long)_hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)titlesAndParticipants;
-(BOOL)shouldConsiderAlarms;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithTitlesAndParticipants:(id)arg1 earliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 ;
-(BOOL)isEqualToEventMetadata:(id)arg1 ;
-(unsigned long long)hash;
-(double)earliestStartTime;
@end
