/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSASPlatform <NSObject>
@optional
-(BOOL)shouldEnableNewFeatures;
-(void)setSuppressCellular:(BOOL)arg1;
-(int)MMCSConcurrentConnectionsCount;
-(BOOL)shouldDownloadEarliestPhotosFirst;
-(BOOL)deviceHasEnoughDiskSpaceRemainingToOperate;
-(BOOL)personIDEnabledForAlbumSharing:(id)arg1;
-(id)metadataSocketOptionsForPersonID:(id)arg1;
-(id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
-(id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
-(id)sharedStreamsProtocolVersionString;

@required
-(BOOL)shouldLogAtLevel:(int)arg1;
-(BOOL)personIDUsesProductionPushEnvironment:(id)arg1;
-(Class)pluginClass;
-(id)pushTokenForPersonID:(id)arg1;
-(void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
-(id)albumSharingDaemon;
-(id)pathAlbumSharingDir;
-(id)baseSharingURLForPersonID:(id)arg1;
-(id)personIDsEnabledForAlbumSharing;
-(BOOL)MSASIsAllowedToTransferMetadata;
-(BOOL)MSASIsAllowedToUploadAssets;
-(BOOL)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;

@end

