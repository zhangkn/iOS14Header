/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:33 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@interface EQKitHVSpace : EQKitBox {

	double mWidth;
	double mHeight;
	double mDepth;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double layoutHeight; 
@property (nonatomic,readonly) double layoutDepth; 
-(double)depth;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)width;
-(double)height;
-(double)layoutHeight;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(double)layoutDepth;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithWidth:(double)arg1 height:(double)arg2 depth:(double)arg3 ;
@end
