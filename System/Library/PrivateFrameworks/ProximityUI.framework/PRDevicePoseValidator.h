/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:03 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_log;
@class NSObject, PRPose;

@interface PRDevicePoseValidator : NSObject {

	NSObject*<OS_os_log> _logger;
	double _maximumSpeed;
	PRPose* _previousPose;

}

@property (assign,nonatomic) double maximumSpeed;                //@synthesize maximumSpeed=_maximumSpeed - In the implementation block
@property (nonatomic,retain) PRPose * previousPose;              //@synthesize previousPose=_previousPose - In the implementation block
-(void)setMaximumSpeed:(double)arg1 ;
-(PRPose *)previousPose;
-(void)setPreviousPose:(PRPose *)arg1 ;
-(double)maximumSpeed;
-(id)initWithMaximumSpeed:(double)arg1 ;
-(BOOL)validatePose:(id)arg1 ;
@end

