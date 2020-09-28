/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetInspectorLoader.h>

@protocol OS_dispatch_queue;
@class AVWeakReference, AVAssetInspector, AVDispatchOnce, NSObject, NSMutableArray, NSURL;

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader {

	OpaqueFigAssetRef _figAsset;
	int _figAssetCreationStatus;
	AVWeakReference* _weakReferenceToAsset;
	AVAssetInspector* _assetInspector;
	AVDispatchOnce* _assetInspectorOnce;
	NSObject*<OS_dispatch_queue> _completionHandlerQueue;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _loadingBatches;
	BOOL _loadingCanceled;
	BOOL _registeredForFigAssetNotifications;
	long long _fragmentMinderAssociationCount;
	NSURL* _URL;

}
+(id)_figAssetTrackMediaSelectionPropertiesArray;
+(id)_figAssetTrackPropertiesForKeys;
+(id)_figAssetMediaSelectionPropertiesArray;
+(void)_mapAssetKeys:(id)arg1 toFigAssetPropertySet:(id)arg2 figAssetTrackPropertySet:(id)arg3 callerName:(id)arg4 ;
+(id)_figAssetPropertiesForKeys;
-(id)lyrics;
-(id)_loadingBatches;
-(void)_invokeCompletionHandlerForLoadingBatches:(id)arg1 ;
-(BOOL)isPlayable;
-(Class)_classForTrackInspectors;
-(long long)_loadStatusForProperty:(id)arg1 figAsset:(OpaqueFigAssetRef)arg2 error:(id*)arg3 ;
-(long long)firstFragmentSequenceNumber;
-(id)asset;
-(id)initWithURL:(id)arg1 figAssetCreationFlags:(unsigned long long)arg2 figAssetCreationOptions:(id)arg3 avAssetInitializationOptions:(id)arg4 forAsset:(id)arg5 ;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(id)resolvedURL;
-(SCD_Struct_AV6)duration;
-(void)_addFigAssetNotifications;
-(void)dealloc;
-(id)URL;
-(unsigned long long)downloadToken;
-(BOOL)isAssociatedWithFragmentMinder;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 keysForCollectionKeys:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(OpaqueFigAssetRef)_figAsset;
-(long long)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(id)_completionHandlerQueue;
-(void)_removeFigAssetNotifications;
-(void)_setFragmentMindingInterval:(double)arg1 ;
-(double)_fragmentMindingInterval;
-(id)figChapterGroupInfo;
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 forAsset:(id)arg2 ;
-(long long)fragmentCount;
-(void)cancelLoading;
-(BOOL)isExportable;
-(void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg1 ;
-(id)assetInspector;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(OpaqueFigFormatReaderRef)_formatReader;
-(BOOL)isReadable;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isStreaming;
-(long long)_statusOfValueForKey:(id)arg1 error:(id*)arg2 firstNonLoadedDependencyKey:(id*)arg3 ;
-(BOOL)isComposable;
-(BOOL)isCompatibleWithSavedPhotosAlbum;
-(id)originalNetworkContentURL;
-(BOOL)hasProtectedContent;
-(id)figChapters;
@end
