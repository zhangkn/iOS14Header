/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSArray, NoteContext, ACAccountStore, NSObject, NSLock;

@interface AccountUtilities : NSObject {

	NSArray* _accountIDsEnabledForNotes;
	NoteContext* _noteContext;
	ACAccountStore* _accountStore;
	NSObject*<OS_dispatch_group> _backgroundDispatchGroup;
	NSLock* _updateAccountInfosLock;

}

@property (nonatomic,retain) ACAccountStore * accountStore;                                     //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> backgroundDispatchGroup;              //@synthesize backgroundDispatchGroup=_backgroundDispatchGroup - In the implementation block
@property (retain) NSLock * updateAccountInfosLock;                                             //@synthesize updateAccountInfosLock=_updateAccountInfosLock - In the implementation block
+(id)sharedAccountUtilities;
-(id)accountIDsEnabledForNotes;
-(void)setBackgroundDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(NSObject*<OS_dispatch_group>)backgroundDispatchGroup;
-(void)dealloc;
-(void)startKeepingAccountInfosUpToDate;
-(id)accountsEnabledForNotes;
-(ACAccountStore *)accountStore;
-(NSLock *)updateAccountInfosLock;
-(id)init;
-(id)defaultStoreSyncIdWithDesiredSyncId:(id)arg1 ;
-(id)localAccountDisplayName;
-(id)freshContext;
-(BOOL)localNotesExist;
-(void)setUpdateAccountInfosLock:(NSLock *)arg1 ;
-(void)updateAccountInfos;
-(void)_accountStoreDidChange:(id)arg1 ;
@end

