/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:46 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _deleteType;
	NSMutableArray* _groups;
	BOOL _syncEnabled;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSyncEnabled; 
@property (assign,nonatomic) BOOL syncEnabled;                          //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDeleteType; 
@property (assign,nonatomic) unsigned deleteType;                       //@synthesize deleteType=_deleteType - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                   //@synthesize groups=_groups - In the implementation block
+(Class)groupsType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)syncEnabled;
-(void)dealloc;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSMutableArray *)groups;
-(BOOL)hasTimestamp;
-(unsigned long long)hash;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)setHasSyncEnabled:(BOOL)arg1 ;
-(BOOL)hasSyncEnabled;
-(unsigned)deleteType;
-(void)setDeleteType:(unsigned)arg1 ;
-(void)setHasDeleteType:(BOOL)arg1 ;
-(BOOL)hasDeleteType;
-(void)addGroups:(id)arg1 ;
-(unsigned long long)groupsCount;
-(void)clearGroups;
-(id)groupsAtIndex:(unsigned long long)arg1 ;
@end

