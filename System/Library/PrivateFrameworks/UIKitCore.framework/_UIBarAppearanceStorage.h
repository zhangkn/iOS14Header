/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _UIBarAppearanceStorage : NSObject {

	NSMutableDictionary* _backgroundImages;

}
+(long long)typicalBarPosition;
-(BOOL)hasAnyCustomBackgroundImage;
-(void)setAllBackgroundImages:(id)arg1 ;
-(id)allBackgroundImages;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
@end
