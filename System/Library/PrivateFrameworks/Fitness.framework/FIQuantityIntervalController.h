/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Fitness.framework/Fitness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FIIntervalController.h>

@class NSDate, FIIntervalQuantityTrigger, FIMutableTimeSliceGroup;

@interface FIQuantityIntervalController : NSObject <FIIntervalController> {

	FIIntervalQuantityTrigger* _quantityTrigger;
	FIMutableTimeSliceGroup* _sliceGroup;

}

@property (nonatomic,readonly) BOOL intervalComplete; 
@property (nonatomic,readonly) NSDate * intervalEndDate; 
@property (nonatomic,readonly) BOOL allSlicesFinalized; 
-(void)addSample:(id)arg1 ;
-(BOOL)allSlicesFinalized;
-(BOOL)_updateTriggerWithSample:(id)arg1 ;
-(BOOL)intervalComplete;
-(id)initWithIntervalQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 trackedQuantityTypes:(id)arg4 ;
-(BOOL)isIntervalEndDate;
@end

