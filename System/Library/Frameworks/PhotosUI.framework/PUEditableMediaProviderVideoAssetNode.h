/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:49 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXRunNode.h>
#import <libobjc.A.dylib/PUVideoAssetNode.h>

@protocol PUEditableAsset;
@class AVAsset, PUEditableMediaProvider, NSArray, NSString;

@interface PUEditableMediaProviderVideoAssetNode : PXRunNode <PUVideoAssetNode> {

	int _requestID;
	AVAsset* _videoAsset;
	long long _version;
	id<PUEditableAsset> _asset;
	PUEditableMediaProvider* _mediaProvider;

}

@property (nonatomic,readonly) long long version;                                    //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) id<PUEditableAsset> asset;                            //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PUEditableMediaProvider * mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) AVAsset * videoAsset;                                 //@synthesize videoAsset=_videoAsset - In the implementation block
@property (readonly) unsigned long long state; 
@property (getter=isWaiting,readonly) BOOL waiting; 
@property (getter=isRunning,readonly) BOOL running; 
@property (getter=isComplete,readonly) BOOL complete; 
@property (getter=isCanceled,readonly) BOOL canceled; 
@property (assign,nonatomic,__weak) id<PXRunNodeDelegate> delegate; 
@property (nonatomic,copy,readonly) NSArray * dependencies; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)version;
-(void)run;
-(id<PUEditableAsset>)asset;
-(PUEditableMediaProvider *)mediaProvider;
-(id)initWithAsset:(id)arg1 mediaProvider:(id)arg2 version:(long long)arg3 ;
-(void)_handleDidLoadVideo:(id)arg1 info:(id)arg2 ;
-(AVAsset *)videoAsset;
@end
