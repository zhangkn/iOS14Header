/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIImageContent.h>

@interface _UIImageCGSVGDocumentContent : _UIImageContent {

	CGSVGDocumentRef _svgDocumentRef;

}
-(CGSVGDocumentRef)CGSVGDocument;
-(void)dealloc;
-(CGSize)sizeInPixels;
-(void)_drawWithoutEffectInRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(BOOL)isCGSVGDocument;
-(id)initWithScale:(double)arg1 ;
-(BOOL)canProvideFullResCGImage;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCGSVGDocument:(CGSVGDocumentRef)arg1 scale:(double)arg2 ;
-(unsigned long long)hash;
-(id)description;
@end
