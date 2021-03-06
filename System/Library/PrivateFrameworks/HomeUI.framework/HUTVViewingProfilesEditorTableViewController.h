/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <libobjc.A.dylib/HUItemTableModuleControllerHosting.h>

@class HUTVViewingProfilesDevicesModuleController, NSString;

@interface HUTVViewingProfilesEditorTableViewController : HUItemTableViewController <HUItemTableModuleControllerHosting> {

	BOOL _hideHeadersAndFooters;
	HUTVViewingProfilesDevicesModuleController* _tvpDevicesModuleController;

}

@property (nonatomic,readonly) HUTVViewingProfilesDevicesModuleController * tvpDevicesModuleController;              //@synthesize tvpDevicesModuleController=_tvpDevicesModuleController - In the implementation block
@property (assign,nonatomic) BOOL hideHeadersAndFooters;                                                             //@synthesize hideHeadersAndFooters=_hideHeadersAndFooters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)automaticallyUpdatesViewControllerTitle;
-(BOOL)shouldHideHeaderAboveSection:(long long)arg1 ;
-(BOOL)shouldHideFooterBelowSection:(long long)arg1 ;
-(id)moduleController:(id)arg1 presentViewControllerForRequest:(id)arg2 ;
-(id)moduleController:(id)arg1 dismissViewControllerForRequest:(id)arg2 ;
-(HUTVViewingProfilesDevicesModuleController *)tvpDevicesModuleController;
-(BOOL)hideHeadersAndFooters;
-(id)moduleController:(id)arg1 textFieldForVisibleItem:(id)arg2 ;
-(id)initWithUserItem:(id)arg1 ;
-(id)itemModuleControllers;
-(void)setHideHeadersAndFooters:(BOOL)arg1 ;
@end

