/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBarAppearanceChangeObserver.h>
#import <libobjc.A.dylib/NSCoding.h>

@protocol _UINavigationItemChangeObserver;
@class NSString, UIBarButtonItem, UINavigationBar, UIView, NSArray, UISearchController, UIImageView, NSMutableDictionary, _UINavigationBarPalette, UINavigationBarAppearance, _UINavigationBarItemStackEntry;

@interface UINavigationItem : NSObject <_UIBarAppearanceChangeObserver, NSCoding> {

	NSString* _title;
	NSString* _backButtonTitle;
	UIBarButtonItem* _backBarButtonItem;
	UIBarButtonItem* _synthesizedBackBarButtonItem;
	NSString* _prompt;
	long long _tag;
	id _context;
	UINavigationBar* _navigationBar;
	UIView* _defaultTitleView;
	UIView* _titleView;
	UIView* _backButtonView;
	NSArray* _leftBarButtonItems;
	NSArray* _rightBarButtonItems;
	NSArray* _customLeftViews;
	NSArray* _customRightViews;
	BOOL _hidesBackButton;
	BOOL _leftItemsSupplementBackButton;
	UISearchController* _searchController;
	BOOL _alwaysShowsSearchBar;
	UIImageView* _frozenTitleView;
	NSArray* _abbreviatedBackButtonTitles;
	NSMutableDictionary* _minimumDesiredHeights;
	BOOL _manualScrollEdgeAppearanceEnabled;
	BOOL _alwaysUseManualScrollEdgeAppearance;
	BOOL __alignLargeTitleAccessoryViewToBaseline;
	BOOL __backgroundHidden;
	BOOL _useRelativeLargeTitleInsets;
	BOOL __preserveSearchBarAcrossTransitions;
	double _fontScaleAdjustment;
	_UINavigationBarPalette* _bottomPalette;
	NSString* _pendingTitle;
	double _manualScrollEdgeAppearanceProgress;
	double _autoScrollEdgeTransitionDistance;
	NSArray* _leftItemSpaceList;
	NSArray* _rightItemSpaceList;
	unsigned long long _leftFlexibleSpaceCount;
	unsigned long long _rightFlexibleSpaceCount;
	long long _backButtonDisplayMode;
	long long _largeTitleDisplayMode;
	UINavigationBarAppearance* _standardAppearance;
	UINavigationBarAppearance* _compactAppearance;
	UINavigationBarAppearance* _scrollEdgeAppearance;
	id<_UINavigationItemChangeObserver> __changeObserver;
	_UINavigationBarItemStackEntry* __stackEntry;
	double __titleViewWidthForAnimations;
	double __idealCustomTitleWidth;
	unsigned long long __largeTitleAccessoryViewHorizontalAlignment;
	UINavigationBar* __owningNavigationBar;
	UIView* __largeTitleAccessoryView;
	unsigned long long __largeTitleTwoLineMode;
	NSString* __weeTitle;
	UIView* __canvasView;
	NSArray* __alternateLargeTitles;
	NSDirectionalEdgeInsets _largeTitleInsets;

}

