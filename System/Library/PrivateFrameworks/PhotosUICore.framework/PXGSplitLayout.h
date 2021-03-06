/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:56 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGLayout.h>

@class PXGLayout;

@interface PXGSplitLayout : PXGLayout {

	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _updateFlags;
	struct {
		unsigned long long needsUpdate;
		unsigned long long updated;
		BOOL isPerformingUpdate;
	}  _additionalUpdateFlags;
	BOOL _settingSublayouts;
	BOOL _isUpdatingSublayouts;
	BOOL _isPerformingAdditionalUpdate;
	BOOL _floatingModesRespectSafeArea;
	BOOL _shouldExcludeTopAndBottomPaddingFromReferenceSize;
	PXGLayout* _firstSublayout;
	PXGLayout* _secondSublayout;
	long long _mode;
	double _interlayoutSpacing;
	UIEdgeInsets _padding;
	UIEdgeInsets _presentedPadding;

}

@property (nonatomic,readonly) long long firstSublayoutIndex; 
@property (nonatomic,readonly) long long secondSublayoutIndex; 
@property (nonatomic,retain) PXGLayout * firstSublayout;                                          //@synthesize firstSublayout=_firstSublayout - In the implementation block
@property (nonatomic,retain) PXGLayout * secondSublayout;                                         //@synthesize secondSublayout=_secondSublayout - In the implementation block
@property (assign,nonatomic) long long mode;                                                      //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL floatingModesRespectSafeArea;                                   //@synthesize floatingModesRespectSafeArea=_floatingModesRespectSafeArea - In the implementation block
@property (assign,nonatomic) double interlayoutSpacing;                                           //@synthesize interlayoutSpacing=_interlayoutSpacing - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                                //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL shouldExcludeTopAndBottomPaddingFromReferenceSize;              //@synthesize shouldExcludeTopAndBottomPaddingFromReferenceSize=_shouldExcludeTopAndBottomPaddingFromReferenceSize - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets presentedPadding;                                     //@synthesize presentedPadding=_presentedPadding - In the implementation block
-(void)sublayoutDidChangeContentSize:(id)arg1 ;
-(void)sublayoutNeedsUpdate:(id)arg1 ;
-(long long)mode;
-(void)referenceSizeDidChange;
-(void)sublayoutDidChangeLastBaseline:(id)arg1 ;
-(void)setMode:(long long)arg1 ;
-(void)userInterfaceDirectionDidChange;
-(void)viewEnvironmentDidChange;
-(void)removeSublayoutsInRange:(NSRange)arg1 ;
-(void)screenScaleDidChange;
-(void)didChangeSublayoutOrigins;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)visibleRectDidChange;
-(void)update;
-(void)scrollSpeedRegimeDidChange;
-(void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(void)_updateSublayoutGeometries;
-(void)setInterlayoutSpacing:(double)arg1 ;
-(void)safeAreaInsetsDidChange;
-(double)interlayoutSpacing;
-(void)setFirstSublayout:(PXGLayout *)arg1 ;
-(void)setSecondSublayout:(PXGLayout *)arg1 ;
-(void)_replaceSublayout:(id)arg1 withSublayout:(id)arg2 atIndex:(long long)arg3 ;
-(long long)firstSublayoutIndex;
-(long long)secondSublayoutIndex;
-(PXGLayout *)firstSublayout;
-(void)setShouldExcludeTopAndBottomPaddingFromReferenceSize:(BOOL)arg1 ;
-(void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3 ;
-(PXGLayout *)secondSublayout;
-(BOOL)floatingModesRespectSafeArea;
-(void)setFloatingModesRespectSafeArea:(BOOL)arg1 ;
-(BOOL)shouldExcludeTopAndBottomPaddingFromReferenceSize;
-(UIEdgeInsets)presentedPadding;
@end

