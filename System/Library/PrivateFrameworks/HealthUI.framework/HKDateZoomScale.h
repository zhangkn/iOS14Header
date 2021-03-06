/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/HKZoomScale.h>

@class HKValueRange, NSString;

@interface HKDateZoomScale : NSObject <HKZoomScale> {

	double _previousZoomScale;
	long long _previousZoom;
	HKValueRange* _unitZoomScaleValueRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)minDate;
-(id)maxDate;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1 ;
-(id)unitZoomScaleValueRange;
-(long long)zoomForZoomScale:(double)arg1 ;
-(double)zoomScaleForRange:(HKRange)arg1 ;
@end

