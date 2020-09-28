/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ATXInformationHeuristicRefreshTrigger.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding;
@class _CDContextualKeyPath, NSObject, _CDContextualChangeRegistration;

@interface ATXInformationHeuristicRefreshContextChangeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {

	_CDContextualKeyPath* _contextKeyPath;
	NSObject*<NSCopying>*<NSSecureCoding> _value;
	double _minDurationInPreviousState;
	_CDContextualChangeRegistration* _registration;

}
+(BOOL)supportsSecureCoding;
-(void)_start;
-(void)_stop;
-(id)initWithCDContextualKeyPath:(id)arg1 equalToValue:(id)arg2 withMinimumDurationInPreviousState:(double)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end
