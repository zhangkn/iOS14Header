/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CHSynchronizedLoggable.h>

@class NSMutableDictionary;

@interface CHSharedAddressBook : CHSynchronizedLoggable {

	NSMutableDictionary* _addressBookCache;

}

@property (retain) NSMutableDictionary * addressBookCache;              //@synthesize addressBookCache=_addressBookCache - In the implementation block
+(id)get;
-(void)dealloc;
-(unsigned long long)cachedCount;
-(id)init;
-(void)insertAddressBookInfoDictionaryIntoCache:(id)arg1 ;
-(id)fetchAddressBookInfoFromCacheForKey:(id)arg1 ;
-(void)insertAddressBookInfoIntoCache:(id)arg1 forKey:(id)arg2 ;
-(void)revertAddressBook:(id)arg1 ;
-(void)registerForContactsNotifications;
-(NSMutableDictionary *)addressBookCache;
-(void)cleanUpAddressBookCache_sync;
-(void)sendABChangedNotificationSyncWithUserInfo:(id)arg1 ;
-(void)setAddressBookCache:(NSMutableDictionary *)arg1 ;
-(id)description;
@end

