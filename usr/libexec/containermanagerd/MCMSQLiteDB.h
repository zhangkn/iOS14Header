//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface MCMSQLiteDB : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
}

+ (struct sqlite3 *)openDBWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100078a38
- (void).cxx_destruct;	// IMP=0x0000000100078a2c
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (_Bool)deleteAllAdvanceCopiesOfCodeSigningEntriesWithError:(id *)arg1;	// IMP=0x0000000100078524
- (id)parentIdentifierForChildIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100077fbc
- (id)childIdentifiersForParentIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000779c4
- (id)identifiersWithError:(id *)arg1;	// IMP=0x0000000100077474
- (id)enumerateIdentifiersAndCodeSigningInfoUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100076e04
- (_Bool)invalidateCodeSigningForIdentifierAndAllChildren:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000766d4
- (_Bool)invalidateCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000765d4
- (id)codeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100076230
- (_Bool)deleteCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100076160
- (_Bool)addCodeSigningEntry:(id)arg1 withIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100075c28
- (id)_selectCodeSigningEntryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000757ac
- (id)_codeSigningEntryFromStatementRow:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x0000000100075474
- (_Bool)_deleteCodeSigningWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100075398
- (_Bool)_insertCodeSigningData:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100074d64
- (_Bool)_insertCodeSigningInfo:(id)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100074b70
- (_Bool)_performInsertOrUpdateQuery:(const char *)arg1 withCodeSigningEntry:(id)arg2 forIdentifier:(id)arg3 isUpdate:(_Bool)arg4 error:(id *)arg5;	// IMP=0x0000000100074328
- (_Bool)_insertChildIdentifier:(id)arg1 forParentIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000010007421c
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100074208
- (_Bool)_performSingleParameterQuery:(const char *)arg1 withTextInput:(id)arg2 expectedChanges:(int)arg3 error:(id *)arg4;	// IMP=0x00000001000741f0
- (_Bool)_performTwoParameterQuery:(const char *)arg1 withTextInputOne:(id)arg2 andTextInputTwo:(id)arg3 expectedChanges:(int)arg4 error:(id *)arg5;	// IMP=0x0000000100073c34
- (void)closeDB;	// IMP=0x0000000100073a44
- (_Bool)_sqliteExec:(id)arg1 error:(id *)arg2;	// IMP=0x000000010007390c
- (void)dealloc;	// IMP=0x00000001000738c0
- (id)initWithParentDirectoryURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000737a4

@end

