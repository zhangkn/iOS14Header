/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:28 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Home/HFItemProvider.h>

@class HMHome, NSMutableSet;

@interface HFUserPhotosLibraryItemProvider : HFItemProvider {

	HMHome* _home;
	NSMutableSet* _userPhotosLibraryItems;

}

@property (nonatomic,retain) HMHome * home;                                      //@synthesize home=_home - In the implementation block
@property (nonatomic,retain) NSMutableSet * userPhotosLibraryItems;              //@synthesize userPhotosLibraryItems=_userPhotosLibraryItems - In the implementation block
-(id)items;
-(id)initWithHome:(id)arg1 ;
-(NSMutableSet *)userPhotosLibraryItems;
-(void)setUserPhotosLibraryItems:(NSMutableSet *)arg1 ;
-(id)invalidationReasons;
-(void)setHome:(HMHome *)arg1 ;
-(id)reloadItems;
-(HMHome *)home;
@end
