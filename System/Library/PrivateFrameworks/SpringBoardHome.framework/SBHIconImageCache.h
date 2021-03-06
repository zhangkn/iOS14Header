/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:13 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBIconObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSHashTable, UIImage, NSString, CPMemoryPool;

@interface SBHIconImageCache : NSObject <SBIconObserver, BSDescriptionProviding> {

	NSMutableDictionary* _images;
	NSMutableDictionary* _unmaskedImages;
	NSHashTable* _failedIcons;
	UIImage* _genericImage;
	UIImage* _overlayImage;
	UIImage* _unmaskedOverlayImage;
	NSHashTable* _observedIcons;
	NSHashTable* _observers;
	NSString* _name;
	unsigned long long _poolingBypassCount;
	CPMemoryPool* _iconImagesMemoryPool;
	SBIconImageInfo _iconImageInfo;

}

@property (nonatomic,readonly) CPMemoryPool * iconImagesMemoryPool;                          //@synthesize iconImagesMemoryPool=_iconImagesMemoryPool - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) SBIconImageInfo iconImageInfo;                                //@synthesize iconImageInfo=_iconImageInfo - In the implementation block
@property (nonatomic,readonly) UIImage * genericImage; 
@property (nonatomic,readonly) UIImage * overlayImage; 
@property (nonatomic,readonly) UIImage * unmaskedOverlayImage; 
@property (assign,nonatomic) unsigned long long poolingBypassCount;                          //@synthesize poolingBypassCount=_poolingBypassCount - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfCachedImages; 
@property (nonatomic,readonly) unsigned long long numberOfUnmaskedCachedImages; 
@property (nonatomic,readonly) unsigned long long numberOfCacheHits; 
@property (nonatomic,readonly) unsigned long long numberOfUnmaskedCacheHits; 
@property (nonatomic,readonly) unsigned long long numberOfCacheMisses; 
@property (nonatomic,readonly) unsigned long long numberOfUnmaskedCacheMisses; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)genericImageWithInfo:(SBIconImageInfo)arg1 ;
+(id)overlayImageWithInfo:(SBIconImageInfo)arg1 ;
+(id)unmaskedOverlayImageWithInfo:(SBIconImageInfo)arg1 ;
+(BOOL)supportsMemoryPooling;
+(id)_backgroundQueue;
-(void)purgeCachedImagesForIcons:(id)arg1 ;
-(unsigned long long)numberOfCacheHits;
-(unsigned long long)numberOfCachedImages;
-(unsigned long long)numberOfCacheMisses;
-(UIImage *)overlayImage;
-(id)memoryMappedIconImageForIconImage:(id)arg1 ;
-(UIImage *)genericImage;
-(id)imageForIcon:(id)arg1 ;
-(void)purgeAllCachedImages;
-(void)cacheImage:(id)arg1 forIcon:(id)arg2 ;
-(CPMemoryPool *)iconImagesMemoryPool;
-(id)cachedUnmaskedImageForIcon:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(SBIconImageInfo)iconImageInfo;
-(void)cacheImagesForIcons:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)iconImageDidUpdate:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(UIImage *)unmaskedOverlayImage;
-(id)memoryMappedIconImageOfSize:(CGSize)arg1 scale:(double)arg2 withDrawing:(/*^block*/id)arg3 ;
-(void)notifyObserversOfUpdateForIcon:(id)arg1 ;
-(id)unmaskedImageForIcon:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)beginObservingIconIfNecessary:(id)arg1 ;
-(void)endObservingIcon:(id)arg1 ;
-(void)endObservingAllIcons;
-(void)cacheImageForIcon:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)cachedImageForIcon:(id)arg1 ;
-(unsigned long long)poolingBypassCount;
-(unsigned long long)numberOfUnmaskedCachedImages;
-(void)cacheUnmaskedImagesForIcons:(id)arg1 ;
-(BOOL)_canPoolImage;
-(void)cacheImagesForIcons:(id)arg1 ;
-(id)_iconImageOfSize:(CGSize)arg1 scale:(double)arg2 failGracefully:(BOOL)arg3 drawing:(/*^block*/id)arg4 ;
-(unsigned long long)numberOfUnmaskedCacheMisses;
-(id)pooledIconImageForMappedIconImage:(id)arg1 ;
-(id)_pooledIconImageForIconImage:(id)arg1 allowingOptOut:(BOOL)arg2 ;
-(id)succinctDescriptionBuilder;
-(unsigned long long)numberOfUnmaskedCacheHits;
-(id)initWithName:(id)arg1 iconImageInfo:(SBIconImageInfo)arg2 ;
-(NSString *)name;
-(id)succinctDescription;
-(id)_cacheKeyForIcon:(id)arg1 ;
-(void)setPoolingBypassCount:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)realImageForIcon:(id)arg1 ;
@end

