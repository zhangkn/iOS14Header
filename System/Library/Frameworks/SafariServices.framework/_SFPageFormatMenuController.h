/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SFPageFormatMenuItemControllerDelegate.h>

@protocol _SFBrowserContentController;
@class _SFSettingsAlertItem, NSArray, UIViewController, NSString;

@interface _SFPageFormatMenuController : NSObject <_SFPageFormatMenuItemControllerDelegate> {

	_SFSettingsAlertItem* _readerAlertItem;
	NSArray* _translationAlertItems;
	id<_SFBrowserContentController> _browserContentController;
	UIViewController* _viewController;

}

@property (nonatomic,__weak,readonly) id<_SFBrowserContentController> browserContentController;              //@synthesize browserContentController=_browserContentController - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                                     //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)viewController;
-(id)viewControllerForPresentationForItemController:(id)arg1 ;
-(void)_readerAvailabilityDidChange:(id)arg1 ;
-(id)_readerTextSizeAlertItem;
-(id)_pageZoomAlertItem;
-(id)_readerAlertItem;
-(void)_buildTranslationAlertItemsWithSourceInfo:(id)arg1 ;
-(id)_readerFontAlertItem;
-(id)_readerThemeAlertItem;
-(BOOL)_canHideToolbar;
-(id)_fullScreenAlertItem;
-(id)_desktopMobileToggleAlertItemWithOrientation:(long long)arg1 ;
-(BOOL)_canToggleContentBlockers;
-(id)_contentBlockersToggleAlertItem;
-(id)_sitePreferencesAlertItem;
-(id<_SFBrowserContentController>)browserContentController;
-(void)_anchorInWindowCoordinatesForAlert:(id)arg1 ;
-(BOOL)_hasStartedTranslation;
-(id)_exitTranslationAlertItem;
-(id)_internalTapToRadarTranslationAlertItem;
-(id)_translateAlertItemForLocaleIdentifier:(id)arg1 ;
-(id)initWithBrowserContentController:(id)arg1 ;
-(void)presentMenuFromViewController:(id)arg1 withSourceInfo:(id)arg2 ;
-(void)_translationAvailabilityDidChange:(id)arg1 ;
@end

