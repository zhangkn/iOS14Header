/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMailMessageLibraryMigratorDelegate <NSObject>
@required
-(BOOL)mailMessageLibraryMigrator:(id)arg1 attachProtectedDatabaseWithName:(id)arg2 connection:(id)arg3 error:(id*)arg4;
-(void)mailMessageLibraryMigratorScheduleSpotlightReindex:(id)arg1;
-(void)mailMessageLibraryMigrator:(id)arg1 isInitializingDatabaseWithConnection:(id)arg2;
-(void)mailMessageLibraryMigrator:(id)arg1 detachProtectedDatabaseWithConnection:(id)arg2;

@end

