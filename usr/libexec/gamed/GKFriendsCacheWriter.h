//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x000000010012b0dc
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010012b910
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x000000010012b6f0
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x000000010012b648
- (id)friendRelationshipUpdateSQL;	// IMP=0x000000010012b5ec
- (id)friendRelationshipInsertSQL;	// IMP=0x000000010012b590
- (void)bindParametersForFriendPlayerStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;	// IMP=0x000000010012b3dc
- (id)friendPlayerUpdateSQL;	// IMP=0x000000010012b338
- (id)friendPlayerInsertSQL;	// IMP=0x000000010012b294
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;	// IMP=0x000000010012b248
- (id)listExpirationDateUpdateSQL;	// IMP=0x000000010012b200
- (id)listExpirationDateInsertSQL;	// IMP=0x000000010012b1b8
- (void)dealloc;	// IMP=0x000000010012b170
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x000000010012b110

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
