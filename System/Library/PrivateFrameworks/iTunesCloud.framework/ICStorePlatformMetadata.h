/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSString, NSArray;

@interface ICStorePlatformMetadata : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _metadataDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * metadataDictionary;               //@synthesize metadataDictionary=_metadataDictionary - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName; 
@property (nonatomic,readonly) long long artistStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * cloudUniversalLibraryID; 
@property (nonatomic,copy,readonly) NSString * collectionName; 
@property (nonatomic,readonly) long long collectionStoreAdamID; 
@property (nonatomic,copy,readonly) NSString * composerName; 
@property (nonatomic,copy,readonly) NSString * copyrightText; 
@property (nonatomic,readonly) long long discNumber; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,copy,readonly) NSDate * expirationDate;                         //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) long long explicitRating; 
@property (nonatomic,readonly) BOOL isExplicit; 
@property (nonatomic,copy,readonly) NSArray * genreNames; 
@property (nonatomic,readonly) BOOL hasLyrics; 
@property (nonatomic,readonly) BOOL hasTimeSyncedLyrics; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long movementCount; 
@property (nonatomic,copy,readonly) NSString * movementName; 
@property (nonatomic,readonly) long long movementNumber; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSArray * offers; 
@property (nonatomic,copy,readonly) NSString * playlistGlobalID; 
@property (nonatomic,copy,readonly) NSString * radioStationStringID; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,readonly) BOOL shouldShowComposer; 
@property (nonatomic,readonly) long long storeAdamID; 
@property (nonatomic,copy,readonly) NSArray * formerStoreAdamIDs; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) long long trackNumber; 
@property (nonatomic,readonly) long long trackCount; 
@property (nonatomic,copy,readonly) NSString * workName; 
@property (nonatomic,copy,readonly) NSArray * artworkInfos; 
+(id)storeServerCalendar;
-(long long)discNumber;
-(long long)trackNumber;
-(NSDate *)releaseDate;
-(long long)artistStoreAdamID;
-(BOOL)hasLyrics;
-(BOOL)isExplicit;
-(id)_storePlatformReleaseDateFormatter;
-(long long)movementNumber;
-(long long)trackCount;
-(BOOL)shouldShowComposer;
-(NSArray *)offers;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSString *)playlistGlobalID;
-(NSString *)workName;
-(id)initWithMetadataDictionary:(id)arg1 expirationDate:(id)arg2 ;
-(NSString *)radioStationStringID;
-(NSString *)kind;
-(double)duration;
-(NSDictionary *)metadataDictionary;
-(long long)movementCount;
-(NSDate *)expirationDate;
-(NSString *)title;
-(NSString *)cloudUniversalLibraryID;
-(id)offerWithType:(id)arg1 ;
-(NSString *)copyrightText;
-(BOOL)hasTimeSyncedLyrics;
-(long long)storeAdamID;
-(long long)collectionStoreAdamID;
-(NSString *)movementName;
-(NSString *)composerName;
-(NSString *)artistName;
-(NSArray *)genreNames;
-(NSString *)collectionName;
-(NSArray *)artworkInfos;
-(NSArray *)formerStoreAdamIDs;
-(NSString *)name;
-(long long)explicitRating;
@end
