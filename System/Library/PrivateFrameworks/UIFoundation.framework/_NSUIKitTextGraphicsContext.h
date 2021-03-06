/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSTextGraphicsContextInternal.h>

@class NSString;

@interface _NSUIKitTextGraphicsContext : NSObject <NSTextGraphicsContextInternal>

@property (readonly) CGContextRef CGContext; 
@property (getter=isFlipped,readonly) BOOL flipped; 
@property (getter=isDrawingToScreen,readonly) BOOL drawingToScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)graphicsContextForApplicationFrameworkContext:(long long)arg1 ;
+(id)sharedContext;
-(BOOL)isDrawingToScreen;
-(void)saveGraphicsState;
-(CGContextRef)CGContext;
-(void)restoreGraphicsState;
-(BOOL)isFlipped;
@end

