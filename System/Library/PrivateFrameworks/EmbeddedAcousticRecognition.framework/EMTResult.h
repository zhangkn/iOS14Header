/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLocale, NSArray, NSString;

@interface EMTResult : NSObject <NSCopying> {

	BOOL _lowConfidence;
	float _confidence;
	NSLocale* _locale;
	NSArray* _tokens;
	NSString* _metaInfo;

}

@property (nonatomic,readonly) NSLocale * locale;                //@synthesize locale=_locale - In the implementation block
@property (nonatomic,readonly) NSArray * tokens;                 //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,readonly) float confidence;                 //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,readonly) BOOL lowConfidence;               //@synthesize lowConfidence=_lowConfidence - In the implementation block
@property (nonatomic,readonly) NSString * metaInfo;              //@synthesize metaInfo=_metaInfo - In the implementation block
-(NSArray *)tokens;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)confidence;
-(NSLocale *)locale;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)metaInfo;
-(unsigned long long)hash;
-(id)description;
-(BOOL)lowConfidence;
-(id)initWithLocale:(id)arg1 tokens:(id)arg2 confidence:(float)arg3 lowConfidence:(BOOL)arg4 metaInfo:(id)arg5 ;
@end

