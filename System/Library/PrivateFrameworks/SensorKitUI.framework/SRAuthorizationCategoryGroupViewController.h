/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SensorKitUI/SensorKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/SRAuthorizationCellDelegate.h>
#import <UIKit/UITableViewDelegatePrivate.h>

@class NSBundle, NSMutableDictionary, NSArray, NSString;

@interface SRAuthorizationCategoryGroupViewController : UITableViewController <SRAuthorizationCellDelegate, UITableViewDelegatePrivate> {

	NSBundle* _appBundle;
	NSMutableDictionary* _authState;
	NSArray* _allKeys;

}

@property (nonatomic,retain) NSArray * allKeys;                            //@synthesize allKeys=_allKeys - In the implementation block
@property (nonatomic,retain) NSBundle * appBundle;                         //@synthesize appBundle=_appBundle - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * authState;              //@synthesize authState=_authState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(NSBundle *)appBundle;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(id)init;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(NSArray *)allKeys;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)setAllKeys:(NSArray *)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setAppBundle:(NSBundle *)arg1 ;
-(NSMutableDictionary *)authState;
-(void)setAuthState:(NSMutableDictionary *)arg1 ;
-(void)openPrivacy;
-(void)confirmAuthChangeForService:(id)arg1 value:(BOOL)arg2 ;
-(void)setValue:(BOOL)arg1 indexPath:(id)arg2 ;
@end
