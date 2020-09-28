/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class TKKeyPathObserver, UINavigationItem, UIViewController;

@interface TKContainerViewController : UIViewController {

	TKKeyPathObserver* _observer;
	UINavigationItem* _childNavigationItem;
	BOOL _appearing;
	UIViewController* _childViewController;

}

@property (nonatomic,retain) UIViewController * childViewController;              //@synthesize childViewController=_childViewController - In the implementation block
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dealloc;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setChildViewController:(UIViewController *)arg1 ;
-(void)viewDidLoad;
-(UIViewController *)childViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(unsigned long long)edgesForExtendedLayout;
-(void)observeChild;
-(void)updateInternals:(id)arg1 ;
@end
