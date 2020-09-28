/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIDebuggingInformationViewController.h>

@class NSArray, UITableView, NSString, _UIContentUnavailableView;

@interface _UIPrototypingMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIDebuggingInformationViewController> {

	NSArray* _allSettings;
	UITableView* _tableView;
	NSString* _domain;
	_UIContentUnavailableView* _noContentView;

}

@property (nonatomic,retain) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSString * domain;                                      //@synthesize domain=_domain - In the implementation block
@property (nonatomic,retain) NSArray * allSettings;                                  //@synthesize allSettings=_allSettings - In the implementation block
@property (nonatomic,retain) _UIContentUnavailableView * noContentView;              //@synthesize noContentView=_noContentView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNoContentView:(_UIContentUnavailableView *)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(NSArray *)allSettings;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)loadView;
-(NSString *)domain;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)_reloadSettings:(id)arg1 ;
-(void)_resetSettings:(id)arg1 ;
-(void)setAllSettings:(NSArray *)arg1 ;
-(_UIContentUnavailableView *)noContentView;
@end
