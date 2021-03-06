/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:45:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDProactiveAppPredictionSubscores;

@interface AWDProactiveAppData : PBCodable <NSCopying> {

	double _score;
	unsigned long long _timestamp;
	NSString* _bundleId;
	NSString* _sessionId;
	AWDProactiveAppPredictionSubscores* _subscores;
	BOOL _engagedApp;
	SCD_Struct_AT5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasEngagedApp; 
@property (assign,nonatomic) BOOL engagedApp;                                             //@synthesize engagedApp=_engagedApp - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                                                //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) BOOL hasSubscores; 
@property (nonatomic,retain) AWDProactiveAppPredictionSubscores * subscores;              //@synthesize subscores=_subscores - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                                        //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId;                                         //@synthesize bundleId=_bundleId - In the implementation block
-(void)setHasTimestamp:(BOOL)arg1 ;
-(NSString *)sessionId;
-(BOOL)hasSessionId;
-(AWDProactiveAppPredictionSubscores *)subscores;
-(void)setSessionId:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(double)score;
-(void)setScore:(double)arg1 ;
-(unsigned long long)timestamp;
-(void)setBundleId:(NSString *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasSubscores;
-(BOOL)hasTimestamp;
-(NSString *)bundleId;
-(void)setSubscores:(AWDProactiveAppPredictionSubscores *)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasBundleId;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setEngagedApp:(BOOL)arg1 ;
-(void)setHasEngagedApp:(BOOL)arg1 ;
-(BOOL)hasEngagedApp;
-(BOOL)engagedApp;
@end

