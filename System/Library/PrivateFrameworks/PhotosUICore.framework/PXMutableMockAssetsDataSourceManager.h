/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXMutableMockAssetsDataSourceManager <NSObject>
@required
-(void)removeSectionAtIndex:(long long)arg1;
-(void)removeItemAtIndexPath:(id)arg1;
-(void)insertItemAtIndexPath:(id)arg1 assetProperties:(id)arg2;
-(void)markChangeAsReload;
-(void)changeItemAtIndexPath:(id)arg1 toAssetProperties:(id)arg2;
-(void)insertSectionAtIndex:(long long)arg1 count:(long long)arg2 assetProperties:(id)arg3 assetCollection:(id)arg4;
-(void)changeSectionAtIndex:(long long)arg1 toAssetCollection:(id)arg2;

@end

