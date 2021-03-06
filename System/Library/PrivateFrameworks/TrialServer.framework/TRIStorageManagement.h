/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRIStorageManagementProtocol.h>

@interface TRIStorageManagement : NSObject <TRIStorageManagementProtocol>
-(BOOL)requestTrialStorageResetOnNextLaunch;
-(BOOL)prepareTrialStorage;
-(BOOL)_readSchemaVersion:(unsigned*)arg1 ;
-(BOOL)_readDeviceIdWithSchemaVersion:(unsigned)arg1 intoData:(id*)arg2 ;
-(BOOL)_clearStorage;
-(BOOL)_writeDeviceIdWithData:(id)arg1 schemaVersion:(unsigned)arg2 ;
-(BOOL)_writeSchemaVersion:(unsigned)arg1 ;
-(BOOL)_clearContainerStorage;
-(BOOL)_runNamespaceDatabaseBlock:(/*^block*/id)arg1 ;
@end

