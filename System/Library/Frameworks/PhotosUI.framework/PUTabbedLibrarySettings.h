/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PUTabbedLibrarySettings : PXSettings {

	BOOL _enablePhotosTab;
	BOOL _enableMemoriesTab;
	BOOL _enableSharedTab;
	BOOL _enableAlbumsTab;
	BOOL _enableCuratedLibraryTab;
	BOOL _enableForYouTab;
	BOOL _enableSearchTab;
	BOOL _enableConsolidatedAlbumsTab;
	BOOL _enableBlankTab;
	BOOL _sidebarAnimateSelectionUpdates;
	BOOL _sidebarAllPhotosSuspendsNavigationHighlights;
	BOOL _sidebarScrollSelectedItemToCenter;
	BOOL _sidebarOnlyScrollOffscreenItemOnScreen;
	BOOL _sidebarExpandSelectedItems;
	BOOL _sidebarAnimateExpandSelectedItems;
	BOOL _sidebarAnimateDataSourceUpdates;
	BOOL _sidebarUseMacStructure;
	BOOL _sidebarEditAutoExpandToEditableItem;
	BOOL _sidebarHideNavBackButtonForSelectedItem;
	BOOL _sidebarLaunchAnimateLoad;
	BOOL _sidebarSymbolImagesOnly;
	long long _sidebarLaunchLoadMode;
	long long _sidebarEnabledMode;

}

