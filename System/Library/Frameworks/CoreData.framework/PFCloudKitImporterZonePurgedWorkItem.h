/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitImporterWorkItem.h>

@class CKRecordZoneID;

@interface PFCloudKitImporterZonePurgedWorkItem : PFCloudKitImporterWorkItem {

	CKRecordZoneID* _purgedRecordZoneID;

}

@property (nonatomic,readonly) CKRecordZoneID * purgedRecordZoneID;              //@synthesize purgedRecordZoneID=_purgedRecordZoneID - In the implementation block
-(id)initWithPurgedRecordZoneID:(id)arg1 options:(id)arg2 request:(id)arg3 ;
-(BOOL)wipeAllCloudDataFromStore:(id)arg1 andPurgeHistoryToken:(BOOL)arg2 error:(id*)arg3 ;
-(CKRecordZoneID *)purgedRecordZoneID;
-(void)dealloc;
-(void)doWorkForStore:(id)arg1 inMonitor:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)description;
@end

