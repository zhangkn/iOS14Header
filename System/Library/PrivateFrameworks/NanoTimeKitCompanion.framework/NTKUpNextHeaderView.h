/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class NTKColoringLabel, CLKTextProvider;

@interface NTKUpNextHeaderView : UICollectionReusableView {

	NTKColoringLabel* _label;
	CLKTextProvider* _textProvider;

}

@property (nonatomic,copy) CLKTextProvider * textProvider;              //@synthesize textProvider=_textProvider - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CLKTextProvider *)textProvider;
-(void)setTextProvider:(CLKTextProvider *)arg1 ;
@end

