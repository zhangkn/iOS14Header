/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDateInterval, NSUUID, NSString, _DKEventStream, NSArray, NSDictionary;

@interface _DKHistogram : NSObject <NSSecureCoding> {

	NSMutableDictionary* _histogram;
	unsigned long long _countOverAllValues;
	NSDateInterval* _interval;
	NSUUID* _identifier;
	NSString* _customIdentifier;
	_DKEventStream* _stream;
	NSArray* _deviceIdentifiers;

}

@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * customIdentifier;                        //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,retain) NSDateInterval * interval;                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSDictionary * histogram;                           //@synthesize histogram=_histogram - In the implementation block
@property (assign,nonatomic) unsigned long long countOverAllValues;              //@synthesize countOverAllValues=_countOverAllValues - In the implementation block
@property (nonatomic,retain) _DKEventStream * stream;                            //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSArray * deviceIdentifiers;                        //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
-(_DKEventStream *)stream;
-(void)setStream:(_DKEventStream *)arg1 ;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(unsigned long long)countOverAllValues;
-(NSUUID *)identifier;
-(void)addValue:(id)arg1 ;
-(id)countDictionary;
-(unsigned long long)countForValue:(id)arg1 ;
-(double)relativeFrequencyForValue:(id)arg1 ;
-(void)subtractHistogram:(id)arg1 ;
-(void)setDeviceIdentifiers:(NSArray *)arg1 ;
-(NSDateInterval *)interval;
-(void)subtractValue:(id)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(id)init;
-(id)initWithManagedObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)insertInManagedObjectContext:(id)arg1 ;
-(void)setHistogram:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInterval:(NSDateInterval *)arg1 ;
-(NSDictionary *)histogram;
-(void)_addPropertiesFrom:(id)arg1 ;
-(void)setCountOverAllValues:(unsigned long long)arg1 ;
-(void)addHistogram:(id)arg1 ;
-(void)addValue:(id)arg1 withCount:(double)arg2 ;
-(NSArray *)deviceIdentifiers;
-(double)countForValueDouble:(id)arg1 ;
-(id)description;
-(NSString *)customIdentifier;
-(id)initWithHistogram:(id)arg1 ;
@end
