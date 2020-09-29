/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:18 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/VNSerializingInternal.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VNSerializing.h>
#import <libobjc.A.dylib/VNRequestRevisionProviding.h>

@class NSDictionary, NSData, NSString;

@interface VNEspressoModelImageprint : NSObject <VNSerializingInternal, NSSecureCoding, NSCopying, VNSerializing, VNRequestRevisionProviding> {

	NSDictionary* _labelsAndConfidence;
	unsigned long long _requestRevision;
	unsigned long long _elementType;
	NSData* _descriptorData;
	unsigned long long _elementCount;
	unsigned long long _lengthInBytes;
	unsigned long long _confidenceScoreType;
	NSString* _version;
	long long _distanceMode;

}

@property (retain) NSData * descriptorData;                                         //@synthesize descriptorData=_descriptorData - In the implementation block
@property (assign) unsigned long long elementCount;                                 //@synthesize elementCount=_elementCount - In the implementation block
@property (assign) unsigned long long lengthInBytes;                                //@synthesize lengthInBytes=_lengthInBytes - In the implementation block
@property (assign) long long distanceMode;                                          //@synthesize distanceMode=_distanceMode - In the implementation block
@property (copy) NSDictionary * labelsAndConfidence;                                //@synthesize labelsAndConfidence=_labelsAndConfidence - In the implementation block
@property (copy) NSString * version;                                                //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long elementType; 
@property (nonatomic,readonly) unsigned long long confidenceScoreType;              //@synthesize confidenceScoreType=_confidenceScoreType - In the implementation block
@property (nonatomic,readonly) unsigned long long serializedLength; 
@property (nonatomic,readonly) unsigned long long requestRevision; 
+(BOOL)supportsSecureCoding;
+(unsigned long long)confidenceTypeForRevision:(unsigned long long)arg1 ;
-(NSString *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)setVersion:(NSString *)arg1 ;
-(id)initWithState:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)elementCount;
-(id)serializeStateAndReturnError:(id*)arg1 ;
-(id)_initWithClassKeyMappedCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 forCodingVersion:(unsigned)arg2 ;
-(long long)distanceMode;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_VNEspressoModelImageprintSerializedLength;
-(BOOL)hasEquivalentDescriptorToImageprint:(id)arg1 ;
-(NSData *)descriptorData;
-(void)setDescriptorData:(NSData *)arg1 ;
-(void)setElementCount:(unsigned long long)arg1 ;
-(void)setLengthInBytes:(unsigned long long)arg1 ;
-(NSDictionary *)labelsAndConfidence;
-(void)setLabelsAndConfidence:(NSDictionary *)arg1 ;
-(unsigned long long)confidenceScoreType;
-(void)setDistanceMode:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6 ;
-(id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3 ;
-(unsigned long long)serializedLength;
-(unsigned long long)requestRevision;
-(unsigned long long)hash;
-(unsigned long long)elementType;
-(unsigned long long)lengthInBytes;
@end
