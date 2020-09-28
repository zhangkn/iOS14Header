/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/MNTransitInstruction.h>

@class GEOComposedWalkingRouteSegment;

@interface MNTransitWalkingSegmentInstruction : MNTransitInstruction {

	GEOComposedWalkingRouteSegment* _walkingSegment;

}

@property (nonatomic,readonly) GEOComposedWalkingRouteSegment * walkingSegment;              //@synthesize walkingSegment=_walkingSegment - In the implementation block
+(id)instructionForWalkingSegment:(id)arg1 context:(long long)arg2 ;
-(id)instructionSet;
-(id)overridenInstructionsMapping;
-(id)initWithWalkingSegment:(id)arg1 context:(long long)arg2 ;
-(GEOComposedWalkingRouteSegment *)walkingSegment;
@end
