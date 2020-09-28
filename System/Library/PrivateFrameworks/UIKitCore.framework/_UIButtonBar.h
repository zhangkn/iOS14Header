/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIPointerInteractionDelegate.h>
#import <UIKitCore/_UIBarButtonItemViewOwner.h>
#import <UIKitCore/_UIBarButtonItemGroupOwner.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UIButtonBarDelegate, _UIButtonBarAppearanceDelegate;
@class _UIButtonBarStackView, NSLayoutDimension, NSLayoutConstraint, UIView, _UIButtonBarLayoutMetrics, NSMutableArray, NSMapTable, NSArray, _UIBarButtonItemData, _UIPointerInteractionAssistant, _UIButtonBarButtonVisualProvider, UIBarButtonItem, NSString;

@interface _UIButtonBar : NSObject <UIPointerInteractionDelegate, _UIBarButtonItemViewOwner, _UIBarButtonItemGroupOwner, NSCoding> {

	_UIButtonBarStackView* _stackView;
	NSLayoutDimension* _flexibleSpaceEqualSizeAnchor;
	NSLayoutDimension* _minimumInterItemSpaceAnchor;
	NSLayoutConstraint* _minimumInterItemSpaceConstraint;
	NSLayoutDimension* _minimumInterGroupSpaceAnchor;
	NSLayoutConstraint* _minimumInterGroupSpaceConstraint;
	UIView* _centeredView;
	NSLayoutConstraint* _centeringConstraint;
	_UIButtonBarLayoutMetrics* _layoutMetrics;
	NSMutableArray* _groupLayouts;
	NSMutableArray* _effectiveLayout;
	NSMapTable* _groupLayoutMap;
	NSMutableArray* _layoutViews;
	NSMutableArray* _layoutGuides;
	NSMutableArray* _layoutActiveConstraints;
	NSMapTable* _senderActionMap;
	struct {
		unsigned isInLayoutReentrancyGuard : 1;
		unsigned needsAppearanceUpdate : 1;
		unsigned plainAppearanceChanged : 1;
		unsigned doneAppearanceChanged : 1;
		unsigned denyPointerInteractions : 1;
	}  _buttonBarFlags;
	BOOL _itemsInGroupUseSameSize;
	BOOL _compact;
	NSArray* _barButtonGroups;
	double _minimumInterItemSpace;
	id<_UIButtonBarDelegate> _delegate;
	double _minimumInterGroupSpace;
	/*^block*/id _defaultActionFilter;
	id<_UIButtonBarAppearanceDelegate> __appearanceDelegate;
	_UIBarButtonItemData* _plainItemAppearance;
	_UIBarButtonItemData* _doneItemAppearance;
	_UIPointerInteractionAssistant* _assistant;
	_UIButtonBarButtonVisualProvider* _visualProvider;

}

