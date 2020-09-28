/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:00 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@class HMHome, NSNumber, NSMutableSet;

@interface HUNaturalLightingItemProvider : HFItemProvider {

	HMHome* _home;
	/*^block*/id _lightProfileFilter;
	/*^block*/id _homeKitObjectFilter;
	NSNumber* _defaultSelectedValue;
	NSMutableSet* _naturalLightingItems;

}

@property (nonatomic,retain) NSMutableSet * naturalLightingItems;              //@synthesize naturalLightingItems=_naturalLightingItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                  //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) id lightProfileFilter;                              //@synthesize lightProfileFilter=_lightProfileFilter - In the implementation block
@property (nonatomic,copy) id homeKitObjectFilter;                             //@synthesize homeKitObjectFilter=_homeKitObjectFilter - In the implementation block
@property (nonatomic,retain) NSNumber * defaultSelectedValue;                  //@synthesize defaultSelectedValue=_defaultSelectedValue - In the implementation block
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(id)invalidationReasons;
-(id)reloadItems;
-(HMHome *)home;
-(id)homeKitObjectFilter;
-(id)sourceItemForHomeKitObject:(id)arg1 ;
-(NSNumber *)defaultSelectedValue;
-(NSMutableSet *)naturalLightingItems;
-(id)lightProfileFilter;
-(void)setLightProfileFilter:(id)arg1 ;
-(void)setHomeKitObjectFilter:(id)arg1 ;
-(void)setDefaultSelectedValue:(NSNumber *)arg1 ;
-(void)setNaturalLightingItems:(NSMutableSet *)arg1 ;
@end
