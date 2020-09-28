/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <Foundation/NSOperation.h>

@class HMICameraVideoFrame, NSError;

@interface HMIRegionOfInterestOperation : NSOperation {

	CVBufferRef _pixelBuffer;
	HMICameraVideoFrame* _frame;
	NSError* _error;
	CGSize _size;
	CGRect _cropRect;

}

@property (readonly) CVBufferRef pixelBuffer;                         //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) CGRect cropRect;                                 //@synthesize cropRect=_cropRect - In the implementation block
@property (__weak,readonly) HMICameraVideoFrame * frame;              //@synthesize frame=_frame - In the implementation block
@property (readonly) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(CGRect)cropRect;
-(void)dealloc;
-(NSError *)error;
-(HMICameraVideoFrame *)frame;
-(CGSize)size;
-(CVBufferRef)pixelBuffer;
-(void)main;
-(id)initWithFrame:(id)arg1 size:(CGSize)arg2 ;
@end
