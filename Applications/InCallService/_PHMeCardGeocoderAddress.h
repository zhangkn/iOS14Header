//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class CLGeocoder, CNLabeledValue, CNPostalAddress, NSDate, NSDictionary, NSString;

@interface _PHMeCardGeocoderAddress : NSObject <NSSecureCoding>
{
    _Bool _cancelingGeocode;	// 8 = 0x8
    int _tries;	// 12 = 0xc
    int _state;	// 16 = 0x10
    CNLabeledValue *_labeledValue;	// 24 = 0x18
    CNPostalAddress *_postalAddress;	// 32 = 0x20
    NSString *_entityID;	// 40 = 0x28
    CLGeocoder *_geocoder;	// 48 = 0x30
    NSDictionary *_locationDictionary;	// 56 = 0x38
    NSDate *_lastGeocodeAttempt;	// 64 = 0x40
    NSDate *_geocodeAfter;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100095f38
- (void).cxx_destruct;	// IMP=0x0000000100097430
@property(readonly) NSDate *geocodeAfter; // @synthesize geocodeAfter=_geocodeAfter;
@property(readonly) _Bool cancelingGeocode; // @synthesize cancelingGeocode=_cancelingGeocode;
@property(readonly) int state; // @synthesize state=_state;
@property(readonly) NSDate *lastGeocodeAttempt; // @synthesize lastGeocodeAttempt=_lastGeocodeAttempt;
@property(readonly) NSDictionary *locationDictionary; // @synthesize locationDictionary=_locationDictionary;
@property(readonly) int tries; // @synthesize tries=_tries;
@property(readonly) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(readonly, copy) NSString *entityID; // @synthesize entityID=_entityID;
@property(readonly) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(readonly) CNLabeledValue *labeledValue; // @synthesize labeledValue=_labeledValue;
- (id)debugDescription;	// IMP=0x0000000100097028
- (_Bool)expired;	// IMP=0x0000000100096f64
- (id)nextGeocodeAttempt;	// IMP=0x0000000100096de0
- (void)cancelGeocode;	// IMP=0x0000000100096dc8
- (void)attemptGeocodeWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096844
- (void)recalculateGeocodeAfterDate;	// IMP=0x0000000100096810
- (_Bool)checkGeocodeAfterDateForSanity;	// IMP=0x0000000100096604
- (id)createGeocodeAfterDate;	// IMP=0x000000010009635c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100096248
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100095f44
- (void)dealloc;	// IMP=0x0000000100095ee8
- (id)initWithLabeledValue:(id)arg1 entityID:(id)arg2;	// IMP=0x0000000100095e18

@end

