/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVAirTransportReverseTransformationResultProtocol.h>

@class NSDictionary, NSArray, NSString, NSData;

@interface AVAirMessageParts : NSObject <AVAirTransportReverseTransformationResultProtocol> {

	NSDictionary* _uniqueHeaders;
	NSArray* _repeatedHeaders;
	BOOL _isIncomplete;
	NSString* _version;
	NSArray* _headers;
	long long _expectedBodyLength;
	NSData* _rawBodyData;
	NSData* _extraData;
	NSData* _uncompressedBodyData;

}

@property (nonatomic,readonly) id airMessage; 
@property (nonatomic,retain) NSData * uncompressedBodyData;                      //@synthesize uncompressedBodyData=_uncompressedBodyData - In the implementation block
@property (nonatomic,readonly) BOOL isIncomplete;                                //@synthesize isIncomplete=_isIncomplete - In the implementation block
@property (nonatomic,readonly) NSString * version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * headers;                                //@synthesize headers=_headers - In the implementation block
@property (nonatomic,readonly) long long expectedBodyLength;                     //@synthesize expectedBodyLength=_expectedBodyLength - In the implementation block
@property (nonatomic,readonly) NSData * rawBodyData;                             //@synthesize rawBodyData=_rawBodyData - In the implementation block
@property (nonatomic,readonly) NSData * extraData;                               //@synthesize extraData=_extraData - In the implementation block
@property (nonatomic,readonly) NSDictionary * uniqueHeaders; 
@property (nonatomic,readonly) NSArray * repeatedHeaders; 
@property (nonatomic,readonly) NSString * bodyAsUTF8Text; 
@property (nonatomic,readonly) id bodyAsJSON; 
@property (nonatomic,readonly) NSDictionary * bodyAsJSONDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)messagePartsWithData:(id)arg1 lineSeparator:(id)arg2 data:(id)arg3 headerBodySeparator:(id)arg4 data:(id)arg5 bodyLengthKey:(id)arg6 ;
+(void)registerClass:(Class)arg1 forMessageVersion:(id)arg2 ;
-(NSString *)version;
-(id)bodyAsJSON;
-(NSData *)rawBodyData;
-(void)setUncompressedBodyData:(NSData *)arg1 ;
-(id)decompressBodyUsingNamedAlgorithm:(id)arg1 ;
-(NSDictionary *)uniqueHeaders;
-(BOOL)isIncomplete;
-(BOOL)shouldCallReverseTransformerAgain;
-(id)initWithVersion:(id)arg1 headers:(id)arg2 expectedBodyLength:(long long)arg3 body:(id)arg4 extra:(id)arg5 ;
-(void)_setIncomplete;
-(NSArray *)repeatedHeaders;
-(NSString *)bodyAsUTF8Text;
-(void)_identifyUniqueAndRepeatedHeadersIfNecessary;
-(NSDictionary *)bodyAsJSONDictionary;
-(id)decompressBodyUsingAlgorithm:(long long)arg1 ;
-(long long)expectedBodyLength;
-(NSData *)uncompressedBodyData;
-(Class)_matchingClass;
-(id)airMessage;
-(NSArray *)headers;
-(NSData *)extraData;
@end
