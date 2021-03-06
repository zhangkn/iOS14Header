/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUColorWheelSpace <NSObject>
@property (nonatomic,readonly) unsigned long long type; 
@property (assign,nonatomic) unsigned long long mirroringBiasAxis; 
@optional
-(unsigned long long)mirroringBiasAxis;
-(void)setMirroringBiasAxis:(unsigned long long)arg1;

@required
-(unsigned long long)type;
-(UIEdgeInsets*)colorForCoordinate:(CGPoint)arg1;
-(CGPoint*)coordinateForColor:(UIEdgeInsets)arg1 isValid:(out BOOL*)arg2;

@end

