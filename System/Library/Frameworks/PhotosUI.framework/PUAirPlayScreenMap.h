/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:47 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@class NSMapTable;

@interface PUAirPlayScreenMap : NSObject {

	NSMapTable* _screens;

}
-(void)addDetectedAirPlayScreen:(id)arg1 ;
-(id)allAirPlayScreens;
-(id)init;
-(void)removeAirPlayScreen:(id)arg1 ;
-(unsigned long long)airPlayScreensCount;
-(id)airPlayScreenForScreen:(id)arg1 ;
@end

