/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, CLSInformant, CLSProfile;

@interface CLSClue : NSObject {

	BOOL _transient;
	NSString* _key;
	id _value;
	double _confidence;
	double _relevance;
	NSDictionary* _extraParameters;
	CLSInformant* _informant;
	CLSProfile* _profile;
	NSString* _informantIdentifier;
	NSString* _profileIdentifier;
	unsigned long long _versionCount;

}

@property (copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (retain) id value;                                     //@synthesize value=_value - In the implementation block
@property (assign) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign) double relevance;                             //@synthesize relevance=_relevance - In the implementation block
@property (retain) CLSInformant * informant;                     //@synthesize informant=_informant - In the implementation block
@property (retain) CLSProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (retain) NSString * informantIdentifier;               //@synthesize informantIdentifier=_informantIdentifier - In the implementation block
@property (retain) NSString * profileIdentifier;                 //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (assign) BOOL transient;                               //@synthesize transient=_transient - In the implementation block
@property (assign) unsigned long long versionCount;              //@synthesize versionCount=_versionCount - In the implementation block
@property (retain) NSDictionary * extraParameters;               //@synthesize extraParameters=_extraParameters - In the implementation block
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(void)setProfile:(CLSProfile *)arg1 ;
-(long long)integerValue;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(unsigned long long)valueHash;
-(void)setTransient:(BOOL)arg1 ;
-(double)doubleValue;
-(void)setValue:(id)arg1 ;
-(double)confidence;
-(double)score;
-(CLSProfile *)profile;
-(unsigned long long)versionCount;
-(id)stringValue;
-(id)init;
-(long long)compare:(id)arg1 ;
-(id)value;
-(BOOL)isEqualToClue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_incrementVersionCount;
-(unsigned long long)enumValue;
-(NSDictionary *)extraParameters;
-(void)setExtraParameters:(NSDictionary *)arg1 ;
-(unsigned long long)hash;
-(double)relevance;
-(NSString *)profileIdentifier;
-(BOOL)transient;
-(id)description;
-(void)setConfidence:(double)arg1 ;
-(void)setInformant:(CLSInformant *)arg1 ;
-(void)setRelevance:(double)arg1 ;
-(NSString *)informantIdentifier;
-(void)setInformantIdentifier:(NSString *)arg1 ;
-(long long)compareScore:(id)arg1 ;
-(CLSInformant *)informant;
-(void)setVersionCount:(unsigned long long)arg1 ;
@end