@property (assign,setter=_setItemsInGroupUseSameSize:,getter=_itemsInGroupUseSameSize,nonatomic) BOOL itemsInGroupUseSameSize;              //@synthesize itemsInGroupUseSameSize=_itemsInGroupUseSameSize - In the implementation block
@property (assign,setter=_setMinimumInterGroupSpace:,getter=_minimumInterGroupSpace,nonatomic) double minimumInterGroupSpace;               //@synthesize minimumInterGroupSpace=_minimumInterGroupSpace - In the implementation block
@property (nonatomic,copy) id defaultActionFilter;                                                                                          //@synthesize defaultActionFilter=_defaultActionFilter - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * ultimateFallbackItem; 
@property (assign,nonatomic,__weak) id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;                                                 //@synthesize _appearanceDelegate=__appearanceDelegate - In the implementation block
@property (nonatomic,retain) _UIBarButtonItemData * plainItemAppearance;                                                                    //@synthesize plainItemAppearance=_plainItemAppearance - In the implementation block
@property (nonatomic,retain) _UIBarButtonItemData * doneItemAppearance;                                                                     //@synthesize doneItemAppearance=_doneItemAppearance - In the implementation block
@property (nonatomic,readonly) UIView*<UIPointerInteractionDelegate> assistantView; 
@property (assign,nonatomic,__weak) _UIPointerInteractionAssistant * assistant;                                                             //@synthesize assistant=_assistant - In the implementation block
@property (getter=_layoutWidth,nonatomic,readonly) double layoutWidth; 
@property (assign,setter=_setCompact:,getter=_compact,nonatomic) BOOL compact;                                                              //@synthesize compact=_compact - In the implementation block
@property (nonatomic,copy) _UIButtonBarButtonVisualProvider * visualProvider;                                                               //@synthesize visualProvider=_visualProvider - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,copy) NSArray * barButtonGroups;                                                                                       //@synthesize barButtonGroups=_barButtonGroups - In the implementation block
@property (assign,nonatomic) double minimumInterItemSpace;                                                                                  //@synthesize minimumInterItemSpace=_minimumInterItemSpace - In the implementation block
@property (assign,nonatomic,__weak) id<_UIButtonBarDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL createsPopoverLayoutGuides; 
@property (assign,nonatomic) BOOL allowsViewWrappers; 
@property (assign,nonatomic) long long itemDistribution; 
@property (assign,nonatomic) UIEdgeInsets hitTestInsets; 
@property (assign,nonatomic) NSDirectionalEdgeInsets hitTestDirectionalInsets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(float)optionalConstraintsPriority;
-(void)_itemDidChangeWidth:(id)arg1 ;
-(_UIPointerInteractionAssistant *)assistant;
-(void)setAssistant:(_UIPointerInteractionAssistant *)arg1 ;
-(void)_appearanceChanged;
-(double)_minimumInterGroupSpace;
-(void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2 ;
-(void)_itemDidChangeSelectionState:(id)arg1 ;
-(void)_itemDidChangeEnabledState:(id)arg1 ;
-(void)_itemStandardViewNeedsUpdate:(id)arg1 ;
-(void)_itemDidChangeHiddenState:(id)arg1 ;
-(void)setPlainItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3 ;
-(void)setHitTestDirectionalInsets:(NSDirectionalEdgeInsets)arg1 ;
-(void)setDoneItemAppearance:(_UIBarButtonItemData *)arg1 ;
-(BOOL)_compact;
-(_UIBarButtonItemData *)plainItemAppearance;
-(void)_setNeedsVisualUpdateAndNotify:(BOOL)arg1 ;
-(_UIBarButtonItemData *)doneItemAppearance;
-(void)_layoutBar;
-(void)pointerInteraction:(id)arg1 willEnterRegion:(id)arg2 animator:(id)arg3 ;
-(void)_updateForTraitCollectionChange:(id)arg1 ;
-(void)_setCompact:(BOOL)arg1 ;
-(void)setItemDistribution:(long long)arg1 ;
-(id)defaultActionFilter;
-(void)plainItemAppearanceChanged;
-(void)dealloc;
-(UIView *)view;
-(void)_invalidateAssistant:(id)arg1 ;
-(void)_disablePointerInteractions;
-(void)_updateToFitInWidth:(double)arg1 ;
-(UIEdgeInsets)hitTestInsets;
-(double)minimumInterItemSpace;
-(void)setBarButtonGroups:(NSArray *)arg1 ;
-(void)_groupDidUpdateVisibility:(id)arg1 ;
-(void)_setMinimumInterGroupSpace:(double)arg1 ;
-(BOOL)createsPopoverLayoutGuides;
-(NSArray *)barButtonGroups;
-(void)setNeedsHitTestUpdate;
-(long long)itemDistribution;
-(id)init;
-(void)_setVisualProvider:(id)arg1 ;
-(void)set_appearanceDelegate:(id<_UIButtonBarAppearanceDelegate>)arg1 ;
-(UIBarButtonItem *)ultimateFallbackItem;
-(void)setDelegate:(id<_UIButtonBarDelegate>)arg1 ;
-(id)_updatedViewForBarButtonItem:(id)arg1 withView:(id)arg2 ;
-(void)pointerInteraction:(id)arg1 willExitRegion:(id)arg2 animator:(id)arg3 ;
-(void)setMinimumInterItemSpace:(double)arg1 ;
-(void)setVisualProvider:(_UIButtonBarButtonVisualProvider *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_validateAllItems;
-(id)_newGroupLayout:(id)arg1 ;
-(void)setCreatesPopoverLayoutGuides:(BOOL)arg1 ;
-(id<_UIButtonBarAppearanceDelegate>)_appearanceDelegate;
-(BOOL)_itemsInGroupUseSameSize;
-(void)setHitTestInsets:(UIEdgeInsets)arg1 ;
-(double)_layoutWidth;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_layoutForGroup:(id)arg1 ;
-(id<_UIButtonBarDelegate>)delegate;
-(UIView*<UIPointerInteractionDelegate>)assistantView;
-(void)_groupDidUpdateRepresentative:(id)arg1 fromRepresentative:(id)arg2 ;
-(void)_enablePointerInteractions;
-(void)setAllowsViewWrappers:(BOOL)arg1 ;
-(void)_reloadBarButtonGroups;
-(void)_setItemsInGroupUseSameSize:(BOOL)arg1 ;
-(BOOL)allowsViewWrappers;
-(BOOL)_itemDidUpdateMenu:(id)arg1 fromMenu:(id)arg2 ;
-(void)_groupDidChangePriority:(id)arg1 ;
-(void)setDefaultActionFilter:(id)arg1 ;
-(void)_setNeedsVisualUpdate;
-(NSDirectionalEdgeInsets)hitTestDirectionalInsets;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(double)_estimatedWidth;
-(void)_updateHitRects;
-(_UIButtonBarButtonVisualProvider *)visualProvider;
-(void)_groupDidChangeGeometry:(id)arg1 ;
-(NSString *)description;
-(id)_targetActionForBarButtonItem:(id)arg1 ;
-(void)_groupDidUpdateItems:(id)arg1 removedItems:(id)arg2 ;
-(void)doneItemAppearanceChanged;
@end
