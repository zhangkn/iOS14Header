/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, PBCodable;

@interface WANWActivityStatistics : NSObject {

	BOOL _fromInitWithPBCodableData;
	unsigned _awdMetricID;
	NSArray* _activityUUIDs;
	NSArray* _externallyVisibleActivityUUIDs;
	PBCodable* _awdReport;

}

@property (nonatomic,retain) PBCodable * awdReport;                       //@synthesize awdReport=_awdReport - In the implementation block
@property (assign,nonatomic) unsigned awdMetricID;                        //@synthesize awdMetricID=_awdMetricID - In the implementation block
@property (retain) NSArray * activityUUIDs;                               //@synthesize activityUUIDs=_activityUUIDs - In the implementation block
@property (retain) NSArray * externallyVisibleActivityUUIDs;              //@synthesize externallyVisibleActivityUUIDs=_externallyVisibleActivityUUIDs - In the implementation block
-(void)setAwdReport:(PBCodable *)arg1 ;
-(void)setExternallyVisibleActivityUUIDs:(NSArray *)arg1 ;
-(NSArray *)externallyVisibleActivityUUIDs;
-(id)initWithPBCodableData:(id)arg1 ;
-(unsigned)awdMetricID;
-(void)setAwdMetricID:(unsigned)arg1 ;
-(PBCodable *)awdReport;
-(void)setActivityUUIDs:(NSArray *)arg1 ;
-(NSArray *)activityUUIDs;
-(id)initWithWAActivityReport:(const void*)arg1 length:(unsigned long long)arg2 ;
@end

