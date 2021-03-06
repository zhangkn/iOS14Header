/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString, FCAssetHandle, NTPBResourceRecord, FCInterestToken, NSURL;

@interface FCResource : NSObject {

	NSString* _resourceID;
	FCAssetHandle* _assetHandle;
	NTPBResourceRecord* _resourceRecord;
	FCInterestToken* _interestToken;

}

@property (nonatomic,retain) NTPBResourceRecord * resourceRecord;              //@synthesize resourceRecord=_resourceRecord - In the implementation block
@property (nonatomic,retain) FCInterestToken * interestToken;                  //@synthesize interestToken=_interestToken - In the implementation block
@property (nonatomic,readonly) NSString * resourceID;                          //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) FCAssetHandle * assetHandle;                    //@synthesize assetHandle=_assetHandle - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL; 
@property (getter=isOnDisk,nonatomic,readonly) BOOL onDisk; 
-(NTPBResourceRecord *)resourceRecord;
-(NSString *)resourceID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FCInterestToken *)interestToken;
-(NSURL *)fileURL;
-(BOOL)isOnDisk;
-(id)initWithRecord:(id)arg1 interestToken:(id)arg2 assetManager:(id)arg3 ;
-(id)initWithPermanentURLForResourceID:(id)arg1 cacheLifetimeHint:(long long)arg2 contentContext:(id)arg3 ;
-(void)setInterestToken:(FCInterestToken *)arg1 ;
-(FCAssetHandle *)assetHandle;
-(BOOL)isEqual:(id)arg1 ;
-(void)setResourceRecord:(NTPBResourceRecord *)arg1 ;
-(id)initWithResourceID:(id)arg1 assetHandle:(id)arg2 ;
-(unsigned long long)hash;
@end

