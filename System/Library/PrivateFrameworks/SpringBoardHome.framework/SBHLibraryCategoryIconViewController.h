/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBFolderObserver.h>
#import <libobjc.A.dylib/SBIconViewQuerying.h>
#import <libobjc.A.dylib/SBIconViewCustomImageViewControlling.h>
#import <libobjc.A.dylib/SBHLegibility.h>

@protocol SBIconViewProviding, SBIconListLayoutProvider;
@class SBHLibraryCategoryPodBackgroundView, SBIconListView, SBFolder, NSString, SBHIconImageCache, SBFolderIconImageCache, SBIcon, _UILegibilitySettings, NSArray, UIView;

@interface SBHLibraryCategoryIconViewController : UIViewController <SBFolderObserver, SBIconViewQuerying, SBIconViewCustomImageViewControlling, SBHLegibility> {

	SBHLibraryCategoryPodBackgroundView* _backgroundView;
	SBIconListView* _iconListView;
	BOOL _editing;
	BOOL _showsSquareCorners;
	unsigned long long _pauseReasons;
	SBFolder* _folder;
	NSString* _location;
	id<SBIconViewProviding> _iconViewProvider;
	id<SBIconListLayoutProvider> _listLayoutProvider;
	SBHIconImageCache* _iconImageCache;
	SBFolderIconImageCache* _folderIconImageCache;
	SBIconImageInfo _iconImageInfo;

}

@property (nonatomic,readonly) SBFolder * folder;                                                      //@synthesize folder=_folder - In the implementation block
@property (nonatomic,readonly) NSString * location;                                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) id<SBIconViewProviding> iconViewProvider;                                 //@synthesize iconViewProvider=_iconViewProvider - In the implementation block
@property (nonatomic,retain) id<SBIconListLayoutProvider> listLayoutProvider;                          //@synthesize listLayoutProvider=_listLayoutProvider - In the implementation block
@property (nonatomic,retain) SBHIconImageCache * iconImageCache;                                       //@synthesize iconImageCache=_iconImageCache - In the implementation block
@property (nonatomic,retain) SBFolderIconImageCache * folderIconImageCache;                            //@synthesize folderIconImageCache=_folderIconImageCache - In the implementation block
@property (nonatomic,readonly) SBIconListView * iconListView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) SBIconImageInfo iconImageInfo;                                            //@synthesize iconImageInfo=_iconImageInfo - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                            //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) SBIcon * icon; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> visiblyActiveDataSource; 
@property (assign,getter=isShowingContextMenu,nonatomic) BOOL showingContextMenu; 
@property (assign,getter=isOverlapping,nonatomic) BOOL overlapping; 
@property (assign,getter=isDropping,nonatomic) BOOL dropping; 
@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled; 
@property (assign,getter=isBackgroundBlurEnabled,nonatomic) BOOL backgroundBlurEnabled; 
@property (nonatomic,readonly) BOOL wantsCaptureOnlyBackgroundView; 
@property (nonatomic,copy) id backgroundViewProvider; 
@property (assign,nonatomic) double brightness; 
@property (nonatomic,readonly) BOOL wantsLabelHidden; 
@property (assign,getter=isVisiblySettled,nonatomic) BOOL visiblySettled; 
@property (assign,nonatomic) BOOL automaticallyUpdatesVisiblySettled; 
@property (assign,getter=isPrivateModeEnabled,nonatomic) BOOL privateModeEnabled; 
@property (assign,nonatomic) unsigned long long presentationMode; 
@property (assign,nonatomic) unsigned long long imageViewAlignment; 
@property (assign,nonatomic) unsigned long long pauseReasons;                                          //@synthesize pauseReasons=_pauseReasons - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings; 
@property (nonatomic,copy,readonly) NSArray * applicationShortcutItems; 
@property (nonatomic,readonly) UIView * snapshotView; 
@property (nonatomic,readonly) CGRect visibleBounds; 
@property (nonatomic,readonly) double continuousCornerRadius; 
@property (assign,nonatomic) BOOL showsSquareCorners;                                                  //@synthesize showsSquareCorners=_showsSquareCorners - In the implementation block
-(SBFolder *)folder;
-(CGRect)visibleBounds;
-(BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setListLayoutProvider:(id<SBIconListLayoutProvider>)arg1 ;
-(void)setFolderIconImageCache:(SBFolderIconImageCache *)arg1 ;
-(SBIconListView *)iconListView;
-(void)enumerateDisplayedIconViewsUsingBlock:(/*^block*/id)arg1 ;
-(void)setIconImageInfo:(SBIconImageInfo)arg1 ;
-(void)setIconImageCache:(SBHIconImageCache *)arg1 ;
-(BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2 ;
-(id)firstIconViewForIcon:(id)arg1 ;
-(id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2 ;
-(BOOL)showsSquareCorners;
-(BOOL)isPresentingIconLocation:(id)arg1 ;
-(void)setShowsSquareCorners:(BOOL)arg1 ;
-(SBHIconImageCache *)iconImageCache;
-(SBIconImageInfo)iconImageInfo;
-(double)continuousCornerRadius;
-(BOOL)isEditing;
-(id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2 ;
-(BOOL)isDisplayingIcon:(id)arg1 ;
-(id)sourceView;
-(void)setIconViewProvider:(id<SBIconViewProviding>)arg1 ;
-(SBFolderIconImageCache *)folderIconImageCache;
-(NSString *)location;
-(id<SBIconViewProviding>)iconViewProvider;
-(id)presentedIconLocations;
-(void)viewDidLoad;
-(BOOL)isDisplayingIconView:(id)arg1 ;
-(id)iconViewForIcon:(id)arg1 location:(id)arg2 ;
-(void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3 ;
-(void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPauseReasons:(unsigned long long)arg1 ;
-(void)updateFolder:(id)arg1 location:(id)arg2 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id<SBIconListLayoutProvider>)listLayoutProvider;
-(unsigned long long)pauseReasons;
-(void)folder:(id)arg1 didAddList:(id)arg2 ;
@end

