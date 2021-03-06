/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDJournalEntry.h>

@class NSUUID, NSDictionary;

@interface _HDSeriesFreezeJournalEntry : HDJournalEntry {

	NSUUID* _seriesUUID;
	NSDictionary* _metadata;
	Class _seriesClass;

}

@property (nonatomic,copy,readonly) NSUUID * seriesUUID;                  //@synthesize seriesUUID=_seriesUUID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) Class seriesClass;                         //@synthesize seriesClass=_seriesClass - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg1 withProfile:(id)arg2 ;
-(NSDictionary *)metadata;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithSeriesUUID:(id)arg1 metadata:(id)arg2 class:(Class)arg3 ;
-(Class)seriesClass;
-(NSUUID *)seriesUUID;
@end

