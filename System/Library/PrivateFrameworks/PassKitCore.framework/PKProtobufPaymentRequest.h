/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, PKProtobufPaymentMerchantSession, NSMutableArray;

@interface PKProtobufPaymentRequest : PBRequest <NSCopying> {

	unsigned _apiType;
	NSData* _applicationData;
	NSData* _billingContact;
	NSString* _countryCode;
	NSString* _currencyCode;
	unsigned _merchantCapabilities;
	NSString* _merchantIdentifier;
	PKProtobufPaymentMerchantSession* _merchantSession;
	NSString* _originatingURL;
	unsigned _requiredBillingAddressFields;
	NSMutableArray* _requiredBillingContactFields;
	unsigned _requiredShippingAddressFields;
	NSMutableArray* _requiredShippingContactFields;
	NSData* _shippingContact;
	NSMutableArray* _shippingMethods;
	NSMutableArray* _summaryItems;
	NSMutableArray* _supportedCountries;
	NSMutableArray* _supportedNetworks;
	NSMutableArray* _thumbnailURLs;
	BOOL _expectsMerchantSession;
	SCD_Struct_PK16 _has;

}

@property (nonatomic,readonly) BOOL hasMerchantIdentifier; 
@property (nonatomic,retain) NSString * merchantIdentifier;                                   //@synthesize merchantIdentifier=_merchantIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                                          //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrencyCode; 
@property (nonatomic,retain) NSString * currencyCode;                                         //@synthesize currencyCode=_currencyCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedNetworks;                              //@synthesize supportedNetworks=_supportedNetworks - In the implementation block
@property (assign,nonatomic) BOOL hasMerchantCapabilities; 
@property (assign,nonatomic) unsigned merchantCapabilities;                                   //@synthesize merchantCapabilities=_merchantCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredBillingAddressFields; 
@property (assign,nonatomic) unsigned requiredBillingAddressFields;                           //@synthesize requiredBillingAddressFields=_requiredBillingAddressFields - In the implementation block
@property (assign,nonatomic) BOOL hasRequiredShippingAddressFields; 
@property (assign,nonatomic) unsigned requiredShippingAddressFields;                          //@synthesize requiredShippingAddressFields=_requiredShippingAddressFields - In the implementation block
@property (nonatomic,readonly) BOOL hasBillingContact; 
@property (nonatomic,retain) NSData * billingContact;                                         //@synthesize billingContact=_billingContact - In the implementation block
@property (nonatomic,readonly) BOOL hasShippingContact; 
@property (nonatomic,retain) NSData * shippingContact;                                        //@synthesize shippingContact=_shippingContact - In the implementation block
@property (nonatomic,retain) NSMutableArray * summaryItems;                                   //@synthesize summaryItems=_summaryItems - In the implementation block
@property (nonatomic,retain) NSMutableArray * shippingMethods;                                //@synthesize shippingMethods=_shippingMethods - In the implementation block
@property (nonatomic,readonly) BOOL hasApplicationData; 
@property (nonatomic,retain) NSData * applicationData;                                        //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginatingURL; 
@property (nonatomic,retain) NSString * originatingURL;                                       //@synthesize originatingURL=_originatingURL - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantSession; 
@property (nonatomic,retain) PKProtobufPaymentMerchantSession * merchantSession;              //@synthesize merchantSession=_merchantSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * thumbnailURLs;                                  //@synthesize thumbnailURLs=_thumbnailURLs - In the implementation block
@property (assign,nonatomic) BOOL hasExpectsMerchantSession; 
@property (assign,nonatomic) BOOL expectsMerchantSession;                                     //@synthesize expectsMerchantSession=_expectsMerchantSession - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredShippingContactFields;                  //@synthesize requiredShippingContactFields=_requiredShippingContactFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * requiredBillingContactFields;                   //@synthesize requiredBillingContactFields=_requiredBillingContactFields - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedCountries;                             //@synthesize supportedCountries=_supportedCountries - In the implementation block
@property (assign,nonatomic) BOOL hasApiType; 
@property (assign,nonatomic) unsigned apiType;                                                //@synthesize apiType=_apiType - In the implementation block
+(Class)supportedNetworksType;
+(Class)summaryItemsType;
+(Class)thumbnailURLsType;
+(Class)requiredShippingContactFieldsType;
+(Class)requiredBillingContactFieldsType;
+(Class)supportedCountriesType;
+(Class)shippingMethodsType;
-(NSString *)currencyCode;
-(BOOL)hasCurrencyCode;
-(NSData *)shippingContact;
-(unsigned)apiType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addSupportedNetworks:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(unsigned long long)summaryItemsCount;
-(BOOL)hasApplicationData;
-(NSString *)countryCode;
-(void)addRequiredShippingContactFields:(id)arg1 ;
-(void)addRequiredBillingContactFields:(id)arg1 ;
-(void)clearSummaryItems;
-(void)addSupportedCountries:(id)arg1 ;
-(unsigned long long)supportedNetworksCount;
-(void)clearSupportedNetworks;
-(id)supportedNetworksAtIndex:(unsigned long long)arg1 ;
-(id)summaryItemsAtIndex:(unsigned long long)arg1 ;
-(void)setHasApiType:(BOOL)arg1 ;
-(unsigned long long)thumbnailURLsCount;
-(void)clearThumbnailURLs;
-(id)thumbnailURLsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requiredShippingContactFieldsCount;
-(void)clearRequiredShippingContactFields;
-(id)requiredShippingContactFieldsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)requiredBillingContactFieldsCount;
-(void)clearRequiredBillingContactFields;
-(unsigned long long)supportedCountriesCount;
-(id)requiredBillingContactFieldsAtIndex:(unsigned long long)arg1 ;
-(void)clearSupportedCountries;
-(id)supportedCountriesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMerchantCapabilities;
-(void)setHasMerchantCapabilities:(BOOL)arg1 ;
-(void)setHasRequiredBillingAddressFields:(BOOL)arg1 ;
-(BOOL)hasRequiredBillingAddressFields;
-(BOOL)hasRequiredShippingAddressFields;
-(void)setHasRequiredShippingAddressFields:(BOOL)arg1 ;
-(BOOL)hasOriginatingURL;
-(void)setHasExpectsMerchantSession:(BOOL)arg1 ;
-(BOOL)hasExpectsMerchantSession;
-(BOOL)expectsMerchantSession;
-(void)setApplicationData:(NSData *)arg1 ;
-(void)setBillingContact:(NSData *)arg1 ;
-(void)setShippingContact:(NSData *)arg1 ;
-(BOOL)hasBillingContact;
-(NSData *)billingContact;
-(BOOL)hasShippingContact;
-(NSMutableArray *)thumbnailURLs;
-(NSMutableArray *)supportedNetworks;
-(unsigned)merchantCapabilities;
-(NSString *)originatingURL;
-(void)setOriginatingURL:(NSString *)arg1 ;
-(void)setShippingMethods:(NSMutableArray *)arg1 ;
-(PKProtobufPaymentMerchantSession *)merchantSession;
-(void)setCurrencyCode:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSupportedCountries:(NSMutableArray *)arg1 ;
-(void)setSupportedNetworks:(NSMutableArray *)arg1 ;
-(void)setApiType:(unsigned)arg1 ;
-(unsigned)requiredBillingAddressFields;
-(void)setRequiredBillingAddressFields:(unsigned)arg1 ;
-(unsigned)requiredShippingAddressFields;
-(void)setThumbnailURLs:(NSMutableArray *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequiredShippingAddressFields:(unsigned)arg1 ;
-(BOOL)hasMerchantSession;
-(void)addThumbnailURLs:(id)arg1 ;
-(void)addSummaryItems:(id)arg1 ;
-(void)addShippingMethods:(id)arg1 ;
-(NSMutableArray *)summaryItems;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasCountryCode;
-(unsigned long long)shippingMethodsCount;
-(void)clearShippingMethods;
-(id)shippingMethodsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasMerchantIdentifier;
-(NSMutableArray *)supportedCountries;
-(NSMutableArray *)requiredShippingContactFields;
-(NSMutableArray *)requiredBillingContactFields;
-(NSMutableArray *)shippingMethods;
-(BOOL)hasApiType;
-(NSData *)applicationData;
-(void)setMerchantSession:(PKProtobufPaymentMerchantSession *)arg1 ;
-(void)setExpectsMerchantSession:(BOOL)arg1 ;
-(void)setMerchantCapabilities:(unsigned)arg1 ;
-(unsigned long long)hash;
-(NSString *)merchantIdentifier;
-(void)setMerchantIdentifier:(NSString *)arg1 ;
-(void)setSummaryItems:(NSMutableArray *)arg1 ;
-(void)setRequiredShippingContactFields:(NSMutableArray *)arg1 ;
-(void)setRequiredBillingContactFields:(NSMutableArray *)arg1 ;
-(id)description;
-(void)setCountryCode:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
@end
