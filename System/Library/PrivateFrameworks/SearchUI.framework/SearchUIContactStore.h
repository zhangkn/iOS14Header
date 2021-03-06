/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CNContactStore, NSCache, NSObject;

@interface SearchUIContactStore : NSObject {

	CNContactStore* _contactStore;
	NSCache* _contactCache;
	NSObject*<OS_dispatch_queue> _contactFetchingQueue;

}

@property (nonatomic,retain) NSCache * contactCache;                                         //@synthesize contactCache=_contactCache - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> contactFetchingQueue;              //@synthesize contactFetchingQueue=_contactFetchingQueue - In the implementation block
+(id)contactForPhoneNumber:(id)arg1 email:(id)arg2 ;
+(id)sharedStore;
+(id)placeholderContact;
+(id)resultTableContactDescriptorKeys;
+(id)viewControllerDescriptorKeys;
-(void)setContactCache:(NSCache *)arg1 ;
-(id)cachedContactForIdentifier:(id)arg1 ;
-(CNContactStore *)contactStore;
-(NSCache *)contactCache;
-(id)contactForIdentifier:(id)arg1 ;
-(id)init;
-(void)setContactFetchingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)cachedContactsForIdentifiers:(id)arg1 ;
-(void)fetchContactsForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)contactFetchingQueue;
-(id)contactsForIdentifiers:(id)arg1 withKeys:(id)arg2 ;
-(void)fetchContactForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
@end

