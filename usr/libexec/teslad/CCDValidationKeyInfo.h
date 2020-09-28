//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CCDValidationInfo.h"

@class NSString;

@interface CCDValidationKeyInfo : CCDValidationInfo
{
    unsigned long long _validationType;	// 8 = 0x8
    NSString *_destinationKey;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010000bb68
@property(retain, nonatomic) NSString *destinationKey; // @synthesize destinationKey=_destinationKey;
@property(nonatomic) unsigned long long validationType; // @synthesize validationType=_validationType;
- (_Bool)_validateCredentialTokenInDictionary:(id)arg1;	// IMP=0x000000010000b988
- (_Bool)_validateStringArrayInDictionary:(id)arg1;	// IMP=0x000000010000b7cc
- (_Bool)_validateStringInDictionary:(id)arg1;	// IMP=0x000000010000b724
- (_Bool)_validateNumberInDictionary:(id)arg1;	// IMP=0x000000010000b67c
- (_Bool)_validateHttpsURLStringInDictionary:(id)arg1;	// IMP=0x000000010000b558
- (_Bool)_validateCertificateArrayInDictionary:(id)arg1;	// IMP=0x000000010000b38c
- (id)_certificateDataFromBase64EncodedString:(id)arg1;	// IMP=0x000000010000b314
- (_Bool)_validateBooleanInDictionary:(id)arg1;	// IMP=0x000000010000b308
- (_Bool)validateSelfUsingValidationInfoWithDictionary:(id)arg1 resultsDictionary:(id)arg2;	// IMP=0x000000010000af5c
- (id)description;	// IMP=0x000000010000ae38
- (id)initWithName:(id)arg1 validationInfo:(id)arg2;	// IMP=0x000000010000ad34

@end
