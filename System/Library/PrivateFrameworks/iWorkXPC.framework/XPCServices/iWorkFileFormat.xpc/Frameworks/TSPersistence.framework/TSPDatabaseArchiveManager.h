/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:32:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSPDatabaseArchiveManager : NSObject
+(BOOL)populateDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 ;
+(BOOL)_processDistributableArchiveEntry:(id)arg1 database:(id)arg2 fileManager:(id)arg3 error:(id*)arg4 ;
+(BOOL)_processLoad:(id)arg1 classType:(int*)arg2 database:(id)arg3 fileManager:(id)arg4 error:(id*)arg5 ;
+(BOOL)_processGetRelationships:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
@end

