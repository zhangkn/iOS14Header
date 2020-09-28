/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SSLRUCache, NSObject;

@interface ISURLBagCache : NSObject {

	SSLRUCache* _cachedBags;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}
+(id)URLWithBagContext:(id)arg1 ;
+(id)sharedCache;
-(id)URLBagForContext:(id)arg1 withOptions:(long long)arg2 ;
-(void)dealloc;
-(id)URLBagForContext:(id)arg1 ;
-(id)init;
-(id)_newRequestWithURLBagContext:(id)arg1 ;
-(void)_storeFrontChangedNotification:(id)arg1 ;
-(void)addURLBag:(id)arg1 ;
-(void)invalidateAllURLBags;
-(void)invalidateURLBagForContext:(id)arg1 ;
@end
