/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DifferentialPrivacy/_DPCMSRecord.h>

@class NSData, NSString;

@interface _DPCMSSequenceRecord : _DPCMSRecord {

	short _sequenceHashIndex;
	NSData* _sequence;
	NSString* _plainSequence;

}

@property (nonatomic,retain) NSData * sequence;                    //@synthesize sequence=_sequence - In the implementation block
@property (assign,nonatomic) short sequenceHashIndex;              //@synthesize sequenceHashIndex=_sequenceHashIndex - In the implementation block
@property (nonatomic,copy) NSString * plainSequence;               //@synthesize plainSequence=_plainSequence - In the implementation block
+(id)entityName;
-(id)jsonString;
-(void)setSequence:(NSData *)arg1 ;
-(BOOL)copyToManagedObject:(id)arg1 ;
-(id)description;
-(NSData *)sequence;
-(BOOL)copyFromManagedObject:(id)arg1 ;
-(NSString *)plainSequence;
-(void)setPlainSequence:(NSString *)arg1 ;
-(id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(BOOL)arg6 objectId:(id)arg7 ;
-(short)sequenceHashIndex;
-(void)setSequenceHashIndex:(short)arg1 ;
@end
