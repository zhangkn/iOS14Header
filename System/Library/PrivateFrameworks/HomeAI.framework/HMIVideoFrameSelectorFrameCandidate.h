/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSArray;

@interface HMIVideoFrameSelectorFrameCandidate : HMFObject {

	float _score;
	opaqueCMSampleBufferRef _sbuf;
	NSArray* _detections;

}

@property (readonly) opaqueCMSampleBufferRef sbuf;              //@synthesize sbuf=_sbuf - In the implementation block
@property (readonly) float score;                               //@synthesize score=_score - In the implementation block
@property (readonly) NSArray * detections;                      //@synthesize detections=_detections - In the implementation block
-(opaqueCMSampleBufferRef)sbuf;
-(float)score;
-(void)dealloc;
-(id)description;
-(NSArray *)detections;
-(id)initWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 score:(float)arg2 detections:(id)arg3 ;
@end
