/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:25:59 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/IPAQuadGeometry.h>
#import <libobjc.A.dylib/IPAImageGeometry.h>

@protocol IPAImageGeometry <NSObject>
@required
-(id)identifier;
-(CGRect*)extent;
-(CGRect*)domain;

@end


@class NSString;

@interface IPAImageGeometry : NSObject <IPAQuadGeometry, IPAImageGeometry> {

	NSString* _identifier;
	CGRect _extent;
	CGRect _domain;
	Quad2d _imageQuad;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearScene:(id)arg1 ;
+(void)addRect:(CGRect)arg1 withLabel:(id)arg2 toScene:(id)arg3 ;
+(void)addQuadV0:(CGPoint)arg1 V1:(CGPoint)arg2 V2:(CGPoint)arg3 V3:(CGPoint)arg4 withLabel:(id)arg5 toScene:(id)arg6 ;
+(void)addPoint:(CGPoint)arg1 radius:(double)arg2 withLabel:(id)arg3 toScene:(id)arg4 ;
+(void)addLineFromP0:(CGPoint)arg1 P1:(CGPoint)arg2 withLabel:(id)arg3 toScene:(id)arg4 ;
+(id)inputGeometryWithImageSize:(CGSize)arg1 ;
-(id)identifier;
-(id)init;
-(CGRect)extent;
-(CGRect)domain;
-(NSString *)description;
-(Quad2d)imageQuad;
-(id)initWithIdentifier:(id)arg1 extent:(CGRect)arg2 imageQuad:(const Quad2d*)arg3 ;
-(id)initWithIdentifier:(id)arg1 extent:(CGRect)arg2 domain:(CGRect)arg3 ;
-(id)initWithIdentifier:(id)arg1 extent:(CGRect)arg2 ;
@end

