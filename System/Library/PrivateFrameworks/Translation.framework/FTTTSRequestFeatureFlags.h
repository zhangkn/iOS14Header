/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData;

@interface FTTTSRequestFeatureFlags : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TTSRequestFeatureFlags* _root;

}

@property (nonatomic,readonly) BOOL fe_feature; 
@property (nonatomic,readonly) BOOL fe_feature_only; 
@property (nonatomic,readonly) BOOL disable_prompts; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)fe_feature;
-(BOOL)fe_feature_only;
-(BOOL)disable_prompts;
-(id)initWithFlatbuffData:(id)arg1 root:(const TTSRequestFeatureFlags*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TTSRequestFeatureFlags>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TTSRequestFeatureFlags*)arg2 ;
@end

