/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSDate, NSArray, NSMutableDictionary;

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest {

	BOOL _markZonesAsUserPurged;
	NSDate* _lastMissingManateeIdentityErrorDate;
	/*^block*/id _recordZoneModifiedBlock;
	NSArray* _recordZonesToSave;
	NSArray* _recordZoneIDsToDelete;
	NSMutableDictionary* _recordZoneIDByRequestID;

}

@property (nonatomic,retain) NSArray * recordZonesToSave;                                //@synthesize recordZonesToSave=_recordZonesToSave - In the implementation block
@property (nonatomic,retain) NSArray * recordZoneIDsToDelete;                            //@synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recordZoneIDByRequestID;              //@synthesize recordZoneIDByRequestID=_recordZoneIDByRequestID - In the implementation block
@property (assign,nonatomic) BOOL markZonesAsUserPurged;                                 //@synthesize markZonesAsUserPurged=_markZonesAsUserPurged - In the implementation block
@property (nonatomic,retain) NSDate * lastMissingManateeIdentityErrorDate;               //@synthesize lastMissingManateeIdentityErrorDate=_lastMissingManateeIdentityErrorDate - In the implementation block
@property (nonatomic,copy) id recordZoneModifiedBlock;                                   //@synthesize recordZoneModifiedBlock=_recordZoneModifiedBlock - In the implementation block
-(id)zoneIDsToLock;
-(void)setRecordZoneIDsToDelete:(NSArray *)arg1 ;
-(BOOL)markZonesAsUserPurged;
-(id)requestOperationClasses;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)generateRequestOperations;
-(NSArray *)recordZoneIDsToDelete;
-(void)setRecordZonesToSave:(NSArray *)arg1 ;
-(void)setMarkZonesAsUserPurged:(BOOL)arg1 ;
-(NSArray *)recordZonesToSave;
-(void)setLastMissingManateeIdentityErrorDate:(NSDate *)arg1 ;
-(NSDate *)lastMissingManateeIdentityErrorDate;
-(id)initWithOperation:(id)arg1 recordZonesToSave:(id)arg2 recordZoneIDsToDelete:(id)arg3 ;
-(void)setRecordZoneModifiedBlock:(id)arg1 ;
-(NSMutableDictionary *)recordZoneIDByRequestID;
-(void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg1 ;
-(id)recordZoneModifiedBlock;
@end
