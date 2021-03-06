/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PDSAgent.framework/PDSAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PDSEntryStoreDelegate, PDSCDCache;
@interface PDSEntryStore : NSObject {

	id<PDSEntryStoreDelegate> _delegate;
	id<PDSCDCache> _cache;

}

@property (nonatomic,retain) id<PDSCDCache> cache;                                   //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) id<PDSEntryStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setCache:(id<PDSCDCache>)arg1 ;
-(id<PDSCDCache>)cache;
-(BOOL)_permitTransitionFromState:(unsigned char)arg1 toState:(unsigned char)arg2 ;
-(id)initWithCache:(id)arg1 ;
-(BOOL)hasActiveEntries;
-(id)activeUsersWithClientID:(id)arg1 ;
-(BOOL)deleteEntry:(id)arg1 withError:(id*)arg2 ;
-(id)usersWithClientID:(id)arg1 ;
-(BOOL)updateAllEntriesWithState:(unsigned char)arg1 toState:(unsigned char)arg2 withError:(id*)arg3 ;
-(id)activeUsers;
-(BOOL)storeEntry:(id)arg1 withError:(id*)arg2 ;
-(id)entriesForUser:(id)arg1 ;
-(void)setDelegate:(id<PDSEntryStoreDelegate>)arg1 ;
-(BOOL)updateEntryState:(unsigned char)arg1 forUser:(id)arg2 clientID:(id)arg3 withError:(id*)arg4 ;
-(id)entriesForUser:(id)arg1 withClientID:(id)arg2 ;
-(id)entriesWithClientID:(id)arg1 ;
-(id<PDSEntryStoreDelegate>)delegate;
-(id)users;
-(id)entries;
-(BOOL)storeEntries:(id)arg1 deleteEntries:(id)arg2 withError:(id*)arg3 ;
-(BOOL)hasPendingEntries;
@end

