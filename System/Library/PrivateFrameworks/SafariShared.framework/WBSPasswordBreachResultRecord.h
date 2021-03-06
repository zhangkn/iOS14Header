/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSDate, NSDictionary;

@interface WBSPasswordBreachResultRecord : NSObject {

	NSData* _persistentIdentifier;
	unsigned long long _result;
	NSDate* _dateLastModified;

}

@property (nonatomic,readonly) NSData * persistentIdentifier;                        //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long result;                            //@synthesize result=_result - In the implementation block
@property (nonatomic,readonly) NSDate * dateLastModified;                            //@synthesize dateLastModified=_dateLastModified - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)dictionaryRepresentationsForResultRecords:(id)arg1 ;
+(id)resultRecordsFromDictionaryRepresentations:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)result;
-(NSDate *)dateLastModified;
-(id)initWithPersistentIdentifier:(id)arg1 result:(unsigned long long)arg2 dateLastModified:(id)arg3 ;
-(id)description;
-(NSData *)persistentIdentifier;
-(NSDictionary *)dictionaryRepresentation;
@end

