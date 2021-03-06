/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class PFUbiquityKnowledgeVector, NSDate, PFUbiquityLocation;

@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile {

	PFUbiquityKnowledgeVector* _kv;
	NSDate* _writeDate;

}

@property (nonatomic,readonly) PFUbiquityLocation * receiptFileLocation; 
@property (nonatomic,readonly) PFUbiquityKnowledgeVector * kv;                        //@synthesize kv=_kv - In the implementation block
@property (nonatomic,retain) NSDate * writeDate;                                      //@synthesize writeDate=_writeDate - In the implementation block
-(PFUbiquityKnowledgeVector *)kv;
-(id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6 ;
-(void)dealloc;
-(id)init;
-(NSDate *)writeDate;
-(id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2 ;
-(BOOL)loadFileFromLocation:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeFileToLocation:(id)arg1 error:(id*)arg2 ;
-(void)setWriteDate:(NSDate *)arg1 ;
-(PFUbiquityLocation *)receiptFileLocation;
-(id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5 ;
-(id)description;
@end

