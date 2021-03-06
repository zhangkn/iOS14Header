/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NTKFaceColorScheme, CALayer;

@interface NTKActivityDialSegment : NSObject {

	double _alpha;
	NTKFaceColorScheme* _colorScheme;
	CALayer* _arcLayer;
	CALayer* _tickLayer;
	double _tickRotation;
	double _tickScale;

}

@property (assign,nonatomic) double alpha;                                  //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,retain) NTKFaceColorScheme * colorScheme;              //@synthesize colorScheme=_colorScheme - In the implementation block
@property (nonatomic,retain) CALayer * arcLayer;                            //@synthesize arcLayer=_arcLayer - In the implementation block
@property (nonatomic,retain) CALayer * tickLayer;                           //@synthesize tickLayer=_tickLayer - In the implementation block
@property (assign,nonatomic) double tickRotation;                           //@synthesize tickRotation=_tickRotation - In the implementation block
@property (assign,nonatomic) double tickScale;                              //@synthesize tickScale=_tickScale - In the implementation block
-(double)alpha;
-(void)_updateTransform;
-(void)setAlpha:(double)arg1 ;
-(NTKFaceColorScheme *)colorScheme;
-(void)setColorScheme:(NTKFaceColorScheme *)arg1 ;
-(id)initWithHourIndex:(long long)arg1 ;
-(CALayer *)arcLayer;
-(CALayer *)tickLayer;
-(void)setTickRotation:(double)arg1 ;
-(void)setTickScale:(double)arg1 ;
-(void)setArcLayer:(CALayer *)arg1 ;
-(void)setTickLayer:(CALayer *)arg1 ;
-(double)tickRotation;
-(double)tickScale;
@end

