/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSProgress, PLPhotoLibraryBundle, PLPhotoLibrary, PLDeferredPhotoFinalizer, NSObject;

@interface PLCameraProcessingAdjustmentService : NSObject {

	os_unfair_lock_s _lock;
	Aq _cancellationGenerationCounter;
	NSProgress* _currentProgress;
	PLPhotoLibraryBundle* _libraryBundle;
	PLPhotoLibrary* _photoLibrary;
	PLDeferredPhotoFinalizer* _deferredPhotoFinalizer;
	NSObject*<OS_dispatch_queue> _serializationQueue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serializationQueue;              //@synthesize serializationQueue=_serializationQueue - In the implementation block
-(id)photoLibrary;
-(id)enqueueCameraProcessingAdjustmentRequestForAssetUUID:(id)arg1 imageConversionClient:(id)arg2 videoConversionClient:(id)arg3 isOnDemand:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(NSObject*<OS_dispatch_queue>)serializationQueue;
-(id)initWithLibraryBundle:(id)arg1 ;
-(id)deferredPhotoFinalizer;
@end
