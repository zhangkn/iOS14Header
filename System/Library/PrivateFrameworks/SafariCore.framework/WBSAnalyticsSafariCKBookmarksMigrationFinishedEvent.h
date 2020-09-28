/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WBSAnalyticsSafariCKBookmarksMigrationFinishedEvent : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _timestamp;
	NSString* _errorCode;
	NSString* _errorDomain;
	int _migratorType;
	int _result;
	SCD_Struct_WB11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasMigratorType; 
@property (assign,nonatomic) int migratorType;                          //@synthesize migratorType=_migratorType - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) int result;                                //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                    //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)errorDomain;
-(BOOL)hasErrorDomain;
-(void)writeTo:(id)arg1 ;
-(void)setErrorDomain:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(int)result;
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(BOOL)hasResult;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setResult:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)migratorType;
-(void)setHasMigratorType:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(BOOL)hasTimestamp;
-(BOOL)hasMigratorType;
-(id)migratorTypeAsString:(int)arg1 ;
-(int)StringAsMigratorType:(id)arg1 ;
-(id)resultAsString:(int)arg1 ;
-(int)StringAsResult:(id)arg1 ;
-(void)setMigratorType:(int)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasErrorCode;
-(NSString *)errorCode;
-(id)description;
-(void)setHasResult:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
@end
