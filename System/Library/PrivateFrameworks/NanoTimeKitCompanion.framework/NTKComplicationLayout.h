/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface NTKComplicationLayout : NSObject {

	NSMutableArray* _stateLayouts;

}
+(id)layoutWithDefaultRule:(id)arg1 ;
-(id)init;
-(void)setDefaultLayoutRule:(id)arg1 forState:(long long)arg2 ;
-(void)setOverrideLayoutRule:(id)arg1 forState:(long long)arg2 layoutOverride:(long long)arg3 ;
-(id)defaultLayoutRuleForState:(long long)arg1 ;
-(id)_layoutForState:(long long)arg1 ;
-(id)layoutRuleForComplicationState:(long long)arg1 layoutOverride:(long long)arg2 ;
@end
