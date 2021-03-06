/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WGWidgetHostingViewControllerDelegate.h>
#import <libobjc.A.dylib/WGWidgetHostingViewControllerHost.h>
#import <libobjc.A.dylib/WGWidgetExtensionVisibilityProviding.h>

@protocol WGWidgetViewControllerDelegate;
@class WGWidgetHostingViewController, UITraitCollection, NSString;

@interface WGWidgetViewController : UIViewController <WGWidgetHostingViewControllerDelegate, WGWidgetHostingViewControllerHost, WGWidgetExtensionVisibilityProviding> {

	WGWidgetHostingViewController* _widgetHost;
	id<WGWidgetViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) WGWidgetHostingViewController * widgetHost;                          //@synthesize widgetHost=_widgetHost - In the implementation block
@property (assign,nonatomic,__weak) id<WGWidgetViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITraitCollection * requestedTraitCollectionOverride; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)registerWidgetForRefreshEvents:(id)arg1 ;
-(CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(CGSize)arg2 ;
-(BOOL)isWidgetExtensionVisible:(id)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_platterViewIfLoaded;
-(void)unregisterWidgetForRefreshEvents:(id)arg1 ;
-(WGWidgetHostingViewController *)widgetHost;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(void)loadView;
-(void)setWidgetHost:(WGWidgetHostingViewController *)arg1 ;
-(void)setDelegate:(id<WGWidgetViewControllerDelegate>)arg1 ;
-(long long)largestAvailableDisplayModeForWidget:(id)arg1 ;
-(id)_platterViewLoadingIfNecessary:(BOOL)arg1 ;
-(void)widget:(id)arg1 didRemoveSnapshotAtURL:(id)arg2 ;
-(long long)userSpecifiedDisplayModeForWidget:(id)arg1 ;
-(id<WGWidgetViewControllerDelegate>)delegate;
-(void)remoteViewControllerViewDidAppearForWidget:(id)arg1 ;
-(CGSize)maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2 ;
-(void)_addWidgetButtonTapped:(id)arg1 ;
-(void)remoteViewControllerDidConnectForWidget:(id)arg1 ;
-(id)initWithWidgetInfo:(id)arg1 ;
-(UITraitCollection *)requestedTraitCollectionOverride;
@end

