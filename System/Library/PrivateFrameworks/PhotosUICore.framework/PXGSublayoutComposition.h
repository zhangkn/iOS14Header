/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:07 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PXGCompositeLayout, PXGSublayoutDataStore, PXGLayout;

@interface PXGSublayoutComposition : NSObject {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	long long _lastSublayoutDataStoreVersion;
	PXGCompositeLayout* _compositeLayout;
	PXGSublayoutDataStore* _sublayoutDataStore;
	CGSize _referenceSize;

}

@property (assign,nonatomic) long long lastSublayoutDataStoreVersion;                  //@synthesize lastSublayoutDataStoreVersion=_lastSublayoutDataStoreVersion - In the implementation block
@property (assign,nonatomic,__weak) PXGCompositeLayout * compositeLayout;              //@synthesize compositeLayout=_compositeLayout - In the implementation block
@property (nonatomic,retain) PXGSublayoutDataStore * sublayoutDataStore;               //@synthesize sublayoutDataStore=_sublayoutDataStore - In the implementation block
@property (nonatomic,readonly) CGSize referenceSize;                                   //@synthesize referenceSize=_referenceSize - In the implementation block
@property (nonatomic,readonly) PXGLayout * layout; 
@property (nonatomic,readonly) long long numberOfSublayouts; 
@property (nonatomic,readonly) SCD_Struct_PX89* sublayoutGeometries; 
@property (nonatomic,readonly) CGRect contentBounds; 
-(void)setReferenceSize:(CGSize)arg1 ;
-(void)referenceSizeDidChange;
-(CGSize)referenceSize;
-(UIEdgeInsets)sublayoutInsetsForStylableType:(long long)arg1 ;
-(void)updateSublayoutGeometriesFromAnchorSublayoutIndex:(long long)arg1 usingSublayoutUpdateBlock:(/*^block*/id)arg2 ;
-(long long)numberOfSublayouts;
-(PXGSublayoutDataStore *)sublayoutDataStore;
-(void)updateEstimate;
-(void)setLastSublayoutDataStoreVersion:(long long)arg1 ;
-(SCD_Struct_PX89*)sublayoutGeometries;
-(void)enumerateSublayoutProvidersForRange:(NSRange)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)contentBounds;
-(void)invalidateSublayoutAttributes;
-(void)invalidateSublayoutContentSizes;
-(void)invalidateEstimatedSublayoutGeometries;
-(long long)anchorSublayoutIndexForAnchoredContentEdges:(unsigned long long)arg1 ;
-(long long)lastSublayoutDataStoreVersion;
-(PXGCompositeLayout *)compositeLayout;
-(void)setCompositeLayout:(PXGCompositeLayout *)arg1 ;
-(void)setSublayoutDataStore:(PXGSublayoutDataStore *)arg1 ;
-(PXGLayout *)layout;
-(void)updateEstimatedSublayoutGeometries;
-(void)updateSublayoutAttributes;
@end

