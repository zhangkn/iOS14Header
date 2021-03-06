/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PETLoggingOutlet.h>

@class NSString, NSMutableArray, NSMutableDictionary;

@interface PETTestLoggingOutlet : NSObject <PETLoggingOutlet> {

	NSString* _lastLoggedKey;
	unsigned long long _lastLoggedScalarValue;
	double _lastLoggedDistributionValue;
	NSString* _previousLoggedKey;
	unsigned long long _previousLoggedScalarValue;
	double _previousLoggedDistributionValue;
	NSMutableArray* _allLoggedKeys;
	NSMutableArray* _allLoggedValues;
	NSMutableDictionary* _keyValues;

}

@property (nonatomic,readonly) NSString * lastLoggedKey;                                  //@synthesize lastLoggedKey=_lastLoggedKey - In the implementation block
@property (nonatomic,readonly) unsigned long long lastLoggedScalarValue;                  //@synthesize lastLoggedScalarValue=_lastLoggedScalarValue - In the implementation block
@property (nonatomic,readonly) double lastLoggedDistributionValue;                        //@synthesize lastLoggedDistributionValue=_lastLoggedDistributionValue - In the implementation block
@property (nonatomic,readonly) NSString * previousLoggedKey;                              //@synthesize previousLoggedKey=_previousLoggedKey - In the implementation block
@property (nonatomic,readonly) unsigned long long previousLoggedScalarValue;              //@synthesize previousLoggedScalarValue=_previousLoggedScalarValue - In the implementation block
@property (nonatomic,readonly) double previousLoggedDistributionValue;                    //@synthesize previousLoggedDistributionValue=_previousLoggedDistributionValue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allLoggedKeys;                            //@synthesize allLoggedKeys=_allLoggedKeys - In the implementation block
@property (nonatomic,readonly) NSMutableArray * allLoggedValues;                          //@synthesize allLoggedValues=_allLoggedValues - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * keyValues;                           //@synthesize keyValues=_keyValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getValueForKey:(id)arg1 ;
-(void)logErrorForEvent:(id)arg1 featureId:(id)arg2 reason:(id)arg3 ;
-(void)setUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(void)reset;
-(void)logDoubleValue:(double)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(id)init;
-(NSString *)lastLoggedKey;
-(unsigned long long)lastLoggedScalarValue;
-(double)lastLoggedDistributionValue;
-(NSString *)previousLoggedKey;
-(unsigned long long)previousLoggedScalarValue;
-(double)previousLoggedDistributionValue;
-(NSMutableArray *)allLoggedKeys;
-(NSMutableArray *)allLoggedValues;
-(void)logUnsignedIntegerValue:(unsigned long long)arg1 forEvent:(id)arg2 featureId:(id)arg3 stringifiedProperties:(id)arg4 metaData:(id)arg5 ;
-(NSMutableDictionary *)keyValues;
@end

