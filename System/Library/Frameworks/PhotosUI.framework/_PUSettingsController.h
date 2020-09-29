/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:54 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PrototypeToolsUI/PTUISettingsController.h>

@class UINavigationController, PTSettings, PXSettings;

@interface _PUSettingsController : PTUISettingsController {

	BOOL _hasWarnedForOverrides;
	UINavigationController* _searchNavigationController;
	PTSettings* _rootSettings;
	/*^block*/id _onViewDidDisappearBlock;
	/*^block*/id _dismissButtonFactory;
	/*^block*/id _ellipsisBarButtonItemFactory;
	UINavigationController* _configurationsNavigationController;

}

@property (nonatomic,readonly) UINavigationController * searchNavigationController;                      //@synthesize searchNavigationController=_searchNavigationController - In the implementation block
@property (nonatomic,readonly) UINavigationController * configurationsNavigationController;              //@synthesize configurationsNavigationController=_configurationsNavigationController - In the implementation block
@property (assign,nonatomic) BOOL hasWarnedForOverrides;                                                 //@synthesize hasWarnedForOverrides=_hasWarnedForOverrides - In the implementation block
@property (nonatomic,readonly) PTSettings * rootSettings;                                                //@synthesize rootSettings=_rootSettings - In the implementation block
@property (nonatomic,readonly) PXSettings * currentSettings; 
@property (nonatomic,copy) id onViewDidDisappearBlock;                                                   //@synthesize onViewDidDisappearBlock=_onViewDidDisappearBlock - In the implementation block
@property (nonatomic,copy) id dismissButtonFactory;                                                      //@synthesize dismissButtonFactory=_dismissButtonFactory - In the implementation block
@property (nonatomic,copy) id ellipsisBarButtonItemFactory;                                              //@synthesize ellipsisBarButtonItemFactory=_ellipsisBarButtonItemFactory - In the implementation block
-(PXSettings *)currentSettings;
-(void)callOnViewDidDisappearBlock;
-(id)dismissButtonFactory;
-(void)setOnViewDidDisappearBlock:(id)arg1 ;
-(void)setEllipsisBarButtonItemFactory:(id)arg1 ;
-(void)handleEllipsisBarButtonItem:(id)arg1 ;
-(void)setDismissButtonFactory:(id)arg1 ;
-(id)initWithRootSettings:(id)arg1 ;
-(void)_invalidateNavigationItems;
-(void)_updateNavigationItemOfViewController:(id)arg1 ;
-(UINavigationController *)searchNavigationController;
-(void)_warnForSettingsOverride;
-(void)_clearSettingsOverride;
-(id)onViewDidDisappearBlock;
-(id)ellipsisBarButtonItemFactory;
-(UINavigationController *)configurationsNavigationController;
-(BOOL)hasWarnedForOverrides;
-(void)setHasWarnedForOverrides:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(PTSettings *)rootSettings;
-(void)pushViewController:(id)arg1 animated:(BOOL)arg2 ;
@end
