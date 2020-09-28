/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class NSArray, BPSMultipleWatchMigrationPickerTableView, NSMutableDictionary, NSString;

@interface BPSMultipleWatchMigrationView : UIView <UITableViewDelegate, UITableViewDataSource> {

	NSArray* _migratableDevices;
	unsigned long long _style;
	BPSMultipleWatchMigrationPickerTableView* _devicesTable;
	NSMutableDictionary* _selectedStates;

}

@property (assign,nonatomic) unsigned long long style;                                             //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) BPSMultipleWatchMigrationPickerTableView * devicesTable;              //@synthesize devicesTable=_devicesTable - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * selectedStates;                                 //@synthesize selectedStates=_selectedStates - In the implementation block
@property (nonatomic,retain) NSArray * migratableDevices;                                          //@synthesize migratableDevices=_migratableDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)style;
-(void)layoutSubviews;
-(NSArray *)migratableDevices;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(NSMutableDictionary *)selectedStates;
-(void)setSelectedStates:(NSMutableDictionary *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 andStyle:(unsigned long long)arg2 ;
-(void)setMigratableDevices:(NSArray *)arg1 ;
-(id)selectedMigrationDevices;
-(double)tableHeight;
-(BPSMultipleWatchMigrationPickerTableView *)devicesTable;
-(void)setDevicesTable:(BPSMultipleWatchMigrationPickerTableView *)arg1 ;
@end
