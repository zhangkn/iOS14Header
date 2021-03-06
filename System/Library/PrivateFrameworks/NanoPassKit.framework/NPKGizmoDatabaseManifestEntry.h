/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface NPKGizmoDatabaseManifestEntry : NSObject {

	NSString* _uniqueID;
	NSArray* _localManifestHashes;
	NSArray* _remoteManifestHashes;

}

@property (nonatomic,retain) NSString * uniqueID;                         //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,retain) NSArray * localManifestHashes;               //@synthesize localManifestHashes=_localManifestHashes - In the implementation block
@property (nonatomic,retain) NSArray * remoteManifestHashes;              //@synthesize remoteManifestHashes=_remoteManifestHashes - In the implementation block
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(id)description;
-(NSArray *)localManifestHashes;
-(NSArray *)remoteManifestHashes;
-(void)setLocalManifestHashes:(NSArray *)arg1 ;
-(void)setRemoteManifestHashes:(NSArray *)arg1 ;
@end

