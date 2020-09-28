/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifier.h>

@class PSUICellularPlanManagerCache, PSUICellularPlanUniversalReference;

@interface PSUICellularPlanLabelSpecifier : PSSpecifier {

	PSUICellularPlanManagerCache* _planManagerCache;
	PSUICellularPlanUniversalReference* _planReference;

}

@property (nonatomic,retain) PSUICellularPlanManagerCache * planManagerCache;                 //@synthesize planManagerCache=_planManagerCache - In the implementation block
@property (nonatomic,retain) PSUICellularPlanUniversalReference * planReference;              //@synthesize planReference=_planReference - In the implementation block
-(void)setPlanManagerCache:(PSUICellularPlanManagerCache *)arg1 ;
-(PSUICellularPlanManagerCache *)planManagerCache;
-(PSUICellularPlanUniversalReference *)planReference;
-(void)setPlanReference:(PSUICellularPlanUniversalReference *)arg1 ;
-(id)cellularPlanLabel:(id)arg1 ;
-(void)updateValuesAndTitles;
-(id)initWithPlanUniversalReference:(id)arg1 planManagerCache:(id)arg2 ;
@end
