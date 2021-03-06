/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class BRCAccountSession, NSString;

@interface BRCZoneHealthReportOperation : _BRCOperation <BRCOperationSubclass> {

	BOOL shouldPerformAnotherBatch;
	BRCAccountSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)main;
-(BOOL)shouldPerformAnotherBatch;
-(void)_reportRecords:(id)arg1 requestID:(unsigned long long)arg2 ;
@end

