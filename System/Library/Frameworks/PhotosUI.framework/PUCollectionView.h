/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:48 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol PUCollectionViewReorderDelegate, PUCollectionViewSelectionDelegate;
@class UILongPressGestureRecognizer, NSIndexPath, UIView, PXUIAutoScroller, _UIDragSnappingFeedbackGenerator, NSString;

@interface PUCollectionView : UICollectionView <UIGestureRecognizerDelegate> {

	UILongPressGestureRecognizer* _dragGestureRecognizer;
	NSIndexPath* _dragSourceIndexPath;
	NSIndexPath* _dragTargetIndexPath;
	UIView* _draggedView;
	CGPoint _draggedViewCenterOffset;
	PXUIAutoScroller* _autoScroller;
	BOOL _shouldWorkaround34630932;
	id<PUCollectionViewReorderDelegate> _reorderDelegate;
	id<PUCollectionViewSelectionDelegate> _selectionDelegate;
	_UIDragSnappingFeedbackGenerator* __feedbackDragBehavior;

}

@property (nonatomic,readonly) _UIDragSnappingFeedbackGenerator * _feedbackDragBehavior;                  //@synthesize _feedbackDragBehavior=__feedbackDragBehavior - In the implementation block
@property (assign,nonatomic,__weak) id<PUCollectionViewReorderDelegate> reorderDelegate;                  //@synthesize reorderDelegate=_reorderDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<PUCollectionViewSelectionDelegate> selectionDelegate;              //@synthesize selectionDelegate=_selectionDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_reuseKeyForSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)_applyAutomaticAdjustedContentOffset:(CGPoint)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)didScrollToInitialPosition;
-(void)_handleDrag:(id)arg1 ;
-(id)_reorderableLayout;
-(void)_updateDragUsingIndexPathUpdateBlock:(/*^block*/id)arg1 ;
-(id<PUCollectionViewReorderDelegate>)reorderDelegate;
-(id<PUCollectionViewSelectionDelegate>)selectionDelegate;
-(void)visiblyInsertItemAtIndexPath:(id)arg1 modelUpdate:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setSelectionDelegate:(id<PUCollectionViewSelectionDelegate>)arg1 ;
-(_UIDragSnappingFeedbackGenerator *)_feedbackDragBehavior;
-(id)indexPathsForSelectedItems;
-(void)setReorderDelegate:(id<PUCollectionViewReorderDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)adjustedContentInsetDidChange;
-(void)insertItemsAtIndexPaths:(id)arg1 ;
-(void)deleteItemsAtIndexPaths:(id)arg1 ;
-(void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
@end
