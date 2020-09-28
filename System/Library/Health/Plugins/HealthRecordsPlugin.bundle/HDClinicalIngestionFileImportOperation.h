/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:33:16 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDClinicalIngestionPerAccountOperation.h>

@class NSData, NSError;

@interface HDClinicalIngestionFileImportOperation : HDClinicalIngestionPerAccountOperation {

	NSData* _documentData;
	NSError* _ingestionError;

}

@property (nonatomic,copy) NSData * documentData;                 //@synthesize documentData=_documentData - In the implementation block
@property (nonatomic,copy) NSError * ingestionError;              //@synthesize ingestionError=_ingestionError - In the implementation block
-(NSData *)documentData;
-(void)_cancelWithError:(id)arg1 ;
-(void)main;
-(void)setDocumentData:(NSData *)arg1 ;
-(void)setIngestionError:(NSError *)arg1 ;
-(NSError *)ingestionError;
@end
