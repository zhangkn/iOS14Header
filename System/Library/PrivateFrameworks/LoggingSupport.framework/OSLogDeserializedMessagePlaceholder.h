/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/OSLogMessagePlaceholder.h>

@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder {

	NSDictionary* _backingDict;
	_OSLogEventSerializationMetadata* _metadata;

}

@property (nonatomic,readonly) NSDictionary * backingDict;                               //@synthesize backingDict=_backingDict - In the implementation block
@property (nonatomic,readonly) _OSLogEventSerializationMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
-(int)precision;
-(id)tokens;
-(int)width;
-(_OSLogEventSerializationMetadata *)metadata;
-(id)rawString;
-(id)typeNamespace;
-(id)initWithDict:(id)arg1 metadata:(id)arg2 ;
-(NSDictionary *)backingDict;
-(id)type;
@end