@property (assign,nonatomic) long long sidebarEnabledMode;                                   //@synthesize sidebarEnabledMode=_sidebarEnabledMode - In the implementation block
@property (assign,nonatomic) BOOL enablePhotosTab;                                           //@synthesize enablePhotosTab=_enablePhotosTab - In the implementation block
@property (assign,nonatomic) BOOL enableMemoriesTab;                                         //@synthesize enableMemoriesTab=_enableMemoriesTab - In the implementation block
@property (assign,nonatomic) BOOL enableSharedTab;                                           //@synthesize enableSharedTab=_enableSharedTab - In the implementation block
@property (assign,nonatomic) BOOL enableAlbumsTab;                                           //@synthesize enableAlbumsTab=_enableAlbumsTab - In the implementation block
@property (assign,nonatomic) BOOL enableCuratedLibraryTab;                                   //@synthesize enableCuratedLibraryTab=_enableCuratedLibraryTab - In the implementation block
@property (assign,nonatomic) BOOL enableForYouTab;                                           //@synthesize enableForYouTab=_enableForYouTab - In the implementation block
@property (assign,nonatomic) BOOL enableSearchTab;                                           //@synthesize enableSearchTab=_enableSearchTab - In the implementation block
@property (assign,nonatomic) BOOL enableConsolidatedAlbumsTab;                               //@synthesize enableConsolidatedAlbumsTab=_enableConsolidatedAlbumsTab - In the implementation block
@property (assign,nonatomic) BOOL enableBlankTab;                                            //@synthesize enableBlankTab=_enableBlankTab - In the implementation block
@property (getter=isSidebarEnabled,nonatomic,readonly) BOOL sidebarEnabled; 
@property (assign,nonatomic) BOOL sidebarAnimateSelectionUpdates;                            //@synthesize sidebarAnimateSelectionUpdates=_sidebarAnimateSelectionUpdates - In the implementation block
@property (assign,nonatomic) BOOL sidebarAllPhotosSuspendsNavigationHighlights;              //@synthesize sidebarAllPhotosSuspendsNavigationHighlights=_sidebarAllPhotosSuspendsNavigationHighlights - In the implementation block
@property (assign,nonatomic) BOOL sidebarScrollSelectedItemToCenter;                         //@synthesize sidebarScrollSelectedItemToCenter=_sidebarScrollSelectedItemToCenter - In the implementation block
@property (assign,nonatomic) BOOL sidebarOnlyScrollOffscreenItemOnScreen;                    //@synthesize sidebarOnlyScrollOffscreenItemOnScreen=_sidebarOnlyScrollOffscreenItemOnScreen - In the implementation block
@property (assign,nonatomic) BOOL sidebarExpandSelectedItems;                                //@synthesize sidebarExpandSelectedItems=_sidebarExpandSelectedItems - In the implementation block
@property (assign,nonatomic) BOOL sidebarAnimateExpandSelectedItems;                         //@synthesize sidebarAnimateExpandSelectedItems=_sidebarAnimateExpandSelectedItems - In the implementation block
@property (assign,nonatomic) BOOL sidebarAnimateDataSourceUpdates;                           //@synthesize sidebarAnimateDataSourceUpdates=_sidebarAnimateDataSourceUpdates - In the implementation block
@property (assign,nonatomic) BOOL sidebarUseMacStructure;                                    //@synthesize sidebarUseMacStructure=_sidebarUseMacStructure - In the implementation block
@property (assign,nonatomic) BOOL sidebarEditAutoExpandToEditableItem;                       //@synthesize sidebarEditAutoExpandToEditableItem=_sidebarEditAutoExpandToEditableItem - In the implementation block
@property (assign,nonatomic) BOOL sidebarHideNavBackButtonForSelectedItem;                   //@synthesize sidebarHideNavBackButtonForSelectedItem=_sidebarHideNavBackButtonForSelectedItem - In the implementation block
@property (assign,nonatomic) long long sidebarLaunchLoadMode;                                //@synthesize sidebarLaunchLoadMode=_sidebarLaunchLoadMode - In the implementation block
@property (assign,nonatomic) BOOL sidebarLaunchAnimateLoad;                                  //@synthesize sidebarLaunchAnimateLoad=_sidebarLaunchAnimateLoad - In the implementation block
@property (assign,nonatomic) BOOL sidebarSymbolImagesOnly;                                   //@synthesize sidebarSymbolImagesOnly=_sidebarSymbolImagesOnly - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
+(id)keyPathsForValuesAffectingSidebarEnabled;
+(id)transientProperties;
-(void)setDefaultValues;
-(long long)sidebarEnabledMode;
-(void)setSidebarAnimateSelectionUpdates:(BOOL)arg1 ;
-(void)setSidebarExpandSelectedItems:(BOOL)arg1 ;
-(void)setEnableForYouTab:(BOOL)arg1 ;
-(BOOL)sidebarSymbolImagesOnly;
-(long long)countOfEnabledTabs;
-(void)setSidebarHideNavBackButtonForSelectedItem:(BOOL)arg1 ;
-(BOOL)sidebarExpandSelectedItems;
-(void)setEnableConsolidatedAlbumsTab:(BOOL)arg1 ;
-(void)setSidebarEditAutoExpandToEditableItem:(BOOL)arg1 ;
-(BOOL)sidebarHideNavBackButtonForSelectedItem;
-(void)setSidebarUseMacStructure:(BOOL)arg1 ;
-(void)setEnablePhotosTab:(BOOL)arg1 ;
-(void)setSidebarSymbolImagesOnly:(BOOL)arg1 ;
-(BOOL)enableSearchTab;
-(BOOL)sidebarLaunchAnimateLoad;
-(void)setEnableAlbumsTab:(BOOL)arg1 ;
-(void)setEnableSharedTab:(BOOL)arg1 ;
-(BOOL)enableCuratedLibraryTab;
-(long long)sidebarLaunchLoadMode;
-(void)setEnableSearchTab:(BOOL)arg1 ;
-(void)setEnableMemoriesTab:(BOOL)arg1 ;
-(BOOL)sidebarUseMacStructure;
-(BOOL)enableSharedTab;
-(BOOL)enableConsolidatedAlbumsTab;
-(id)allTabs;
-(BOOL)sidebarEditAutoExpandToEditableItem;
-(BOOL)sidebarOnlyScrollOffscreenItemOnScreen;
-(BOOL)sidebarScrollSelectedItemToCenter;
-(BOOL)sidebarAnimateExpandSelectedItems;
-(void)setSidebarOnlyScrollOffscreenItemOnScreen:(BOOL)arg1 ;
-(void)setSidebarEnabledMode:(long long)arg1 ;
-(void)setEnableCuratedLibraryTab:(BOOL)arg1 ;
-(void)setSidebarScrollSelectedItemToCenter:(BOOL)arg1 ;
-(BOOL)sidebarAllPhotosSuspendsNavigationHighlights;
-(BOOL)sidebarAnimateDataSourceUpdates;
-(BOOL)enableAlbumsTab;
-(void)setSidebarAnimateDataSourceUpdates:(BOOL)arg1 ;
-(BOOL)isSidebarEnabled;
-(BOOL)sidebarAnimateSelectionUpdates;
-(BOOL)enableForYouTab;
-(void)setEnableBlankTab:(BOOL)arg1 ;
-(BOOL)enableBlankTab;
-(BOOL)enablePhotosTab;
-(BOOL)enableMemoriesTab;
-(void)setSidebarAllPhotosSuspendsNavigationHighlights:(BOOL)arg1 ;
-(void)setSidebarAnimateExpandSelectedItems:(BOOL)arg1 ;
-(id)parentSettings;
-(void)setSidebarLaunchLoadMode:(long long)arg1 ;
-(void)setSidebarLaunchAnimateLoad:(BOOL)arg1 ;
@end

