/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsUI/HealthRecordsUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class HRProfile, HKClinicalAccount, NSArray, UIButton, UITableView, UIView, NSString;

@interface WDClinicalAccountEducationViewController : HKViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _promptForDataCollection;
	/*^block*/id _completionBlock;
	HRProfile* _profile;
	HKClinicalAccount* _account;
	NSArray* _sections;
	UIButton* _nextButton;
	UITableView* _tableView;
	UIView* _footerView;

}

@property (nonatomic,readonly) HRProfile * profile;                           //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy,readonly) HKClinicalAccount * account;              //@synthesize account=_account - In the implementation block
@property (assign,nonatomic) BOOL promptForDataCollection;                    //@synthesize promptForDataCollection=_promptForDataCollection - In the implementation block
@property (nonatomic,retain) NSArray * sections;                              //@synthesize sections=_sections - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                           //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                             //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                //@synthesize completionBlock=_completionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCompletionBlock:(id)arg1 ;
-(void)setFooterView:(UIView *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(id)completionBlock;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)_setupConstraints;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setNextButton:(UIButton *)arg1 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)updateNextButton;
-(void)setSections:(NSArray *)arg1 ;
-(HRProfile *)profile;
-(BOOL)tableView:(id)arg1 shouldDrawTopSeparatorForSection:(long long)arg2 ;
-(HKClinicalAccount *)account;
-(void)viewDidLoad;
-(UIView *)footerView;
-(void)_setupSubviews;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)loadView;
-(BOOL)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setPromptForDataCollection:(BOOL)arg1 ;
-(BOOL)promptForDataCollection;
-(void)fetchShouldPromptForDataCollection;
-(void)_navigationAction:(id)arg1 ;
-(void)_computeSections;
-(id)initWithProfile:(id)arg1 account:(id)arg2 ;
-(NSArray *)sections;
-(UIButton *)nextButton;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

