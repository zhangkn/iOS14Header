/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDFetchRecordsOperation.h>

@class CKRecord;

@interface CKDGetUserRecordOperation : CKDFetchRecordsOperation {

	CKRecord* _userRecord;

}

@property (nonatomic,retain) CKRecord * userRecord;              //@synthesize userRecord=_userRecord - In the implementation block
-(int)operationType;
-(id)analyticsPayload;
-(void)main;
-(CKRecord *)userRecord;
-(void)setUserRecord:(CKRecord *)arg1 ;
-(void)fetchRecordsWithIDs:(id)arg1 andFullRecords:(id)arg2 ;
@end

