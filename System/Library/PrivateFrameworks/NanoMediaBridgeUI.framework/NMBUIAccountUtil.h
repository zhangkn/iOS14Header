/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSManager, ACAccountStore, ACAccount;

@interface NMBUIAccountUtil : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSSManager* _nssManager;
	ACAccountStore* _accountStore;
	ACAccount* _itunesAccount;
	ACAccount* _idmsAccount;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSSManager * nssManager;                             //@synthesize nssManager=_nssManager - In the implementation block
@property (nonatomic,retain) ACAccountStore * accountStore;                       //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,retain) ACAccount * itunesAccount;                           //@synthesize itunesAccount=_itunesAccount - In the implementation block
@property (nonatomic,retain) ACAccount * idmsAccount;                             //@synthesize idmsAccount=_idmsAccount - In the implementation block
+(id)sharedInstance;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
-(void)dealloc;
-(ACAccountStore *)accountStore;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id)init;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)setNssManager:(NSSManager *)arg1 ;
-(NSSManager *)nssManager;
-(void)_sendITunesAccountToGizmoIfNecessary;
-(ACAccount *)itunesAccount;
-(id)_idmsAccountForCurrentAccount;
-(BOOL)_doesAccount:(id)arg1 matchAccountDict:(id)arg2 ;
-(void)_signGizmoIntoITunesAccount;
-(BOOL)_doesAccount:(id)arg1 matchAccount:(id)arg2 ;
-(id)_itunesAccountNoAuth;
-(id)_signInOptions;
-(void)_attemptSignIn;
-(BOOL)_doesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 matchAccountWithAltDSID:(id)arg4 DSID:(id)arg5 username:(id)arg6 ;
-(void)sendITunesAccountToGizmoIfNecessary;
-(BOOL)hasITunesAccount;
-(ACAccount *)idmsAccount;
-(void)setItunesAccount:(ACAccount *)arg1 ;
-(void)setIdmsAccount:(ACAccount *)arg1 ;
@end

