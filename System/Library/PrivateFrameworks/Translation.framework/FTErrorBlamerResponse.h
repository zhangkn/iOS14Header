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

@class NSMutableDictionary, NSData, NSString;

@interface FTErrorBlamerResponse : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const ErrorBlamerResponse* _root;

}

@property (nonatomic,readonly) int return_code; 
@property (nonatomic,readonly) NSString * return_str; 
@property (nonatomic,readonly) NSString * blamer_report; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ErrorBlamerResponse*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::ErrorBlamerResponse>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const ErrorBlamerResponse*)arg2 ;
-(int)return_code;
-(NSString *)return_str;
-(NSString *)blamer_report;
@end

