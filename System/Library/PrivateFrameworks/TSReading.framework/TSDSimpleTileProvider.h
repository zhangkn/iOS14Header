/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDTileProvider.h>

@interface TSDSimpleTileProvider : TSDTileProvider {

	SEL mAction;

}

@property (assign,nonatomic) SEL action; 
-(SEL)action;
-(void)setAction:(SEL)arg1 ;
-(BOOL)isTargetOpaque;
-(void)drawTargetInLayer:(id)arg1 context:(CGContextRef)arg2 ;
-(BOOL)canTargetDrawInParallel;
@end
