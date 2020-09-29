/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:06 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXGSpriteTexture.h>
#import <libobjc.A.dylib/PXGMutableSpriteTexture.h>

@protocol OS_dispatch_queue;
@class NSIndexSet, NSMutableIndexSet, NSObject, NSString;

@interface PXGBaseTexture : NSObject <PXGSpriteTexture, PXGMutableSpriteTexture> {

	NSMutableIndexSet* _spriteIndexes;
	NSObject*<OS_dispatch_queue> _syncQueue;
	SCD_Struct_PX113* _syncQueue_pendingImageRequestInfo;
	unsigned long long _syncQueue_pendingImageRequestInfoCount;
	unsigned long long _syncQueue_pendingImageRequestInfoCapacity;

}

@property (nonatomic,readonly) unsigned spriteCount; 
@property (nonatomic,readonly) NSIndexSet * spriteIndexes; 
@property (nonatomic,readonly) long long estimatedByteSize; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) CGImageRef imageRepresentation; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)estimatedByteSize;
-(BOOL)isOpaque;
-(CGImageRef)imageRepresentation;
-(void)applyChangeDetails:(id)arg1 ;
-(int)presentationType;
-(NSIndexSet *)spriteIndexes;
-(void)getSpriteIndexes:(unsigned*)arg1 maxSpriteCount:(unsigned)arg2 ;
-(void)removeSpriteIndex:(unsigned)arg1 ;
-(unsigned)spriteCount;
-(BOOL)containsSpriteIndex:(unsigned)arg1 ;
-(CGSize)pixelSize;
-(void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned)arg2 ;
-(void)dealloc;
-(void)_syncQueue_resizeStorageIfNeeded;
-(void)processPendingTextureRequestIDsWithHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)_addSpriteIndex:(unsigned)arg1 ;
-(void)addSpriteIndexRange:(NSRange)arg1 ;
-(void)removeAllSpriteIndexes;
-(void)enumerateSpriteIndexes:(/*^block*/id)arg1 ;
-(NSString *)description;
@end
