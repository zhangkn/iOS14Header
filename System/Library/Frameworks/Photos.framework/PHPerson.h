/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:41:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHObject.h>

@class NSString, NSDictionary;

@interface PHPerson : PHObject {

	BOOL _inPersonNamingModel;
	unsigned short _questionType;
	unsigned short _ageType;
	unsigned short _genderType;
	unsigned short _sexType;
	NSString* _name;
	NSString* _displayName;
	long long _type;
	unsigned long long _manualOrder;
	NSString* _personUri;
	long long _faceCount;
	NSDictionary* _contactMatchingDictionary;
	long long _verifiedType;
	unsigned long long _persistedSuggestionForClient;

}

@property (nonatomic,readonly) unsigned long long persistedSuggestionForClient;                    //@synthesize persistedSuggestionForClient=_persistedSuggestionForClient - In the implementation block
@property (nonatomic,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) long long type;                                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long manualOrder;                                     //@synthesize manualOrder=_manualOrder - In the implementation block
@property (nonatomic,readonly) NSString * personUri;                                               //@synthesize personUri=_personUri - In the implementation block
@property (getter=isInPersonNamingModel,nonatomic,readonly) BOOL inPersonNamingModel;              //@synthesize inPersonNamingModel=_inPersonNamingModel - In the implementation block
@property (nonatomic,readonly) long long faceCount;                                                //@synthesize faceCount=_faceCount - In the implementation block
@property (getter=isVerified,nonatomic,readonly) BOOL verified; 
@property (nonatomic,readonly) long long verifiedType;                                             //@synthesize verifiedType=_verifiedType - In the implementation block
@property (nonatomic,readonly) unsigned short questionType;                                        //@synthesize questionType=_questionType - In the implementation block
@property (nonatomic,readonly) unsigned short ageType;                                             //@synthesize ageType=_ageType - In the implementation block
@property (nonatomic,readonly) unsigned short genderType;                                          //@synthesize genderType=_genderType - In the implementation block
@property (nonatomic,readonly) unsigned short sexType;                                             //@synthesize sexType=_sexType - In the implementation block
@property (nonatomic,readonly) NSDictionary * contactMatchingDictionary;                           //@synthesize contactMatchingDictionary=_contactMatchingDictionary - In the implementation block
+(id)managedEntityName;
+(id)displayNameFromContact:(id)arg1 ;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(BOOL)managedObjectSupportsPersonFilters;
+(BOOL)managedObjectSupportsKeyFaces;
+(id)localIdentifierExpressionForFetchRequests;
+(id)fetchPersonsWithType:(long long)arg1 options:(id)arg2 ;
+(id)fetchPersonsWithQuestionType:(unsigned short)arg1 options:(id)arg2 ;
+(id)fetchPersonsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsInAsset:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsForAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonWithFace:(id)arg1 options:(id)arg2 ;
+(id)fetchRejectedPersonsForFace:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonAssociatedWithFaceGroup:(id)arg1 options:(id)arg2 ;
+(id)fetchAssociatedPersonsGroupedByFaceGroupLocalIdentifierForFaceGroups:(id)arg1 options:(id)arg2 ;
+(id)fetchMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchInvalidMergeCandidatePersonsForPerson:(id)arg1 options:(id)arg2 ;
+(id)fetchFinalMergeTargetPersonsForPersonWithUUID:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsForContacts:(id)arg1 options:(id)arg2 ;
+(id)_assetLocalIdentifiersForAssetCollection:(id)arg1 ;
+(id)_momentLocalIdentifiersForAssetCollection:(id)arg1 ;
+(id)fetchSuggestedPersonsForAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedPersonsForFocusedAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedRecipientsForAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 options:(id)arg2 ;
+(id)batchFetchSuggestedRecipientsForAssets:(id)arg1 options:(id)arg2 ;
+(id)_fetchSuggestedPersonsForRecipients:(id)arg1 options:(id)arg2 photoLibrary:(id)arg3 ;
+(id)_fetchSuggestedRecipientsForFocusedAssetCollection:(id)arg1 assetCollection:(id)arg2 options:(id)arg3 client:(unsigned long long)arg4 ;
+(id)personToKeepForCloudConistencyFromPersons:(id)arg1 ;
+(id)fetchVerifiedPersonUUIDsGroupedByAssetUUIDForAssetUUIDs:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonCountGroupedByAssetLocalIdentifierForAssets:(id)arg1 options:(id)arg2 ;
+(id)inferredContactByPersonLocalIdentifierForPersons:(id)arg1 ;
+(id)batchFetchRelationshipInferencesForPersons:(id)arg1 ;
+(id)batchFetchContactInferencesForPersons:(id)arg1 queryOptions:(unsigned long long)arg2 ;
+(id)fetchSuggestedPersonsForClient:(unsigned long long)arg1 options:(id)arg2 ;
+(id)entityKeyMap;
+(id)fetchType;
+(long long)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 completion:(/*^block*/id)arg4 ;
+(id)personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 ;
+(id)_verifiedPersonWithLocalIdentifier:(id)arg1 fromPhotoLibrary:(id)arg2 ;
+(long long)updateKeyFacesOfPersons:(id)arg1 forceUpdate:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(long long)_personSuggestionsForPerson:(id)arg1 confirmedPersonSuggestions:(id)arg2 rejectedPersonSuggestions:(id)arg3 fromClient:(id)arg4 completion:(/*^block*/id)arg5 ;
+(id)_packageSuggestionList:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_personSuggestionMarkedAsConfirmed:(BOOL)arg1 fromPersonSuggestion:(id)arg2 ;
+(id)_convertToPersonSuggestion:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchPersonsForContactIdentifiers:(id)arg1 options:(id)arg2 ;
+(id)fetchPersonsWithOptions:(id)arg1 ;
+(id)fetchPersonsForReferences:(id)arg1 photoLibrary:(id)arg2 ;
+(id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2 ;
+(id)fullNameFromContact:(id)arg1 ;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
-(BOOL)isInPersonNamingModel;
-(long long)verifiedType;
-(NSString *)displayName;
-(unsigned short)questionType;
-(void)markAsNeedingKeyFace;
-(id)linkedContactWithKeysToFetch:(id)arg1 ;
-(id)inferredContact;
-(id)suggestedContacts;
-(unsigned long long)persistedSuggestionForClient;
-(unsigned short)ageType;
-(unsigned short)sexType;
-(long long)type;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(NSDictionary *)contactMatchingDictionary;
-(BOOL)isVerified;
-(Class)changeRequestClass;
-(id)objectReference;
-(NSString *)name;
-(id)description;
-(unsigned short)genderType;
-(NSString *)personUri;
-(long long)faceCount;
-(unsigned long long)manualOrder;
@end

