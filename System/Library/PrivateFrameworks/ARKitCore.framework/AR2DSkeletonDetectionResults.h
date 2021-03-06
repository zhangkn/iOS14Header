/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <ARKitCore/AREspressoTensorResultData.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface AR2DSkeletonDetectionResults : NSObject <AREspressoTensorResultData, NSCopying> {

	NSArray* _detectedSkeletons;
	double _timestamp;

}

@property (nonatomic,copy) NSArray * detectedSkeletons;              //@synthesize detectedSkeletons=_detectedSkeletons - In the implementation block
@property (assign,nonatomic) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)init;
-(NSArray *)detectedSkeletons;
-(void)setDetectedSkeletons:(NSArray *)arg1 ;
@end

