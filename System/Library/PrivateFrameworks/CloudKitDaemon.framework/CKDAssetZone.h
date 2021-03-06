/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKDAssetZoneKey, NSMutableOrderedSet, NSMutableDictionary;

@interface CKDAssetZone : NSObject {

	CKDAssetZoneKey* _assetZoneKey;
	NSMutableOrderedSet* _assetRecords;
	NSMutableDictionary* _assetRecordsByRecordID;

}

@property (nonatomic,retain) NSMutableOrderedSet * assetRecords;                        //@synthesize assetRecords=_assetRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetRecordsByRecordID;              //@synthesize assetRecordsByRecordID=_assetRecordsByRecordID - In the implementation block
@property (nonatomic,retain) CKDAssetZoneKey * assetZoneKey;                            //@synthesize assetZoneKey=_assetZoneKey - In the implementation block
-(id)CKPropertiesDescription;
-(NSMutableOrderedSet *)assetRecords;
-(id)description;
-(void)addMMCSItem:(id)arg1 ;
-(void)addRereferencedMMCSItem:(id)arg1 ;
-(void)addMMCSSectionItem:(id)arg1 ;
-(CKDAssetZoneKey *)assetZoneKey;
-(id)initWithAssetZoneKey:(id)arg1 ;
-(void)setAssetZoneKey:(CKDAssetZoneKey *)arg1 ;
-(void)setAssetRecords:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)assetRecordsByRecordID;
-(void)setAssetRecordsByRecordID:(NSMutableDictionary *)arg1 ;
@end

