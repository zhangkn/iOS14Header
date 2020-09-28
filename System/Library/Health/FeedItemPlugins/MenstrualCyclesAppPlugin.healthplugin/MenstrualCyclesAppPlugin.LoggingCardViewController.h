/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:13 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/LoggingCardTableViewObserver.h>

@interface MenstrualCyclesAppPlugin.LoggingCardViewController : UIViewController <LoggingCardTableViewObserver> {

	 displayType;
	 headerView;
	 tableView;
	 $__lazy_storage_$_footerView;
	 alphaValue;
	 configuration;
	 footerHeightConstraint;
	 editableDaySummarySection;
	 flashedScrollIndicatorOnLoad;

}
-(void)loggingCardTableViewContentSizeChanged:(CGSize)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)infoButtonTapped:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
