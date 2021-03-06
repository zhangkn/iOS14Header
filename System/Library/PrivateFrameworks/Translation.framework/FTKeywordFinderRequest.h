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

@class NSMutableDictionary, NSData, NSString, NSArray, FTRecognitionResult;

@interface FTKeywordFinderRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const KeywordFinderRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSArray * keywords; 
@property (nonatomic,readonly) FTRecognitionResult * recognition_result; 
@property (nonatomic,readonly) BOOL enable_sanitization; 
-(NSArray *)keywords;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(id)initWithFlatbuffData:(id)arg1 root:(const KeywordFinderRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::KeywordFinderRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const KeywordFinderRequest*)arg2 ;
-(FTRecognitionResult *)recognition_result;
-(NSString *)speech_id;
-(NSString *)session_id;
-(BOOL)enable_sanitization;
@end

