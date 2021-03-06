/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHRecyclableObject.h>

@class NSError, NSDictionary, NSMutableArray, NSString;

@interface PHImageCacheEntry : NSObject <PHRecyclableObject> {

	NSError* _error;
	CGImageRef _imageRef;
	NSDictionary* _additionalInfo;
	os_unfair_lock_s _lock;
	BOOL _isCancelled;
	NSMutableArray* _handlersWaitingOnResult;
	int _imageRequestIDForPopulatingCache;

}

@property (assign,nonatomic) int imageRequestIDForPopulatingCache;              //@synthesize imageRequestIDForPopulatingCache=_imageRequestIDForPopulatingCache - In the implementation block
@property (nonatomic,readonly) NSDictionary * additionalInfo;                   //@synthesize additionalInfo=_additionalInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(BOOL)hasImageRef;
-(void)_callWaiters:(id)arg1 wasCancelled:(BOOL)arg2 ;
-(void)prepareForReuse;
-(void)dealloc;
-(void)addNotifyHandler:(/*^block*/id)arg1 ;
-(CGImageRef)createImageRef;
-(id)init;
-(BOOL)isCancelled;
-(void)populateWithImageRef:(CGImageRef)arg1 additionalInfo:(id)arg2 error:(id)arg3 executeBeforeNotifyingWaitersBlock:(/*^block*/id)arg4 ;
-(void)setImageRequestIDForPopulatingCache:(int)arg1 ;
-(NSDictionary *)additionalInfo;
-(int)imageRequestIDForPopulatingCache;
@end

