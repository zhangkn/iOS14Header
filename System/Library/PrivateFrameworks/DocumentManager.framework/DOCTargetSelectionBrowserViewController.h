/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DOCKeyCommandDismissible.h>
#import <libobjc.A.dylib/DOCHostTargetSelectionBrowserViewControllerProxy.h>
#import <libobjc.A.dylib/DOCAppearanceCustomization.h>
#import <libobjc.A.dylib/DOCRemoteViewControllerDelegate.h>

@protocol DOCTargetSelectionBrowserViewControllerDelegate, DOCRemoteAppearanceInterface, DOCServiceTargetSelectionBrowserViewControllerProxy;
@class NSURL, _UIResilientRemoteViewContainerViewController, UIViewController, NSArray, DOCAppearance, DOCConfiguration, NSString;

@interface DOCTargetSelectionBrowserViewController : UINavigationController <DOCKeyCommandDismissible, DOCHostTargetSelectionBrowserViewControllerProxy, DOCAppearanceCustomization, DOCRemoteViewControllerDelegate> {

	id<DOCTargetSelectionBrowserViewControllerDelegate> _targetSelectionDelegate;
	NSURL* _directoryURLToReveal;
	_UIResilientRemoteViewContainerViewController* _remoteViewController;
	UIViewController*<DOCRemoteAppearanceInterface> _localViewController;
	id<DOCServiceTargetSelectionBrowserViewControllerProxy> _serviceProxy;
	NSArray* _items;
	NSArray* _urls;
	DOCAppearance* _lastAppearance;
	DOCConfiguration* _configuration;

}

@property (nonatomic,retain) _UIResilientRemoteViewContainerViewController * remoteViewController;                            //@synthesize remoteViewController=_remoteViewController - In the implementation block
@property (nonatomic,retain) UIViewController*<DOCRemoteAppearanceInterface> localViewController;                             //@synthesize localViewController=_localViewController - In the implementation block
@property (nonatomic,retain) id<DOCServiceTargetSelectionBrowserViewControllerProxy> serviceProxy;                            //@synthesize serviceProxy=_serviceProxy - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSArray * urls;                                                                                  //@synthesize urls=_urls - In the implementation block
@property (nonatomic,retain) DOCAppearance * lastAppearance;                                                                  //@synthesize lastAppearance=_lastAppearance - In the implementation block
@property (nonatomic,retain) DOCConfiguration * configuration;                                                                //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic,__weak) id<DOCTargetSelectionBrowserViewControllerDelegate> targetSelectionDelegate;              //@synthesize targetSelectionDelegate=_targetSelectionDelegate - In the implementation block
@property (nonatomic,copy) NSURL * directoryURLToReveal;                                                                      //@synthesize directoryURLToReveal=_directoryURLToReveal - In the implementation block
@property (readonly) DOCAppearance * effectiveAppearance; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<DOCServiceTargetSelectionBrowserViewControllerProxy>)serviceProxy;
-(NSArray *)items;
-(NSArray *)urls;
-(_UIResilientRemoteViewContainerViewController *)remoteViewController;
-(void)setUrls:(NSArray *)arg1 ;
-(UIViewController*<DOCRemoteAppearanceInterface>)localViewController;
-(void)dismissViewController;
-(void)viewDidLoad;
-(void)setItems:(NSArray *)arg1 ;
-(void)setURLs:(id)arg1 ;
-(void)setRemoteViewController:(_UIResilientRemoteViewContainerViewController *)arg1 ;
-(id)remoteInterface;
-(void)setServiceProxy:(id<DOCServiceTargetSelectionBrowserViewControllerProxy>)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
-(DOCConfiguration *)configuration;
-(void)cancelPresentation;
-(void)_updateNavigationBar;
-(void)setConfiguration:(DOCConfiguration *)arg1 ;
-(void)effectiveAppearanceDidChange:(id)arg1 ;
-(void)filesExportedAtURLs:(id)arg1 ;
-(void)setDirectoryURLToReveal:(NSURL *)arg1 ;
-(void)remoteViewController:(id)arg1 didTerminateViewServiceWithError:(id)arg2 ;
-(BOOL)canDismissWithKeyCommand;
-(void)dismissWithKeyCommand:(id)arg1 ;
-(DOCAppearance *)lastAppearance;
-(void)setLastAppearance:(DOCAppearance *)arg1 ;
-(id)initForPickingFolderWithConfiguration:(id)arg1 ;
-(id)initForExportingWithConfiguration:(id)arg1 ;
-(NSURL *)directoryURLToReveal;
-(void)setTargetSelectionDelegate:(id<DOCTargetSelectionBrowserViewControllerDelegate>)arg1 ;
-(void)setLocalViewController:(UIViewController*<DOCRemoteAppearanceInterface>)arg1 ;
-(void)_dismissWithBlock:(/*^block*/id)arg1 ;
-(void)notifyDelegateOfCancellation;
-(id<DOCTargetSelectionBrowserViewControllerDelegate>)targetSelectionDelegate;
-(id)initWithConfiguration:(id)arg1 items:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 urls:(id)arg2 ;
@end

