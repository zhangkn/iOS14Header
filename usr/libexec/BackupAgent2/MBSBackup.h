//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import "NSCopying-Protocol.h"

@class MBSBackupAttributes, NSData, NSMutableArray;

@interface MBSBackup : PBCodable <NSCopying>
{
    unsigned long long _keysLastModified;	// 8 = 0x8
    unsigned long long _quotaUsed;	// 16 = 0x10
    MBSBackupAttributes *_attributes;	// 24 = 0x18
    NSData *_backupUDID;	// 32 = 0x20
    NSMutableArray *_snapshots;	// 40 = 0x28
    struct {
        unsigned int keysLastModified:1;
        unsigned int quotaUsed:1;
    } _has;	// 48 = 0x30
}

@property(nonatomic) unsigned long long keysLastModified; // @synthesize keysLastModified=_keysLastModified;
@property(retain, nonatomic) MBSBackupAttributes *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSMutableArray *snapshots; // @synthesize snapshots=_snapshots;
@property(nonatomic) unsigned long long quotaUsed; // @synthesize quotaUsed=_quotaUsed;
@property(retain, nonatomic) NSData *backupUDID; // @synthesize backupUDID=_backupUDID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000010000f770
- (unsigned long long)hash;	// IMP=0x000000010000f6a0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010000f560
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000f350
- (void)copyTo:(id)arg1;	// IMP=0x000000010000f20c
- (void)writeTo:(id)arg1;	// IMP=0x000000010000f074
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000010000f06c
- (id)dictionaryRepresentation;	// IMP=0x000000010000e9dc
- (id)description;	// IMP=0x000000010000e95c
@property(nonatomic) _Bool hasKeysLastModified;
@property(readonly, nonatomic) _Bool hasAttributes;
- (id)snapshotAtIndex:(unsigned long long)arg1;	// IMP=0x000000010000e8d8
- (unsigned long long)snapshotsCount;	// IMP=0x000000010000e8c0
- (void)addSnapshot:(id)arg1;	// IMP=0x000000010000e86c
- (void)clearSnapshots;	// IMP=0x000000010000e854
@property(nonatomic) _Bool hasQuotaUsed;
@property(readonly, nonatomic) _Bool hasBackupUDID;
- (void)dealloc;	// IMP=0x000000010000e764

@end