@property (assign,setter=_setChangeObserver:,nonatomic,__weak) id<_UINavigationItemChangeObserver> _changeObserver;                                                          //@synthesize _changeObserver=__changeObserver - In the implementation block
@property (assign,setter=_setStackEntry:,nonatomic) _UINavigationBarItemStackEntry * _stackEntry;                                                                            //@synthesize _stackEntry=__stackEntry - In the implementation block
@property (assign,setter=_setLeftFlexibleSpaceCount:,nonatomic) unsigned long long _leftFlexibleSpaceCount;                                                                  //@synthesize leftFlexibleSpaceCount=_leftFlexibleSpaceCount - In the implementation block
@property (assign,setter=_setRightFlexibleSpaceCount:,nonatomic) unsigned long long _rightFlexibleSpaceCount;                                                                //@synthesize rightFlexibleSpaceCount=_rightFlexibleSpaceCount - In the implementation block
@property (setter=_setLeftItemSpaceList:,nonatomic,copy) NSArray * _leftItemSpaceList;                                                                                       //@synthesize leftItemSpaceList=_leftItemSpaceList - In the implementation block
@property (setter=_setRightItemSpaceList:,nonatomic,copy) NSArray * _rightItemSpaceList;                                                                                     //@synthesize rightItemSpaceList=_rightItemSpaceList - In the implementation block
@property (assign,nonatomic) double _titleViewWidthForAnimations;                                                                                                            //@synthesize _titleViewWidthForAnimations=__titleViewWidthForAnimations - In the implementation block
@property (assign,setter=_setIdealCustomTitleWidth:,nonatomic) double _idealCustomTitleWidth;                                                                                //@synthesize _idealCustomTitleWidth=__idealCustomTitleWidth - In the implementation block
@property (setter=_setPendingTitle:,nonatomic,copy) NSString * _pendingTitle;                                                                                                //@synthesize pendingTitle=_pendingTitle - In the implementation block
@property (assign,setter=_setFontScaleAdjustment:,nonatomic) double _fontScaleAdjustment;                                                                                    //@synthesize fontScaleAdjustment=_fontScaleAdjustment - In the implementation block
@property (nonatomic,readonly) BOOL _alignLargeTitleAccessoryViewToBaseline;                                                                                                 //@synthesize _alignLargeTitleAccessoryViewToBaseline=__alignLargeTitleAccessoryViewToBaseline - In the implementation block
@property (nonatomic,readonly) unsigned long long _largeTitleAccessoryViewHorizontalAlignment;                                                                               //@synthesize _largeTitleAccessoryViewHorizontalAlignment=__largeTitleAccessoryViewHorizontalAlignment - In the implementation block
@property (nonatomic,readonly) UISearchController * _searchControllerIfAllowed; 
@property (nonatomic,readonly) BOOL _hidesSearchBarWhenScrollingIfAllowed; 
@property (assign,setter=_setOwningNavigationBar:,getter=_owningNavigationBar,nonatomic,__weak) UINavigationBar * _owningNavigationBar;                                      //@synthesize _owningNavigationBar=__owningNavigationBar - In the implementation block
@property (assign,setter=_setIndependentBarStyle:,nonatomic) long long _independentBarStyle; 
@property (nonatomic,retain) UIView * customLeftView; 
@property (nonatomic,retain) UIView * customRightView; 
@property (nonatomic,retain) UIView * customTitleView; 
@property (nonatomic,retain) UIBarButtonItem * customLeftItem; 
@property (nonatomic,retain) UIBarButtonItem * customRightItem; 
@property (nonatomic,retain) id context;                                                                                                                                     //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long tag;                                                                                                                                  //@synthesize tag=_tag - In the implementation block
@property (assign,setter=_setBackButtonDisplayMode:,nonatomic) unsigned long long _backButtonDisplayMode; 
@property (assign,setter=_setManualScrollEdgeAppearanceEnabled:,getter=_isManualScrollEdgeAppearanceEnabled,nonatomic) BOOL _manualScrollEdgeAppearanceEnabled;              //@synthesize manualScrollEdgeAppearanceEnabled=_manualScrollEdgeAppearanceEnabled - In the implementation block
@property (assign,setter=_setManualScrollEdgeAppearanceProgress:,nonatomic) double _manualScrollEdgeAppearanceProgress;                                                      //@synthesize manualScrollEdgeAppearanceProgress=_manualScrollEdgeAppearanceProgress - In the implementation block
@property (assign,setter=_setAutoScrollEdgeTransitionDistance:,nonatomic) double _autoScrollEdgeTransitionDistance;                                                          //@synthesize autoScrollEdgeTransitionDistance=_autoScrollEdgeTransitionDistance - In the implementation block
@property (assign,setter=_setAlwaysUseManualScrollEdgeAppearance:,nonatomic) BOOL _alwaysUseManualScrollEdgeAppearance;                                                      //@synthesize alwaysUseManualScrollEdgeAppearance=_alwaysUseManualScrollEdgeAppearance - In the implementation block
@property (setter=_setLargeTitleAccessoryView:,nonatomic,retain) UIView * _largeTitleAccessoryView;                                                                          //@synthesize _largeTitleAccessoryView=__largeTitleAccessoryView - In the implementation block
@property (assign,setter=_setSupportsTwoLineLargeTitles:,nonatomic) BOOL _supportsTwoLineLargeTitles; 
@property (assign,setter=_setLargeTitleTwoLineMode:,nonatomic) unsigned long long _largeTitleTwoLineMode;                                                                    //@synthesize _largeTitleTwoLineMode=__largeTitleTwoLineMode - In the implementation block
@property (setter=_setWeeTitle:,nonatomic,copy) NSString * _weeTitle;                                                                                                        //@synthesize _weeTitle=__weeTitle - In the implementation block
@property (assign,setter=_setBackgroundHidden:,nonatomic) BOOL _backgroundHidden;                                                                                            //@synthesize _backgroundHidden=__backgroundHidden - In the implementation block
@property (assign,nonatomic,__weak) UINavigationBar * navigationBar;                                                                                                         //@synthesize navigationBar=_navigationBar - In the implementation block
@property (setter=_setAbbreviatedBackButtonTitles:,nonatomic,copy) NSArray * _abbreviatedBackButtonTitles; 
@property (setter=_setCanvasView:,nonatomic,retain) UIView * _canvasView;                                                                                                    //@synthesize _canvasView=__canvasView - In the implementation block
@property (assign,nonatomic) NSDirectionalEdgeInsets largeTitleInsets;                                                                                                       //@synthesize largeTitleInsets=_largeTitleInsets - In the implementation block
@property (assign,nonatomic) BOOL useRelativeLargeTitleInsets;                                                                                                               //@synthesize useRelativeLargeTitleInsets=_useRelativeLargeTitleInsets - In the implementation block
@property (nonatomic,retain) NSArray * _alternateLargeTitles;                                                                                                                //@synthesize _alternateLargeTitles=__alternateLargeTitles - In the implementation block
@property (setter=_setBottomPalette:,nonatomic,retain) _UINavigationBarPalette * _bottomPalette;                                                                             //@synthesize bottomPalette=_bottomPalette - In the implementation block
@property (assign,setter=_setPreserveSearchBarAcrossTransitions:,nonatomic) BOOL _preserveSearchBarAcrossTransitions;                                                        //@synthesize _preserveSearchBarAcrossTransitions=__preserveSearchBarAcrossTransitions - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIView * titleView;                                                                                                                             //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,retain) UIBarButtonItem * backBarButtonItem; 
@property (nonatomic,copy) NSString * backButtonTitle; 
@property (assign,nonatomic) BOOL hidesBackButton; 
@property (assign,nonatomic) long long backButtonDisplayMode;                                                                                                                //@synthesize backButtonDisplayMode=_backButtonDisplayMode - In the implementation block
@property (nonatomic,copy) NSArray * leftBarButtonItems; 
@property (nonatomic,copy) NSArray * rightBarButtonItems; 
@property (assign,nonatomic) BOOL leftItemsSupplementBackButton; 
@property (nonatomic,retain) UIBarButtonItem * leftBarButtonItem; 
@property (nonatomic,retain) UIBarButtonItem * rightBarButtonItem; 
@property (assign,nonatomic) long long largeTitleDisplayMode;                                                                                                                //@synthesize largeTitleDisplayMode=_largeTitleDisplayMode - In the implementation block
@property (nonatomic,retain) UISearchController * searchController; 
@property (assign,nonatomic) BOOL hidesSearchBarWhenScrolling; 
@property (nonatomic,copy) UINavigationBarAppearance * standardAppearance;                                                                                                   //@synthesize standardAppearance=_standardAppearance - In the implementation block
@property (nonatomic,copy) UINavigationBarAppearance * compactAppearance;                                                                                                    //@synthesize compactAppearance=_compactAppearance - In the implementation block
@property (nonatomic,copy) UINavigationBarAppearance * scrollEdgeAppearance;                                                                                                 //@synthesize scrollEdgeAppearance=_scrollEdgeAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultFont;
-(NSString *)prompt;
-(id<_UINavigationItemChangeObserver>)_changeObserver;
-(void)setSearchController:(UISearchController *)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(double)_fontScaleAdjustment;
-(void)_setFontScaleAdjustment:(double)arg1 ;
-(void)appearance:(id)arg1 categoriesChanged:(long long)arg2 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 matchBarButtonItemAnimationDuration:(BOOL)arg3 ;
-(BOOL)hidesSearchBarWhenScrolling;
-(void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(BOOL)arg2 horizontalAlignment:(unsigned long long)arg3 ;
-(UISearchController *)searchController;
-(void)_updateItemsForLetterpressImagesVisualStateIfNecessary;
-(void)_setChangeObserver:(id)arg1 ;
-(void)_replaceCustomLeftRightViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 left:(BOOL)arg3 ;
-(void)_messageChangeObserver:(id)arg1 forTransitionFromSearchController:(id)arg2 ;
-(BOOL)_needsSizeTransitionToItem:(id)arg1 barMetrics:(long long)arg2 defaultHeightBlock:(/*^block*/id)arg3 ;
-(void)_setIndependentBackgroundImage:(id)arg1 shadowImage:(id)arg2 forBarMetrics:(long long)arg3 ;
-(void)setTitleView:(UIView *)arg1 ;
-(BOOL)_accumulateViewsFromItems:(id)arg1 isLeft:(BOOL)arg2 refreshViews:(BOOL)arg3 ;
-(id)_addDefaultTitleViewToNavigationBarIfNecessary:(id)arg1 ;
-(double)_desiredHeightForBarMetrics:(long long)arg1 defaultHeightBlock:(/*^block*/id)arg2 ;
-(long long)tag;
-(UINavigationBar *)navigationBar;
-(NSString *)_weeTitle;
-(void)_setLargeTitleAccessoryView:(id)arg1 alignToBaseline:(BOOL)arg2 ;
-(void)dealloc;
-(NSString *)title;
-(void)setPrompt:(NSString *)arg1 ;
-(unsigned long long)_largeTitleAccessoryViewHorizontalAlignment;
-(void)_setAlwaysUseManualScrollEdgeAppearance:(BOOL)arg1 ;
-(void)set_alwaysUseManualScrollEdgeAppearance:(BOOL)arg1 ;
-(id)_independentBackgroundImageForBarMetrics:(long long)arg1 ;
-(void)setContext:(id)arg1 ;
-(BOOL)_isManualScrollEdgeAppearanceEnabled;
-(BOOL)_alwaysUseManualScrollEdgeAppearance;
-(void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setManualScrollEdgeAppearanceProgress:(double)arg1 ;
-(void)_setMinimumDesiredHeight:(double)arg1 forBarMetrics:(long long)arg2 ;
-(BOOL)_alignLargeTitleAccessoryViewToBaseline;
-(void)_setPreserveSearchBarAcrossTransitions:(BOOL)arg1 ;
-(id)_backButtonTitleAllowingGenericTitles:(BOOL)arg1 ;
-(void)_setManualScrollEdgeAppearanceEnabled:(BOOL)arg1 ;
-(UIView *)titleView;
-(id)init;
-(UIView *)_canvasView;
-(_UINavigationBarItemStackEntry *)_stackEntry;
-(void)_updateViewsForBarSizeChangeAndApply:(BOOL)arg1 ;
-(BOOL)_hidesSearchBarWhenScrollingIfAllowed;
-(void)_setAutoScrollEdgeTransitionDistance:(double)arg1 ;
-(void)updateNavigationBarButtonsAnimated:(BOOL)arg1 ;
-(id)_barButtonForBackButtonIndicator;
-(double)_minimumDesiredHeightForBarMetrics:(long long)arg1 ;
-(void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCustomRightView:(id)arg1 animated:(BOOL)arg2 ;
-(void)setLeftBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(void)setRightBarButtonItems:(id)arg1 animated:(BOOL)arg2 ;
-(double)_manualScrollEdgeAppearanceProgress;
-(BOOL)_preserveSearchBarAcrossTransitions;
-(void)_setBottomPaletteNeedsUpdate:(id)arg1 ;
-(void)_setLeftItemSpaceList:(id)arg1 ;
-(void)_setLeftFlexibleSpaceCount:(unsigned long long)arg1 ;
-(void)_setRightItemSpaceList:(id)arg1 ;
-(void)_setRightFlexibleSpaceCount:(unsigned long long)arg1 ;
-(void)setLeftBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setRightBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)_firstNonSpaceItemInList:(id)arg1 ;
-(id)_minimumDesiredHeights;
-(void)_setAbbreviatedBackButtonTitles:(id)arg1 ;
-(void)_setBackButtonPressed:(BOOL)arg1 ;
-(void)_setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setBackButtonTitle:(id)arg1 lineBreakMode:(long long)arg2 ;
-(void)setLargeTitleDisplayMode:(long long)arg1 ;
-(void)_setLargeTitleAccessoryView:(id)arg1 ;
-(BOOL)_supportsTwoLineLargeTitles;
-(void)_setSupportsTwoLineLargeTitles:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_setBackgroundHidden:(BOOL)arg1 ;
-(id)context;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(id)currentBackButtonTitle;
-(id)_effectiveBackBarButtonItem;
-(void)setLeftItemsSupplementBackButton:(BOOL)arg1 ;
-(double)_autoScrollEdgeTransitionDistance;
-(id)_titleView;
-(void)_setWeeTitle:(id)arg1 ;
-(void)_setTitleViewDataSource:(id)arg1 ;
-(NSString *)_pendingTitle;
-(void)_setLargeTitleViewDataSource:(id)arg1 ;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(BOOL)_wantsBackButtonIndicator;
-(id)_buttonForBackButtonIndicator;
-(void)set_leftBarButtonItem:(id)arg1 ;
-(void)set_rightBarButtonItem:(id)arg1 ;
-(void)set_customRightView:(id)arg1 ;
-(void)set_customLeftView:(id)arg1 ;
-(void)set_rightBarButtonItems:(id)arg1 ;
-(void)set_leftBarButtonItems:(id)arg1 ;
-(void)set_customLeftViews:(id)arg1 ;
-(void)set_customRightViews:(id)arg1 ;
-(unsigned long long)_backButtonDisplayMode;
-(void)setHidesSearchBarWhenScrolling:(BOOL)arg1 ;
-(void)_setBackButtonDisplayMode:(unsigned long long)arg1 ;
-(void)_movingToTopOfStack;
-(void)_movingFromTopOfStack;
-(void)_movedToTopOfStack:(BOOL)arg1 ;
-(void)_movedFromTopOfStack:(BOOL)arg1 ;
-(void)setCustomLeftView:(UIView *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCustomRightView:(UIView *)arg1 ;
-(void)setLeftBarButtonItems:(NSArray *)arg1 ;
-(void)setRightBarButtonItems:(NSArray *)arg1 ;
-(id)_rightBarButtonItems;
-(id)_leftBarButtonItems;
-(void)_setBottomPalette:(id)arg1 ;
-(void)_setBottomPaletteNeedsUpdate;
-(void)setCustomTitleView:(UIView *)arg1 ;
-(void)setCustomLeftItem:(UIBarButtonItem *)arg1 ;
-(void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCustomRightItem:(UIBarButtonItem *)arg1 ;
-(void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2 ;
-(id)_firstNonSpaceLeftItem;
-(id)_firstNonSpaceRightItem;
-(long long)_independentBarStyle;
-(void)_setIndependentBarStyle:(long long)arg1 ;
-(id)_independentShadowImage;
-(void)setCompactAppearance:(UINavigationBarAppearance *)arg1 ;
-(NSArray *)_leftItemSpaceList;
-(UINavigationBarAppearance *)standardAppearance;
-(NSArray *)_rightItemSpaceList;
-(void)setStandardAppearance:(UINavigationBarAppearance *)arg1 ;
-(void)setScrollEdgeAppearance:(UINavigationBarAppearance *)arg1 ;
-(unsigned long long)_leftFlexibleSpaceCount;
-(unsigned long long)_rightFlexibleSpaceCount;
-(long long)largeTitleDisplayMode;
-(double)_titleViewWidthForAnimations;
-(void)set_titleViewWidthForAnimations:(double)arg1 ;
-(double)_idealCustomTitleWidth;
-(UIView *)_largeTitleAccessoryView;
-(unsigned long long)_largeTitleTwoLineMode;
-(void)setLargeTitleInsets:(NSDirectionalEdgeInsets)arg1 ;
-(BOOL)useRelativeLargeTitleInsets;
-(void)setUseRelativeLargeTitleInsets:(BOOL)arg1 ;
-(BOOL)hidesBackButton;
-(NSArray *)_alternateLargeTitles;
-(void)set_alternateLargeTitles:(NSArray *)arg1 ;
-(NSString *)backButtonTitle;
-(id)_customLeftView;
-(UIView *)customRightView;
-(UIView *)customTitleView;
-(UIBarButtonItem *)customRightItem;
-(void)_setCanvasView:(id)arg1 ;
-(void)_setStackEntry:(id)arg1 ;
-(void)setBackBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)backButtonView;
-(UIView *)customLeftView;
-(UIBarButtonItem *)customLeftItem;
-(_UINavigationBarPalette *)_bottomPalette;
-(UINavigationBar *)_owningNavigationBar;
-(NSArray *)leftBarButtonItems;
-(NSArray *)rightBarButtonItems;
-(id)_customLeftViews;
-(void)setTitle:(NSString *)arg1 ;
-(UINavigationBarAppearance *)scrollEdgeAppearance;
-(id)_customRightView;
-(NSDirectionalEdgeInsets)largeTitleInsets;
-(void)_removeContentInView:(id)arg1 ;
-(void)_removeTitleAndButtonViews;
-(void)_setOwningNavigationBar:(id)arg1 ;
-(BOOL)_hasDefaultTitleView;
-(void)_cleanupFrozenTitleView;
-(void)_freezeCurrentTitleView;
-(void)_setLargeTitleTwoLineMode:(unsigned long long)arg1 ;
-(NSString *)description;
-(void)_removeBackButtonView;
-(UISearchController *)_searchControllerIfAllowed;
-(UIBarButtonItem *)backBarButtonItem;
-(NSArray *)_abbreviatedBackButtonTitles;
-(void)_removeBarButtonItemViews;
-(void)_setCustomLeftViews:(id)arg1 ;
-(void)_setCustomRightViews:(id)arg1 ;
-(BOOL)_backgroundHidden;
-(BOOL)_leftItemsWantBackButton;
-(void)_setIdealCustomTitleWidth:(double)arg1 ;
-(void)setTag:(long long)arg1 ;
-(id)existingBackButtonView;
-(void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(void)_setLeftBarButtonItem:(id)arg1 ;
-(id)_customRightViews;
-(void)_setRightBarButtonItem:(id)arg1 ;
-(void)_setCustomRightView:(id)arg1 ;
-(UIBarButtonItem *)leftBarButtonItem;
-(void)_setCustomLeftView:(id)arg1 ;
-(void)_setRightBarButtonItems:(id)arg1 ;
-(void)_setLeftBarButtonItems:(id)arg1 ;
-(void)_updateBarItemOwnersTo:(id)arg1 ;
-(BOOL)leftItemsSupplementBackButton;
-(id)_leftBarButtonItem;
-(void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(UINavigationBarAppearance *)compactAppearance;
-(id)_defaultTitleView;
-(id)_rightBarButtonItem;
-(void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2 ;
-(long long)backButtonDisplayMode;
-(void)setBackButtonDisplayMode:(long long)arg1 ;
-(id)_customLeftViewsCreating:(BOOL)arg1 ;
-(id)_customLeftViewCreating:(BOOL)arg1 ;
-(void)_setPendingTitle:(id)arg1 ;
-(id)_customRightViewCreating:(BOOL)arg1 ;
-(id)_customRightViewsCreating:(BOOL)arg1 ;
-(UIBarButtonItem *)rightBarButtonItem;
-(void)_setCustomLeftRightView:(id)arg1 left:(BOOL)arg2 ;
@end

