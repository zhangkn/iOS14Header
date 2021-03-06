/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXAssetReference;

@interface _PXAssetsSceneAnchor : NSObject {

	PXAssetReference* _assetReference;
	double _distance;
	CGPoint _anchorOrigin;

}

@property (nonatomic,readonly) PXAssetReference * assetReference;              //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,readonly) CGPoint anchorOrigin;                           //@synthesize anchorOrigin=_anchorOrigin - In the implementation block
@property (nonatomic,readonly) double distance;                                //@synthesize distance=_distance - In the implementation block
-(CGPoint)anchorOrigin;
-(id)initWithAssetReference:(id)arg1 anchorOrigin:(CGPoint)arg2 distance:(double)arg3 ;
-(PXAssetReference *)assetReference;
-(double)distance;
@end

