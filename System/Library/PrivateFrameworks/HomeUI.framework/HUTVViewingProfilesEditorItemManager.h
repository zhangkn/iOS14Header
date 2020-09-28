/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUTVViewingProfilesDevicesItemModule;

@interface HUTVViewingProfilesEditorItemManager : HFItemManager {

	HUTVViewingProfilesDevicesItemModule* _tvpDevicesModule;

}

@property (nonatomic,readonly) HUTVViewingProfilesDevicesItemModule * tvpDevicesModule;              //@synthesize tvpDevicesModule=_tvpDevicesModule - In the implementation block
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 userItem:(id)arg2 ;
-(HUTVViewingProfilesDevicesItemModule *)tvpDevicesModule;
@end
