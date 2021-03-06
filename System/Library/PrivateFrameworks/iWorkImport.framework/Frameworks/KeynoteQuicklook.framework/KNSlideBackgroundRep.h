/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:27:08 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSReading/TSDRep.h>
#import <libobjc.A.dylib/TSDMagicMoveMatching.h>

@class CALayer, KNSlideBackgroundInfo;

@interface KNSlideBackgroundRep : TSDRep <TSDMagicMoveMatching> {

	CALayer* _blackBackgroundLayer;
	BOOL _layerNeedsUpdate;

}

@property (readonly) KNSlideBackgroundInfo * slideBackgroundInfo; 
+(id)magicMoveMatchesBetweenOutgoingObjects:(id)arg1 andIncomingObjects:(id)arg2 textureDescription:(id)arg3 ;
-(BOOL)isOpaque;
-(void)drawInContext:(CGContextRef)arg1 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(BOOL)wantsToDistortWithImagerContext;
-(id)textureForDescription:(id)arg1 ;
-(KNSlideBackgroundInfo *)slideBackgroundInfo;
@end

