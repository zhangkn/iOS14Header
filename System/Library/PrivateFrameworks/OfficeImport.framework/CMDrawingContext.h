/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class CMDrawableMapper, NSMutableArray, NSAffineTransform;

@interface CMDrawingContext : NSObject {

	CMDrawableMapper* _mapper;
	NSMutableArray* _actions;
	CGRect _frame;
	CGRect _finalFrame;
	CFDataRef _data;
	CGDataConsumerRef _dataConsumer;
	CGContextRef _cgContext;
	NSAffineTransform* _currentTransform;
	NSMutableArray* _transforms;
	CGImageRef _fillImage;

}

@property (__weak) CMDrawableMapper * mapper;              //@synthesize mapper=_mapper - In the implementation block
-(void)setLineWidth:(float)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)addPath:(CGPathRef)arg1 ;
-(CGRect)frame;
-(float)currentScaleFactor;
-(CMDrawableMapper *)mapper;
-(CGContextRef)_cgContext;
-(void)setFillImage:(CGImageRef)arg1 ;
-(id)copyPDF;
-(void)_applyTransform:(id)arg1 ;
-(void)addTransform:(id)arg1 ;
-(void)restoreLastTransform;
-(CGRect)transformRectToGroup:(CGRect)arg1 ;
-(CGRect)pdfFrame;
-(void)_copyCGContext;
-(void)_playbackActions;
-(void)_closeContext;
-(void)_addTransform:(id)arg1 ;
-(void)_restoreLastTransform;
-(CGRect)_transformRect:(CGRect)arg1 withTransform:(id)arg2 ;
-(CGAffineTransform)currentTransform;
-(void)setLineDash:(id)arg1 ;
-(void)addDebugPath:(CGPathRef)arg1 ;
-(CGRect)transformRectToPage:(CGRect)arg1 ;
-(void)setMapper:(CMDrawableMapper *)arg1 ;
@end

