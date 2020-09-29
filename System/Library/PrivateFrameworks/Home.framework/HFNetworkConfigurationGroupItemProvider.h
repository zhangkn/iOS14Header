/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:27 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/Home-Structs.h>
#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFNetworkConfigurationGroupItemProvider : HFItemProvider {

	HMHome* _home;
	NSMutableSet* _groupItems;

}

@property (nonatomic,retain) NSMutableSet * groupItems;              //@synthesize groupItems=_groupItems - In the implementation block
@property (nonatomic,readonly) HMHome * home;                        //@synthesize home=_home - In the implementation block
-(id)items;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(void)setGroupItems:(NSMutableSet *)arg1 ;
-(id)init;
-(id)invalidationReasons;
-(NSMutableSet *)groupItems;
-(id)reloadItems;
-(HMHome *)home;
@end
