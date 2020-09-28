/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration {

	BOOL _collectionType;
	BOOL _hasNonPurgeableAsset;
	BOOL _storeRedownloadable;
	long long _managedStatus;

}

@property (assign,getter=isCollectionType,nonatomic) BOOL collectionType;                        //@synthesize collectionType=_collectionType - In the implementation block
@property (assign,nonatomic) long long managedStatus;                                            //@synthesize managedStatus=_managedStatus - In the implementation block
@property (assign,nonatomic) BOOL hasNonPurgeableAsset;                                          //@synthesize hasNonPurgeableAsset=_hasNonPurgeableAsset - In the implementation block
@property (assign,getter=isStoreRedownloadable,nonatomic) BOOL storeRedownloadable;              //@synthesize storeRedownloadable=_storeRedownloadable - In the implementation block
-(long long)managedStatus;
-(void)setStoreRedownloadable:(BOOL)arg1 ;
-(BOOL)isCollectionType;
-(BOOL)hasNonPurgeableAsset;
-(void)setManagedStatus:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasNonPurgeableAsset:(BOOL)arg1 ;
-(void)setCollectionType:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)isStoreRedownloadable;
@end
