/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCZonePurgeOperation, NSError, BRCPrivateClientZone;

@interface BRCPrivateServerZone : BRCServerZone {

	BRCZonePurgeOperation* _deleteAllContentsOperation;
	NSError* _deleteAllContentsOperationLastError;

}

@property (nonatomic,readonly) BOOL isSharedZone; 
@property (nonatomic,readonly) BOOL isPrivateZone; 
@property (nonatomic,readonly) BRCZonePurgeOperation * deleteAllContentsOperation; 
@property (nonatomic,readonly) NSError * deleteAllContentsOperationLastError; 
@property (nonatomic,readonly) BRCPrivateClientZone * clientZone; 
-(BRCPrivateClientZone *)clientZone;
-(BOOL)isSharedZone;
-(BOOL)isPrivateZone;
-(BOOL)validateItemsLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(BOOL)validateStructureLoggingToFile:(_sFILE*)arg1 db:(id)arg2 ;
-(void)deleteAllContentsOnServerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)asPrivateZone;
-(BRCZonePurgeOperation *)deleteAllContentsOperation;
-(NSError *)deleteAllContentsOperationLastError;
-(void)_checkResultSetIsEmpty:(id)arg1 logToFile:(_sFILE*)arg2 reason:(id)arg3 result:(BOOL*)arg4 ;
-(id)itemByParentID:(id)arg1 andName:(id)arg2 ;
@end

