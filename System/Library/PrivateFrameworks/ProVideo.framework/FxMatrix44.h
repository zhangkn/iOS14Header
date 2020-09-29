/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:41 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface FxMatrix44 : NSObject <NSSecureCoding> {

	double _mat[4][4];

}
+(BOOL)supportsSecureCoding;
-(BOOL)invert;
-(void)setMatrix:(double)arg1 ;
-(double*)matrix;
-(id)copy;
-(id)init;
-(void)transpose;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithMatrix44Data:(double)arg1 ;
-(CGPoint)transform2DPoint:(CGPoint)arg1 ;
-(id)initWithFxMatrix:(id)arg1 ;
-(BOOL)_planarInverseZ;
-(id)initWithColorMatrix44Data:(double)arg1 ;
-(void)setToIdentity;
-(BOOL)invertColorMatrixWithTolerance:(double)arg1 ;
-(FxPoint3D)transform3DPoint:(FxPoint3D)arg1 ;
@end
