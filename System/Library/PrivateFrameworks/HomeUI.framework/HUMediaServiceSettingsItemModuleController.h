/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>

@protocol HUMediaServiceSettingsItemModuleControllerDelegate;
@interface HUMediaServiceSettingsItemModuleController : HUItemTableModuleController {

	id<HUMediaServiceSettingsItemModuleControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HUMediaServiceSettingsItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(void)setDelegate:(id<HUMediaServiceSettingsItemModuleControllerDelegate>)arg1 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id<HUMediaServiceSettingsItemModuleControllerDelegate>)delegate;
@end

