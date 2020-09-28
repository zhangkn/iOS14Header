/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Photos/Photos-Structs.h>
@interface PHImageDecoderOptions : NSObject {

	BOOL _applyOrientationTransform;
	BOOL _optimizeForDrawing;
	BOOL _highPriority;
	BOOL _waitUntilComplete;
	long long _maximumLongSideLength;
	long long _resizeMode;

}

@property (assign,nonatomic) long long maximumLongSideLength;              //@synthesize maximumLongSideLength=_maximumLongSideLength - In the implementation block
@property (assign,nonatomic) long long resizeMode;                         //@synthesize resizeMode=_resizeMode - In the implementation block
@property (assign,nonatomic) BOOL applyOrientationTransform;               //@synthesize applyOrientationTransform=_applyOrientationTransform - In the implementation block
@property (assign,nonatomic) BOOL optimizeForDrawing;                      //@synthesize optimizeForDrawing=_optimizeForDrawing - In the implementation block
@property (assign,nonatomic) BOOL highPriority;                            //@synthesize highPriority=_highPriority - In the implementation block
@property (assign,nonatomic) BOOL waitUntilComplete;                       //@synthesize waitUntilComplete=_waitUntilComplete - In the implementation block
-(BOOL)highPriority;
-(BOOL)optimizeForDrawing;
-(long long)maximumLongSideLength;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setResizeMode:(long long)arg1 ;
-(void)setHighPriority:(BOOL)arg1 ;
-(void)setWaitUntilComplete:(BOOL)arg1 ;
-(long long)resizeMode;
-(void)setOptimizeForDrawing:(BOOL)arg1 ;
-(BOOL)waitUntilComplete;
-(BOOL)applyOrientationTransform;
-(void)setMaximumLongSideLength:(long long)arg1 ;
-(void)setApplyOrientationTransform:(BOOL)arg1 ;
@end
