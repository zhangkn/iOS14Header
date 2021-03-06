/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, FCAssetHandle;

@interface FCFlintManifest : NSObject {

	NSString* _identifier;
	NSArray* _fontResourceIDs;
	FCAssetHandle* _mainDocumentAssetHandle;

}

@property (nonatomic,readonly) FCAssetHandle * mainDocumentAssetHandle;              //@synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * fontResourceIDs;                            //@synthesize fontResourceIDs=_fontResourceIDs - In the implementation block
@property (nonatomic,readonly) NSArray * anfDocumentAssetHandles; 
@property (nonatomic,readonly) BOOL isANFDocumentCached; 
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 mainDocumentAssetHandle:(id)arg2 fontResourceIDs:(id)arg3 ;
-(id)fetchANFDocumentDataProviderWithCompletion:(/*^block*/id)arg1 ;
-(NSArray *)fontResourceIDs;
-(BOOL)isANFDocumentCached;
-(FCAssetHandle *)mainDocumentAssetHandle;
-(id)fetchANFDocumentDataProviderWithPriority:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSArray *)anfDocumentAssetHandles;
@end

