/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NRRegistry.h>

@class NSMutableDictionary, NRDeviceCollectionHistory;

@interface NRRegistryHistoryStore : NRRegistry {

	NSMutableDictionary* _diffIndexObservers;
	int _keyBagStatusChangedNotificationToken;
	NRDeviceCollectionHistory* _history;

}

@property (nonatomic,readonly) NRDeviceCollectionHistory * history; 
+(id)sharedInstance;
-(void)removeDiffIndexObserver:(id)arg1 ;
-(void)_notifyObserversSecurePropertiesAreAvailableWithCollection:(id)arg1 secureProperties:(id)arg2 ;
-(void)invalidate;
-(void)setCollection:(id)arg1 ;
-(id)collection;
-(id)addDiffIndexObserverWithWriteBlock:(/*^block*/id)arg1 ;
-(NRDeviceCollectionHistory *)history;
-(void)grabHistoryWithWriteBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithParameters:(id)arg1 ;
-(void)syncGrabHistoryWithWriteBlock:(/*^block*/id)arg1 ;
-(void)grabHistoryWithReadBlock:(/*^block*/id)arg1 ;
-(void)syncGrabHistoryWithReadBlock:(/*^block*/id)arg1 ;
-(void)_notifyDiffIndexObserversWithHistoryEntry:(id)arg1 deviceCollection:(id)arg2 secureProperties:(id)arg3 ;
@end

