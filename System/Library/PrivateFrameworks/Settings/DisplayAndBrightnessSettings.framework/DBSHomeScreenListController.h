/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Settings/DisplayAndBrightnessSettings.framework/DisplayAndBrightnessSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DBSDeviceAppIconSizeTableViewCellDelegate.h>

@class SBSHomeScreenService, NSString;

@interface DBSHomeScreenListController : PSListController <DBSDeviceAppIconSizeTableViewCellDelegate> {

	SBSHomeScreenService* __homeScreenService;

}

@property (nonatomic,retain) SBSHomeScreenService * _homeScreenService;              //@synthesize _homeScreenService=__homeScreenService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)init;
-(id)specifiers;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(SBSHomeScreenService *)_homeScreenService;
-(void)set_homeScreenService:(SBSHomeScreenService *)arg1 ;
-(void)_updateDeviceAppIconSizeWithNewOption:(unsigned long long)arg1 ;
-(void)deviceAppIconSizeTableViewCellUserDidTapOnMoreOption:(id)arg1 ;
-(void)deviceAppIconSizeTableViewCellUserDidTapOnBiggerOption:(id)arg1 ;
-(id)getTodayViewOnHomeScreenEnabledForSpecifier:(id)arg1 ;
-(void)setTodayViewOnHomeScreenEnabled:(id)arg1 forSpecifier:(id)arg2 ;
@end
