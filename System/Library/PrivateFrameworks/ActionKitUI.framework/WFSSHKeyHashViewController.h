/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewController.h>

@class NSString, WFTableDataSource;

@interface WFSSHKeyHashViewController : UITableViewController {

	NSString* _hashString;
	WFTableDataSource* _dataSource;

}

@property (nonatomic,copy,readonly) NSString * hashString;                  //@synthesize hashString=_hashString - In the implementation block
@property (nonatomic,readonly) WFTableDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)viewDidLoad;
-(NSString *)hashString;
-(WFTableDataSource *)dataSource;
-(id)initWithHashString:(id)arg1 title:(id)arg2 ;
@end

