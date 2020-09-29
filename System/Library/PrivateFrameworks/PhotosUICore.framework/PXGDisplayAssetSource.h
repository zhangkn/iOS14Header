/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:57 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXGDisplayAssetSource <PXGLayoutContentSource>
@required
-(id)displayAssetRequestObserverForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
-(id)displayAssetFetchResultForSpritesInRange:(PXGSpriteIndexRange)arg1 inLayout:(id)arg2;
-(unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
-(CGSize*)minSpriteSizeForPresentationStyle:(unsigned long long)arg1;
-(unsigned long long)supportedDisplayAssetPresentationStylesInLayout:(id)arg1;

@end
