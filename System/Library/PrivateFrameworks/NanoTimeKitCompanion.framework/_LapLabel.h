/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UILabel.h>

@interface _LapLabel : UILabel {

	BOOL _split;
	unsigned long long _lap;

}

@property (assign,nonatomic) unsigned long long lap;              //@synthesize lap=_lap - In the implementation block
-(unsigned long long)lap;
-(void)split;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLap:(unsigned long long)arg1 ;
@end

