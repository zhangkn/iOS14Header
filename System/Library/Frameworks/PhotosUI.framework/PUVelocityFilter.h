/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:54:55 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUI/PUDynamicValueFilter.h>

@interface PUVelocityFilter : PUDynamicValueFilter {

	double _lastValue;
	double _lastTime;
	double _velocity;
	double _previousVelocity;
	double _filteredVelocity;
	double __minimumSampleInterval;
	double __previousVelocityWeight;

}

@property (assign,setter=_setMinimumSampleInterval:,nonatomic) double _minimumSampleInterval;                //@synthesize _minimumSampleInterval=__minimumSampleInterval - In the implementation block
@property (assign,setter=_setPreviousVelocityWeight:,nonatomic) double _previousVelocityWeight;              //@synthesize _previousVelocityWeight=__previousVelocityWeight - In the implementation block
+(id)gestureVelocityFilter;
-(double)_minimumSampleInterval;
-(void)_setMinimumSampleInterval:(double)arg1 ;
-(double)_previousVelocityWeight;
-(void)_setPreviousVelocityWeight:(double)arg1 ;
-(double)outputValue;
-(id)init;
-(void)setInputValue:(double)arg1 ;
@end
