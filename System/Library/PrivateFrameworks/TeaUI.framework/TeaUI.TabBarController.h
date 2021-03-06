/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITabBarController.h>
#import <UIKit/UITabBarControllerDelegate.h>

@class NSArray;

@interface TeaUI.TabBarController : UITabBarController <UITabBarControllerDelegate> {

	 barView;
	 tabBarOrder;
	 primaryTabBarItemIdentifier;
	 extendedDelegate;
	 styler;

}

@property (copy,nonatomic) NSArray * viewControllers; 
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(void)setViewControllers:(NSArray *)arg1 ;
-(NSArray *)viewControllers;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
@end

