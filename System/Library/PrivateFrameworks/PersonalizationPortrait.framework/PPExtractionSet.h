/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:18 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface PPExtractionSet : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _namedEntityRecords;
	NSArray* _topicRecords;

}

@property (nonatomic,readonly) NSArray * namedEntityRecords;              //@synthesize namedEntityRecords=_namedEntityRecords - In the implementation block
@property (nonatomic,readonly) NSArray * topicRecords;                    //@synthesize topicRecords=_topicRecords - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithNamedEntityRecords:(id)arg1 topicRecords:(id)arg2 ;
-(NSArray *)namedEntityRecords;
-(NSArray *)topicRecords;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEmpty;
-(id)merge:(id)arg1 ;
@end
