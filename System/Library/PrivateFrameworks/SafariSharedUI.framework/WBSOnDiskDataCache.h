/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSDataCache.h>

@protocol OS_dispatch_queue, WBSDataCacheDelegate;
@class NSObject, NSCache, NSMutableSet, NSMutableDictionary, WBSCoalescedAsynchronousWriter, NSURL, NSString;

@interface WBSOnDiskDataCache : NSObject <WBSDataCache> {

	NSObject*<OS_dispatch_queue> _diskAccessQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSCache* _entriesForKeyStringsCache;
	NSMutableSet* _pendingKeyStringRequests;
	NSMutableSet* _missingEntryKeyStrings;
	NSMutableDictionary* _cacheSettings;
	WBSCoalescedAsynchronousWriter* _cacheSettingsWriter;
	BOOL _terminating;
	BOOL _isInMemoryCacheEnabled;
	id<WBSDataCacheDelegate> _dataCacheDelegate;
	NSURL* _cacheDirectoryURL;

}

@property (assign,nonatomic) BOOL isInMemoryCacheEnabled;                                    //@synthesize isInMemoryCacheEnabled=_isInMemoryCacheEnabled - In the implementation block
@property (nonatomic,readonly) NSURL * cacheDirectoryURL;                                    //@synthesize cacheDirectoryURL=_cacheDirectoryURL - In the implementation block
@property (getter=isTerminating,nonatomic,readonly) BOOL terminating;                        //@synthesize terminating=_terminating - In the implementation block
@property (assign,nonatomic,__weak) id<WBSDataCacheDelegate> dataCacheDelegate;              //@synthesize dataCacheDelegate=_dataCacheDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dispatchDiskAccessBlock:(/*^block*/id)arg1 ;
-(id)_fileLocationForKeyString:(id)arg1 ;
-(void)setEntry:(id)arg1 forKeyString:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_didFailToLoadEntryForKeyString:(id)arg1 error:(id)arg2 ;
-(id<WBSDataCacheDelegate>)dataCacheDelegate;
-(void)setUp;
-(id)_internalQueueName;
-(void)removeEntriesForKeyStringsNotIncludedIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_didLoadEntry:(id)arg1 forKeyString:(id)arg2 ;
-(BOOL)isInMemoryCacheEnabled;
-(void)reset;
-(void)setIsInMemoryCacheEnabled:(BOOL)arg1 ;
-(void)setSetting:(id)arg1 forKey:(id)arg2 ;
-(void)_notifyDidFinishSettingUp;
-(id)init;
-(id)_diskAccessQueueName;
-(void)_internalQueueDispatchSync:(/*^block*/id)arg1 ;
-(void)removeEntriesForKeyStrings:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(long long)entryStateForKeyString:(id)arg1 ;
-(id)requestEntryForKeyString:(id)arg1 ;
-(long long)_internalEntryStateForKeyString:(id)arg1 ;
-(id)initWithCacheDirectoryURL:(id)arg1 ;
-(void)setDataCacheDelegate:(id<WBSDataCacheDelegate>)arg1 ;
-(BOOL)isTerminating;
-(id)settingForKey:(id)arg1 ;
-(void)getEntryURLForKeyString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cacheSettingsFileURL;
-(void)_internalQueueDispatchAsync:(/*^block*/id)arg1 ;
-(void)savePendingChangesBeforeTearDown;
-(NSURL *)cacheDirectoryURL;
@end

