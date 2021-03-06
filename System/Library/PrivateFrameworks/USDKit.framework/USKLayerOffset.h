/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <USDKit/USDKit-Structs.h>
@interface USKLayerOffset : NSObject {

	SdfLayerOffset _layerOffset;
	double _offset;
	double _scale;

}

@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(void)setScale:(double)arg1 ;
-(void)setOffset:(double)arg1 ;
-(double)offset;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SdfLayerOffset)sdfLayerOffset;
-(id)initWithSdfLayerOffset:(SdfLayerOffset)arg1 ;
-(id)initWithOffset:(double)arg1 scale:(double)arg2 ;
@end

