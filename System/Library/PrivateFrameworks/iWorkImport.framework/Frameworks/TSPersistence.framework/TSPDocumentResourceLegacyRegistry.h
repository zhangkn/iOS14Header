/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:31:29 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TSPDocumentResourceLegacyRegistry : NSObject {

	NSDictionary* _metadataDictionary;

}

@property (readonly) NSDictionary * metadataDictionary; 
+(id)sharedSageRegistry;
+(id)sharedSageRegistryMetadataURL;
+(id)sharedTangierRegistryMetadataURL;
+(id)sharedTangierRegistry;
+(void)setSharedSageRegistryMetadataURL:(id)arg1 ;
+(void)setSharedTangierRegistryMetadataURL:(id)arg1 ;
-(id)initWithMetadataDictionary:(id)arg1 ;
-(NSDictionary *)metadataDictionary;
-(id)init;
-(id)documentResourceLegacyInfoForApplicationRelativePath:(id)arg1 ;
-(id)initWithMetadataURL:(id)arg1 ;
-(id)metadataDictionaryKeyForRelativePath:(id)arg1 ;
@end

