/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLCloudSharingJob.h>

@interface PLCloudSharingEnablingJob : PLCloudSharingJob {

	BOOL _enableSharing;

}

@property (assign,nonatomic) BOOL enableSharing;              //@synthesize enableSharing=_enableSharing - In the implementation block
+(void)deleteAllLocalSharedAlbumsInLibrary:(id)arg1 keepPendingAlbums:(BOOL)arg2 withReason:(id)arg3 ;
+(void)disableCloudSharingWithLibraryServicesManager:(id)arg1 ;
+(void)enableCloudSharing:(BOOL)arg1 withPathManager:(id)arg2 ;
-(long long)daemonOperation;
-(void)run;
-(void)runDaemonSide;
-(id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2 ;
-(BOOL)shouldArchiveXPCToDisk;
-(BOOL)enableSharing;
-(void)setEnableSharing:(BOOL)arg1 ;
-(void)encodeToXPCObject:(id)arg1 ;
-(id)description;
@end

