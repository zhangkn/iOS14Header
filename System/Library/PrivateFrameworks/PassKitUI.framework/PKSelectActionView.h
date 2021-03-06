/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@protocol PKSelectActionViewDelegate;
@class PKPass, NSArray, NSDictionary, PKSelectActionHeader, UITableView, PKPaymentPassAction, NSString;

@interface PKSelectActionView : UIView <UITableViewDelegate, UITableViewDataSource> {

	PKPass* _pass;
	NSArray* _actions;
	NSDictionary* _balances;
	unsigned long long _actionType;
	PKSelectActionHeader* _actionHeader;
	UITableView* _tableView;
	id<PKSelectActionViewDelegate> _delegate;
	PKPaymentPassAction* _selectedAction;

}

@property (nonatomic,retain) PKPaymentPassAction * selectedAction;                        //@synthesize selectedAction=_selectedAction - In the implementation block
@property (assign,nonatomic,__weak) id<PKSelectActionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithPass:(id)arg1 actions:(id)arg2 actionType:(unsigned long long)arg3 balanceDictionary:(id)arg4 ;
-(PKPaymentPassAction *)selectedAction;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)layoutSubviews;
-(void)_addSubviews;
-(id)_balanceForTopUpAction:(id)arg1 ;
-(void)setDelegate:(id<PKSelectActionViewDelegate>)arg1 ;
-(void)setSelectedAction:(PKPaymentPassAction *)arg1 ;
-(id<PKSelectActionViewDelegate>)delegate;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end

